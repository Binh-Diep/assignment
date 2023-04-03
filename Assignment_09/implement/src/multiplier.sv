module multiplier (
    //inputs
    input logic clk_i,
    input logic [7:0] M_i,
    input logic [7:0] N_i,
    //outputs
    output logic [15:0] result_o
);
    //variables
    logic [9:0]  A_tmp;
    logic [9:0]  Q_tmp;
    logic [9:0]  M_tmp;
    logic [2:0]  count;
    logic [20:0] REG;
    typedef enum logic [2:0] {
    	INIT     = 3'b000,
    	PRE_BOOT = 3'b001,
    	LOAD     = 3'b010,
    	SHIFT    = 3'b011,
    	UPLOAD   = 3'b100,
    	CALC     = 3'b101,
    	SEND     = 3'b110
    } state_e;
    state_e current_state;
    //code
    always_ff @(posedge clk_i) begin
        case (current_state)
            INIT: begin
                A_tmp <= 10'h0;
                Q_tmp <= 10'h0;
                M_tmp <= 10'h0;
                count <= 3'h0;
                current_state <= PRE_BOOT;
            end
            PRE_BOOT: begin
                if (M_i[7] && N_i[7]) begin
                    M_tmp <= {2'b11,M_i};
                    Q_tmp <= {2'b11,N_i};
                end
                else if (M_i[7] && !N_i[7]) begin
                    M_tmp <= {2'b11,M_i};
                    Q_tmp <= {2'b00,N_i};
                end
                else if (!M_i[7] && N_i[7]) begin
                    M_tmp <= {2'b00,M_i};
                    Q_tmp <= {2'b11,N_i};
                end
                else begin      
                    M_tmp <= {2'b00,M_i};
                    Q_tmp <= {2'b00,N_i};
                end
                current_state <= LOAD;
            end
            LOAD: begin
                if (count <= 5) begin 
                    REG[20:0] <= {A_tmp,Q_tmp,REG[0]};
                    current_state <= SHIFT;
                end
                else begin
                    current_state <= SEND;
                end
            end
            SHIFT: begin
                if (count > 0) begin
                    REG[20:0] <= ($signed(REG[20:0]) >>> 2);
                    current_state <= UPLOAD;
                end
                else begin
                    current_state <= UPLOAD;
                end
            end
            UPLOAD: begin
                A_tmp <= REG[20:11];
                Q_tmp <= REG[10:1];
                current_state <= CALC;
            end
            CALC: begin
                case (REG[2:0])
                    3'b000,3'b111: begin
                        A_tmp <= (A_tmp + 10'h0);
                    end
                    3'b001,3'b010: begin
                        A_tmp <= (A_tmp + M_tmp);
                    end
                    3'b011: begin
                        A_tmp <= (A_tmp + (M_tmp <<< 1));
                    end
                    3'b100: begin
                        A_tmp <= (A_tmp + (~(M_tmp <<< 1) + 10'h01));
                    end
                    3'b101,3'b110: begin
                        A_tmp <= (A_tmp + (~(M_tmp) + 10'h01));
                    end
                    default: A_tmp <= 10'h0;
                endcase
                count         <= (count + 3'b001);
                current_state <= LOAD; 
            end
            SEND: begin
                result_o <= REG[16:1];
            end
            default: result_o <= 16'h000;
        endcase
    end
    always_comb begin
        $display("MUL: %b --- state: %b",result_o,current_state);
    end
endmodule : multiplier
