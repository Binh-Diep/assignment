/* verilator lint_off UNUSED */
module serial_adder (
    //inputs
    input logic clk_i,
    input logic [7:0] M_i,
    input logic [7:0] N_i,
    //outputs
    output logic [8:0] result_o
);
    //variables
    logic [8:0] register_A;
    logic [8:0] register_B;
    logic [3:0] count;
    logic out_regA;
    logic out_regB;
    logic out_sum;
    logic out_carry;
    logic Q_FF;
    //modules
    FA full_adder(
    	.x_i (out_regA),
    	.y_i (out_regB),
    	.z_i (Q_FF),
    	.s_o (out_sum),
    	.c_o (out_carry)
    );
    typedef enum logic [1:0] {
        INIT    = 2'b00,
        LOAD    = 2'b01,
    	PROCESS = 2'b10,
    	END     = 2'b11
    } state_e;
    state_e current_state;
    //code 
    always_ff @(posedge clk_i) begin
        case (current_state)
            INIT: begin
                register_A <= 0;
                register_B <= 0;
                count      <= 0;
                current_state <= LOAD;
            end
            LOAD: begin
                register_A <= {1'b0,M_i}; 
                register_B <= {1'b0,N_i};
                current_state <= PROCESS;   
            end          
            PROCESS: begin
                if (count <= 9) begin
                    register_A <= (register_A >> 1);
                    register_B <= (register_B >> 1);
                    out_regA <= register_A[0];
                    out_regB <= register_B[0];
                    register_A[8] <= out_sum;
                    Q_FF <= out_carry;
                    count <= (count + 4'b0001);
                end
                else begin
                    current_state <= END;
                end
            end
            END: begin
                result_o <= register_A;
            end
            default: result_o <= 9'h0;
        endcase
    end
    always_comb begin
        //$display("REGa: %b -- state: %b",register_A,current_state);
        //$display("REGb: %b -- state: %b",register_B,current_state);
        $display("SUM: %b -- state: %b",result_o,current_state);
    end
endmodule : serial_adder
