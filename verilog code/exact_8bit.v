////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____ 
//  /   /\/   / 
// /___/  \  /    Vendor: Xilinx 
// \   \   \/     Version : 14.5
//  \   \         Application : sch2hdl
//  /   /         Filename : array_adder_8bit.vf
// /___/   /\     Timestamp : 09/12/2018 23:55:02
// \   \  /  \ 
//  \___\/\___\ 
//
//Command: sch2hdl -intstyle ise -family zynq -verilog C:/Users/USER/Desktop/asultan_NEW/HETMs/array_adder_8bit.vf -w C:/Users/USER/Desktop/asultan_NEW/HETMs/array_adder_8bit.sch
//Design Name: array_adder_8bit
//Device: zynq
//Purpose:
//    This verilog netlist is translated from an ECS schematic.It can be 
//    synthesized and simulated, but it should not be modified. 
//
`timescale 1ns / 1ps

module FA_BAM_MUSER_BAMV4H0(a, 
                            b, 
                            cin, 
                            cout, 
                            sum);

    input a;
    input b;
    input cin;
   output cout;
   output sum;
   
   wire XLXN_1;
   wire XLXN_2;
   wire XLXN_3;
   
   // xor  XLXI_1 (.I0(b), 
   //              .I1(a), 
   //              .O(XLXN_1));
   // xor  XLXI_2 (.I0(cin), 
   //              .I1(XLXN_1), 
   //              .O(sum));
   // and  XLXI_3 (.I0(cin), 
   //              .I1(XLXN_1), 
   //              .O(XLXN_2));
   // and  XLXI_4 (.I0(b), 
   //              .I1(a), 
   //              .O(XLXN_3));
   // or  XLXI_7 (.I0(XLXN_3), 
   //             .I1(XLXN_2), 
   //             .O(cout));
   assign XLXN_1 = a ^ b;
   assign sum = XLXN_1 ^ cin;
   assign XLXN_2 = cin & XLXN_1;
   assign XLXN_3 = a & b;
   assign cout = XLXN_2 | XLXN_3;

endmodule
`timescale 1ns / 1ps

module CSA_MUSER_BAMV4H0(a, 
                         b, 
                         cin, 
                         sumIn, 
                         cout, 
                         sumOut);

    input a;
    input b;
    input cin;
    input sumIn;
   output cout;
   output sumOut;
   
   wire XLXN_1;
   
   FA_BAM_MUSER_BAMV4H0  XLXI_5 ((XLXN_1), 
                                (sumIn), 
                                (cin), 
                                (cout), 
                                .sum(sumOut));
   // and  XLXI_6 (.I0(a), 
   //              .I1(b), 
   //              .O(XLXN_1));
   assign XLXN_1 = a & b;
