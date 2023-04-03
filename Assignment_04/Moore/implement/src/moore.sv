module moore (
    //inputs
    input logic clk_i,
    input logic rst_ni,
    input logic string_i,
    //outputs
    output logic valid_o
);
    typedef enum logic [2:0] {
    	IDLE  = 3'b000,
    	D1    = 3'b001,
    	D10   = 3'b010,
    	D101  = 3'b011,
    	D1010 = 3'b100
    } state_e;
    state_e current_state;
    state_e next_state;
    logic tmp_valid;
    //implement code
    //combination 1
    always_comb begin : proc_n_state
        case (current_state)
            IDLE:  begin
                if (string_i) next_state = D1;
                else          next_state = current_state;
            end
            D1:    begin
                if (string_i) next_state = current_state;
                else          next_state = D10;
            end
            D10:   begin
                if (string_i) next_state = D101;
                else          next_state = IDLE;
            end
            D101:  begin
                if (string_i) next_state = D1;
                else          next_state = D1010;
            end
            D1010: begin
                if (string_i) next_state = D101;
                else          next_state = IDLE;
            end
            default: next_state = IDLE;
        endcase
    end
    //sequence: next_state = current_state
    always_ff @(posedge clk_i,negedge rst_ni) begin : proc_state
        if (!rst_ni) current_state <= IDLE;
        else         current_state <= next_state;
    end
    //combination 2
    always_comb begin : proc_output
        if (current_state == D1010) tmp_valid = 1'b1;
        else                        tmp_valid = 1'b0;
    end
    //implement output
    assign valid_o = tmp_valid;
endmodule : moore
