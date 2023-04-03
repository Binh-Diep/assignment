module upcounter4bit (
    //inputs
    input logic clk_i,
    input logic [3:0] N_i,
    //outputs
    output logic [3:0] Q_o
);
    logic rst_n;
    //implement code
    always_ff @(posedge clk_i,negedge rst_n) begin : proc_counter
        if (!rst_n) Q_o <= 4'b0000;
        else begin
            Q_o <= Q_o + 4'b0001;
        end
    end

    always_comb begin : proc_modulo
        case (N_i)
            4'b0001: rst_n = ~Q_o[0];
            4'b0010: rst_n = ~Q_o[1];
            4'b0011: rst_n = ~Q_o[1] | ~Q_o[0];
            4'b0100: rst_n = ~Q_o[2];
            4'b0101: rst_n = ~Q_o[2] | ~Q_o[0];
            4'b0110: rst_n = ~Q_o[2] | ~Q_o[1];
            4'b0111: rst_n = ~Q_o[2] | ~Q_o[1] | ~Q_o[0];
            4'b1000: rst_n = ~Q_o[3];
            4'b1001: rst_n = ~Q_o[3] | ~Q_o[0];
            4'b1010: rst_n = ~Q_o[2] | ~Q_o[1];
            4'b1011: rst_n = ~Q_o[3] | ~Q_o[1] | ~Q_o[0];
            4'b1100: rst_n = ~Q_o[3] | ~Q_o[2];
            4'b1101: rst_n = ~Q_o[3] | ~Q_o[2] | ~Q_o[0];
            4'b1110: rst_n = ~Q_o[3] | ~Q_o[2] | ~Q_o[1];
            4'b1111: rst_n = ~Q_o[3] | ~Q_o[2] | ~Q_o[1] | ~Q_o[0];
            default: rst_n = 1'b1;
        endcase
    end
endmodule : upcounter4bit