endmodule
`timescale 1ns / 1ps

module array_adder_8bit(A, 
                        b, 
                        s);

    input [7:0] A;
    input [7:0] b;
   output [15:0] s;
   
   wire XLXN_1;
   wire XLXN_2;
   wire XLXN_3;
   wire XLXN_4;
   wire XLXN_7;
   wire XLXN_8;
   wire XLXN_9;
   wire XLXN_13;
   wire XLXN_711;
   wire XLXN_713;
   wire XLXN_714;
   wire XLXN_715;
   wire XLXN_716;
   wire XLXN_717;
   wire XLXN_718;
   wire XLXN_719;
   wire XLXN_823;
   wire XLXN_824;
   wire XLXN_825;
   wire XLXN_826;
   wire XLXN_827;
   wire XLXN_828;
   wire XLXN_829;
   wire XLXN_830;
   wire XLXN_839;
   wire XLXN_841;
   wire XLXN_842;
   wire XLXN_843;
   wire XLXN_844;
   wire XLXN_845;
   wire XLXN_846;
   wire XLXN_847;
   wire XLXN_856;
   wire XLXN_858;
   wire XLXN_859;
   wire XLXN_860;
   wire XLXN_861;
   wire XLXN_862;
   wire XLXN_863;
   wire XLXN_864;
   wire XLXN_865;
   wire XLXN_866;
   wire XLXN_867;
   wire XLXN_868;
   wire XLXN_869;
   wire XLXN_870;
   wire XLXN_871;
   wire XLXN_872;
   wire XLXN_873;
   wire XLXN_874;
   wire XLXN_875;
   wire XLXN_876;
   wire XLXN_877;
   wire XLXN_878;
   wire XLXN_879;
   wire XLXN_880;
   wire XLXN_889;
   wire XLXN_891;
   wire XLXN_892;
   wire XLXN_893;
   wire XLXN_894;
   wire XLXN_895;
   wire XLXN_896;
   wire XLXN_897;
   wire XLXN_906;
   wire XLXN_908;
   wire XLXN_909;
   wire XLXN_910;
   wire XLXN_911;
   wire XLXN_912;
   wire XLXN_913;
   wire XLXN_914;
   wire XLXN_915;
   wire XLXN_916;
   wire XLXN_917;
   wire XLXN_918;
   wire XLXN_919;
   wire XLXN_920;
   wire XLXN_921;
   wire XLXN_922;
   wire XLXN_931;
   wire XLXN_933;
   wire XLXN_934;
   wire XLXN_935;
   wire XLXN_936;
   wire XLXN_937;
   wire XLXN_938;
   wire XLXN_939;
   wire XLXN_948;
   wire XLXN_950;
   wire XLXN_951;
   wire XLXN_952;
   wire XLXN_953;
   wire XLXN_954;
   wire XLXN_955;
   wire XLXN_956;
   wire XLXN_957;
   wire XLXN_958;
   wire XLXN_959;
   wire XLXN_960;
   wire XLXN_961;
   wire XLXN_962;
   wire XLXN_963;
   wire XLXN_964;
   wire XLXN_965;
   wire XLXN_966;
   wire XLXN_967;
   wire XLXN_968;
   wire XLXN_969;
   wire XLXN_970;
   wire XLXN_971;
   wire XLXN_972;
   wire XLXN_973;
   wire XLXN_974;
   wire XLXN_975;
   wire XLXN_976;
   wire XLXN_977;
   wire XLXN_978;
   wire XLXN_979;
   wire XLXN_980;
   wire XLXN_981;
   
   CSA_MUSER_array_adder_8bit  XLXI_1 (.a(A[0]), 
                                      .b(b[0]), 
                                      .cin(XLXN_13), 
                                      .sumIn(XLXN_981), 
                                      .cout(XLXN_1), 
                                      .sumOut(s[0]));
   CSA_MUSER_array_adder_8bit  XLXI_2 (.a(A[1]), 
                                      .b(b[0]), 
                                      .cin(XLXN_1), 
                                      .sumIn(XLXN_981), 
                                      .cout(XLXN_2), 
                                      .sumOut(XLXN_823));
   CSA_MUSER_array_adder_8bit  XLXI_3 (.a(A[2]), 
                                      .b(b[0]), 
                                      .cin(XLXN_2), 
                                      .sumIn(XLXN_981), 
                                      .cout(XLXN_3), 
                                      .sumOut(XLXN_824));
   CSA_MUSER_array_adder_8bit  XLXI_4 (.a(A[3]), 
                                      .b(b[0]), 
                                      .cin(XLXN_3), 
                                      .sumIn(XLXN_981), 
                                      .cout(XLXN_4), 
                                      .sumOut(XLXN_825));
   CSA_MUSER_array_adder_8bit  XLXI_5 (.a(A[4]), 
                                      .b(b[0]), 
                                      .cin(XLXN_4), 
                                      .sumIn(XLXN_981), 
                                      .cout(XLXN_7), 
                                      .sumOut(XLXN_826));
   CSA_MUSER_array_adder_8bit  XLXI_6 (.a(A[5]), 
                                      .b(b[0]), 
                                      .cin(XLXN_7), 
                                      .sumIn(XLXN_981), 
                                      .cout(XLXN_8), 
                                      .sumOut(XLXN_827));
   CSA_MUSER_array_adder_8bit  XLXI_7 (.a(A[6]), 
                                      .b(b[0]), 
                                      .cin(XLXN_8), 
                                      .sumIn(XLXN_981), 
                                      .cout(XLXN_9), 
                                      .sumOut(XLXN_828));
   CSA_MUSER_array_adder_8bit  XLXI_8 (.a(A[7]), 
                                      .b(b[0]), 
                                      .cin(XLXN_9), 
                                      .sumIn(XLXN_981), 
                                      .cout(XLXN_830), 
                                      .sumOut(XLXN_829));
   CSA_MUSER_array_adder_8bit  XLXI_496 (.a(A[6]), 
                                        .b(b[1]), 
                                        .cin(XLXN_713), 
                                        .sumIn(XLXN_829), 
                                        .cout(XLXN_714), 
                                        .sumOut(XLXN_878));
   CSA_MUSER_array_adder_8bit  XLXI_497 (.a(A[4]), 
                                        .b(b[1]), 
                                        .cin(XLXN_716), 
                                        .sumIn(XLXN_827), 
                                        .cout(XLXN_715), 
                                        .sumOut(XLXN_876));
   CSA_MUSER_array_adder_8bit  XLXI_498 (.a(A[2]), 
                                        .b(b[1]), 
                                        .cin(XLXN_718), 
                                        .sumIn(XLXN_825), 
                                        .cout(XLXN_717), 
                                        .sumOut(XLXN_874));
   CSA_MUSER_array_adder_8bit  XLXI_499 (.a(A[0]), 
                                        .b(b[1]), 
                                        .cin(XLXN_711), 
                                        .sumIn(XLXN_823), 
                                        .cout(XLXN_719), 
                                        .sumOut(s[1]));
   CSA_MUSER_array_adder_8bit  XLXI_500 (.a(A[1]), 
                                        .b(b[1]), 
                                        .cin(XLXN_719), 
                                        .sumIn(XLXN_824), 
                                        .cout(XLXN_718), 
                                        .sumOut(XLXN_873));
   CSA_MUSER_array_adder_8bit  XLXI_501 (.a(A[3]), 
                                        .b(b[1]), 
                                        .cin(XLXN_717), 
                                        .sumIn(XLXN_826), 
                                        .cout(XLXN_716), 
                                        .sumOut(XLXN_875));
   CSA_MUSER_array_adder_8bit  XLXI_502 (.a(A[5]), 
                                        .b(b[1]), 
                                        .cin(XLXN_715), 
                                        .sumIn(XLXN_828), 
                                        .cout(XLXN_713), 
                                        .sumOut(XLXN_877));
   CSA_MUSER_array_adder_8bit  XLXI_503 (.a(A[7]), 
                                        .b(b[1]), 
                                        .cin(XLXN_714), 
                                        .sumIn(XLXN_830), 
                                        .cout(XLXN_880), 
                                        .sumOut(XLXN_879));
   CSA_MUSER_array_adder_8bit  XLXI_552 (.a(A[6]), 
                                        .b(b[2]), 
                                        .cin(XLXN_841), 
                                        .sumIn(XLXN_879), 
                                        .cout(XLXN_842), 
                                        .sumOut(XLXN_870));
   CSA_MUSER_array_adder_8bit  XLXI_553 (.a(A[4]), 
                                        .b(b[2]), 
                                        .cin(XLXN_844), 
                                        .sumIn(XLXN_877), 
                                        .cout(XLXN_843), 
                                        .sumOut(XLXN_868));
   CSA_MUSER_array_adder_8bit  XLXI_554 (.a(A[2]), 
                                        .b(b[2]), 
                                        .cin(XLXN_846), 
                                        .sumIn(XLXN_875), 
                                        .cout(XLXN_845), 
                                        .sumOut(XLXN_866));
   CSA_MUSER_array_adder_8bit  XLXI_555 (.a(A[0]), 
                                        .b(b[2]), 
                                        .cin(XLXN_839), 
                                        .sumIn(XLXN_873), 
                                        .cout(XLXN_847), 
                                        .sumOut(s[2]));
   CSA_MUSER_array_adder_8bit  XLXI_556 (.a(A[1]), 
                                        .b(b[2]), 
                                        .cin(XLXN_847), 
                                        .sumIn(XLXN_874), 
                                        .cout(XLXN_846), 
                                        .sumOut(XLXN_865));
   CSA_MUSER_array_adder_8bit  XLXI_557 (.a(A[3]), 
                                        .b(b[2]), 
                                        .cin(XLXN_845), 
                                        .sumIn(XLXN_876), 
                                        .cout(XLXN_844), 
                                        .sumOut(XLXN_867));
   CSA_MUSER_array_adder_8bit  XLXI_558 (.a(A[5]), 
                                        .b(b[2]), 
                                        .cin(XLXN_843), 
                                        .sumIn(XLXN_878), 
                                        .cout(XLXN_841), 
                                        .sumOut(XLXN_869));
   CSA_MUSER_array_adder_8bit  XLXI_559 (.a(A[7]), 
                                        .b(b[2]), 
                                        .cin(XLXN_842), 
                                        .sumIn(XLXN_880), 
                                        .cout(XLXN_872), 
                                        .sumOut(XLXN_871));
   CSA_MUSER_array_adder_8bit  XLXI_560 (.a(A[6]), 
                                        .b(b[3]), 
                                        .cin(XLXN_858), 
                                        .sumIn(XLXN_871), 
                                        .cout(XLXN_859), 
                                        .sumOut(XLXN_978));
   CSA_MUSER_array_adder_8bit  XLXI_561 (.a(A[4]), 
                                        .b(b[3]), 
                                        .cin(XLXN_861), 
                                        .sumIn(XLXN_869), 
                                        .cout(XLXN_860), 
                                        .sumOut(XLXN_976));
   CSA_MUSER_array_adder_8bit  XLXI_562 (.a(A[2]), 
                                        .b(b[3]), 
                                        .cin(XLXN_863), 
                                        .sumIn(XLXN_867), 
                                        .cout(XLXN_862), 
                                        .sumOut(XLXN_974));
   CSA_MUSER_array_adder_8bit  XLXI_563 (.a(A[0]), 
                                        .b(b[3]), 
                                        .cin(XLXN_856), 
                                        .sumIn(XLXN_865), 
                                        .cout(XLXN_864), 
                                        .sumOut(s[3]));
   CSA_MUSER_array_adder_8bit  XLXI_564 (.a(A[1]), 
                                        .b(b[3]), 
                                        .cin(XLXN_864), 
                                        .sumIn(XLXN_866), 
                                        .cout(XLXN_863), 
                                        .sumOut(XLXN_973));
   CSA_MUSER_array_adder_8bit  XLXI_565 (.a(A[3]), 
                                        .b(b[3]), 
                                        .cin(XLXN_862), 
                                        .sumIn(XLXN_868), 
                                        .cout(XLXN_861), 
                                        .sumOut(XLXN_975));
   CSA_MUSER_array_adder_8bit  XLXI_566 (.a(A[5]), 
                                        .b(b[3]), 
                                        .cin(XLXN_860), 
                                        .sumIn(XLXN_870), 
                                        .cout(XLXN_858), 
                                        .sumOut(XLXN_977));
   CSA_MUSER_array_adder_8bit  XLXI_567 (.a(A[7]), 
                                        .b(b[3]), 
                                        .cin(XLXN_859), 
                                        .sumIn(XLXN_872), 
                                        .cout(XLXN_980), 
                                        .sumOut(XLXN_979));
   CSA_MUSER_array_adder_8bit  XLXI_568 (.a(A[6]), 
                                        .b(b[4]), 
                                        .cin(XLXN_891), 
                                        .sumIn(XLXN_979), 
                                        .cout(XLXN_892), 
                                        .sumOut(XLXN_920));
   CSA_MUSER_array_adder_8bit  XLXI_569 (.a(A[4]), 
                                        .b(b[4]), 
                                        .cin(XLXN_894), 
                                        .sumIn(XLXN_977), 
                                        .cout(XLXN_893), 
                                        .sumOut(XLXN_918));
   CSA_MUSER_array_adder_8bit  XLXI_570 (.a(A[2]), 
                                        .b(b[4]), 
                                        .cin(XLXN_896), 
                                        .sumIn(XLXN_975), 
                                        .cout(XLXN_895), 
                                        .sumOut(XLXN_916));
   CSA_MUSER_array_adder_8bit  XLXI_571 (.a(A[0]), 
                                        .b(b[4]), 
                                        .cin(XLXN_889), 
                                        .sumIn(XLXN_973), 
                                        .cout(XLXN_897), 
                                        .sumOut(s[4]));
   CSA_MUSER_array_adder_8bit  XLXI_572 (.a(A[1]), 
                                        .b(b[4]), 
                                        .cin(XLXN_897), 
                                        .sumIn(XLXN_974), 
                                        .cout(XLXN_896), 
                                        .sumOut(XLXN_915));
   CSA_MUSER_array_adder_8bit  XLXI_573 (.a(A[3]), 
                                        .b(b[4]), 
                                        .cin(XLXN_895), 
                                        .sumIn(XLXN_976), 
                                        .cout(XLXN_894), 
                                        .sumOut(XLXN_917));
   CSA_MUSER_array_adder_8bit  XLXI_574 (.a(A[5]), 
                                        .b(b[4]), 
                                        .cin(XLXN_893), 
                                        .sumIn(XLXN_978), 
                                        .cout(XLXN_891), 
                                        .sumOut(XLXN_919));
   CSA_MUSER_array_adder_8bit  XLXI_575 (.a(A[7]), 
                                        .b(b[4]), 
                                        .cin(XLXN_892), 
                                        .sumIn(XLXN_980), 
                                        .cout(XLXN_922), 
                                        .sumOut(XLXN_921));
   CSA_MUSER_array_adder_8bit  XLXI_576 (.a(A[6]), 
                                        .b(b[5]), 
                                        .cin(XLXN_908), 
                                        .sumIn(XLXN_921), 
                                        .cout(XLXN_909), 
                                        .sumOut(XLXN_970));
   CSA_MUSER_array_adder_8bit  XLXI_577 (.a(A[4]), 
                                        .b(b[5]), 
                                        .cin(XLXN_911), 
                                        .sumIn(XLXN_919), 
                                        .cout(XLXN_910), 
                                        .sumOut(XLXN_968));
   CSA_MUSER_array_adder_8bit  XLXI_578 (.a(A[2]), 
                                        .b(b[5]), 
                                        .cin(XLXN_913), 
                                        .sumIn(XLXN_917), 
                                        .cout(XLXN_912), 
                                        .sumOut(XLXN_966));
   CSA_MUSER_array_adder_8bit  XLXI_579 (.a(A[0]), 
                                        .b(b[5]), 
                                        .cin(XLXN_906), 
                                        .sumIn(XLXN_915), 
                                        .cout(XLXN_914), 
                                        .sumOut(s[5]));
   CSA_MUSER_array_adder_8bit  XLXI_580 (.a(A[1]), 
                                        .b(b[5]), 
                                        .cin(XLXN_914), 
                                        .sumIn(XLXN_916), 
                                        .cout(XLXN_913), 
                                        .sumOut(XLXN_965));
   CSA_MUSER_array_adder_8bit  XLXI_581 (.a(A[3]), 
                                        .b(b[5]), 
                                        .cin(XLXN_912), 
                                        .sumIn(XLXN_918), 
                                        .cout(XLXN_911), 
                                        .sumOut(XLXN_967));
   CSA_MUSER_array_adder_8bit  XLXI_582 (.a(A[5]), 
                                        .b(b[5]), 
                                        .cin(XLXN_910), 
                                        .sumIn(XLXN_920), 
                                        .cout(XLXN_908), 
                                        .sumOut(XLXN_969));
   CSA_MUSER_array_adder_8bit  XLXI_583 (.a(A[7]), 
                                        .b(b[5]), 
                                        .cin(XLXN_909), 
                                        .sumIn(XLXN_922), 
                                        .cout(XLXN_972), 
                                        .sumOut(XLXN_971));
   CSA_MUSER_array_adder_8bit  XLXI_584 (.a(A[6]), 
                                        .b(b[6]), 
                                        .cin(XLXN_933), 
                                        .sumIn(XLXN_971), 
                                        .cout(XLXN_934), 
                                        .sumOut(XLXN_962));
   CSA_MUSER_array_adder_8bit  XLXI_585 (.a(A[4]), 
                                        .b(b[6]), 
                                        .cin(XLXN_936), 
                                        .sumIn(XLXN_969), 
                                        .cout(XLXN_935), 
                                        .sumOut(XLXN_960));
   CSA_MUSER_array_adder_8bit  XLXI_586 (.a(A[2]), 
                                        .b(b[6]), 
                                        .cin(XLXN_938), 
                                        .sumIn(XLXN_967), 
                                        .cout(XLXN_937), 
                                        .sumOut(XLXN_958));
   CSA_MUSER_array_adder_8bit  XLXI_587 (.a(A[0]), 
                                        .b(b[6]), 
                                        .cin(XLXN_931), 
                                        .sumIn(XLXN_965), 
                                        .cout(XLXN_939), 
                                        .sumOut(s[6]));
   CSA_MUSER_array_adder_8bit  XLXI_588 (.a(A[1]), 
                                        .b(b[6]), 
                                        .cin(XLXN_939), 
                                        .sumIn(XLXN_966), 
                                        .cout(XLXN_938), 
                                        .sumOut(XLXN_957));
   CSA_MUSER_array_adder_8bit  XLXI_589 (.a(A[3]), 
                                        .b(b[6]), 
                                        .cin(XLXN_937), 
                                        .sumIn(XLXN_968), 
                                        .cout(XLXN_936), 
                                        .sumOut(XLXN_959));
   CSA_MUSER_array_adder_8bit  XLXI_590 (.a(A[5]), 
                                        .b(b[6]), 
                                        .cin(XLXN_935), 
                                        .sumIn(XLXN_970), 
                                        .cout(XLXN_933), 
                                        .sumOut(XLXN_961));
   CSA_MUSER_array_adder_8bit  XLXI_591 (.a(A[7]), 
                                        .b(b[6]), 
                                        .cin(XLXN_934), 
                                        .sumIn(XLXN_972), 
                                        .cout(XLXN_964), 
                                        .sumOut(XLXN_963));
   CSA_MUSER_array_adder_8bit  XLXI_592 (.a(A[6]), 
                                        .b(b[7]), 
                                        .cin(XLXN_950), 
                                        .sumIn(XLXN_963), 
                                        .cout(XLXN_951), 
                                        .sumOut(s[13]));
   CSA_MUSER_array_adder_8bit  XLXI_593 (.a(A[4]), 
                                        .b(b[7]), 
                                        .cin(XLXN_953), 
                                        .sumIn(XLXN_961), 
                                        .cout(XLXN_952), 
                                        .sumOut(s[11]));
   CSA_MUSER_array_adder_8bit  XLXI_594 (.a(A[2]), 
                                        .b(b[7]), 
                                        .cin(XLXN_955), 
                                        .sumIn(XLXN_959), 
                                        .cout(XLXN_954), 
                                        .sumOut(s[9]));
   CSA_MUSER_array_adder_8bit  XLXI_595 (.a(A[0]), 
                                        .b(b[7]), 
                                        .cin(XLXN_948), 
                                        .sumIn(XLXN_957), 
                                        .cout(XLXN_956), 
                                        .sumOut(s[7]));
   CSA_MUSER_array_adder_8bit  XLXI_596 (.a(A[1]), 
                                        .b(b[7]), 
                                        .cin(XLXN_956), 
                                        .sumIn(XLXN_958), 
                                        .cout(XLXN_955), 
                                        .sumOut(s[8]));
   CSA_MUSER_array_adder_8bit  XLXI_597 (.a(A[3]), 
                                        .b(b[7]), 
                                        .cin(XLXN_954), 
                                        .sumIn(XLXN_960), 
                                        .cout(XLXN_953), 
                                        .sumOut(s[10]));
   CSA_MUSER_array_adder_8bit  XLXI_598 (.a(A[5]), 
                                        .b(b[7]), 
                                        .cin(XLXN_952), 
                                        .sumIn(XLXN_962), 
                                        .cout(XLXN_950), 
                                        .sumOut(s[12]));
   CSA_MUSER_array_adder_8bit  XLXI_599 (.a(A[7]), 
                                        .b(b[7]), 
                                        .cin(XLXN_951), 
                                        .sumIn(XLXN_964), 
                                        .cout(s[15]), 
                                        .sumOut(s[14]));
   GND  XLXI_600 (.G(XLXN_13));
   GND  XLXI_601 (.G(XLXN_711));
   GND  XLXI_602 (.G(XLXN_839));
   GND  XLXI_603 (.G(XLXN_856));
   GND  XLXI_604 (.G(XLXN_889));
   GND  XLXI_605 (.G(XLXN_906));
   GND  XLXI_606 (.G(XLXN_931));
   GND  XLXI_607 (.G(XLXN_948));
   GND  XLXI_608 (.G(XLXN_981));
endmodule
