////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____ 
//  /   /\/   / 
// /___/  \  /    Vendor: Xilinx 
// \   \   \/     Version : 14.5
//  \   \         Application : sch2hdl
//  /   /         Filename : BAMV4H0.vf
// /___/   /\     Timestamp : 09/13/2018 00:01:12
// \   \  /  \ 
//  \___\/\___\ 
//
//Command: sch2hdl -intstyle ise -family zynq -verilog C:/Users/USER/Desktop/asultan_NEW/HETMs/BAMV4H0.vf -w C:/Users/USER/Desktop/asultan_NEW/HETMs/BAMV4H0.sch
//Design Name: BAMV4H0
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

module BAMV4H0(A, 
               b, 
               s);

    input [7:0] A;
    input [7:0] b;
   output [15:0] s;
   
   wire XLXN_4;
   wire XLXN_7;
   wire XLXN_8;
   wire XLXN_12;
   wire XLXN_713;
   wire XLXN_714;
   wire XLXN_715;
   wire XLXN_716;
   wire XLXN_717;
   wire XLXN_826;
   wire XLXN_827;
   wire XLXN_828;
   wire XLXN_829;
   wire XLXN_830;
   wire XLXN_841;
   wire XLXN_842;
   wire XLXN_843;
   wire XLXN_844;
   wire XLXN_845;
   wire XLXN_846;
   wire XLXN_858;
   wire XLXN_859;
   wire XLXN_860;
   wire XLXN_861;
   wire XLXN_862;
   wire XLXN_863;
   wire XLXN_864;
   wire XLXN_866;
   wire XLXN_867;
   wire XLXN_868;
   wire XLXN_869;
   wire XLXN_870;
   wire XLXN_871;
   wire XLXN_872;
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
   
   CSA_MUSER_BAMV4H0  XLXI_1 ((A[6]), 
                             (b[0]), 
                             (XLXN_8), 
                             (XLXN_981), 
                             (XLXN_12), 
                             (XLXN_828));
   CSA_MUSER_BAMV4H0  XLXI_2 ((A[4]), 
                             (b[0]), 
                             (XLXN_4), 
                             (XLXN_981), 
                             (XLXN_7), 
                             (XLXN_826));
   CSA_MUSER_BAMV4H0  XLXI_7 ((A[5]), 
                             (b[0]), 
                             (XLXN_7), 
                             (XLXN_981), 
                             (XLXN_8), 
                             (XLXN_827));
   CSA_MUSER_BAMV4H0  XLXI_8 ((A[7]), 
                             (b[0]), 
                             (XLXN_12), 
                             (XLXN_981), 
                             (XLXN_830), 
                             (XLXN_829));
   CSA_MUSER_BAMV4H0  XLXI_496 ((A[6]), 
                               (b[1]), 
                               (XLXN_713), 
                               (XLXN_829), 
                               (XLXN_714), 
                               (XLXN_878));
   CSA_MUSER_BAMV4H0  XLXI_497 ((A[4]), 
                               (b[1]), 
                               (XLXN_716), 
                               (XLXN_827), 
                               (XLXN_715), 
                               (XLXN_876));
   CSA_MUSER_BAMV4H0  XLXI_501 ((A[3]), 
                               (b[1]), 
                               (XLXN_717), 
                               (XLXN_826), 
                               (XLXN_716), 
                               (XLXN_875));
   CSA_MUSER_BAMV4H0  XLXI_502 ((A[5]), 
                               (b[1]), 
                               (XLXN_715), 
                               (XLXN_828), 
                               (XLXN_713), 
                               (XLXN_877));
   CSA_MUSER_BAMV4H0  XLXI_503 ((A[7]), 
                               (b[1]), 
                               (XLXN_714), 
                               (XLXN_830), 
                               (XLXN_880), 
                               (XLXN_879));
   CSA_MUSER_BAMV4H0  XLXI_552 ((A[6]), 
                               (b[2]), 
                               (XLXN_841), 
                               (XLXN_879), 
                               (XLXN_842), 
                               (XLXN_870));
   CSA_MUSER_BAMV4H0  XLXI_553 ((A[4]), 
                               (b[2]), 
                               (XLXN_844), 
                               (XLXN_877), 
                               (XLXN_843), 
                               (XLXN_868));
   CSA_MUSER_BAMV4H0  XLXI_554 ((A[2]), 
                               (b[2]), 
                               (XLXN_846), 
                               (XLXN_875), 
                               (XLXN_845), 
                               (XLXN_866));
   CSA_MUSER_BAMV4H0  XLXI_557 ((A[3]), 
                               (b[2]), 
                               (XLXN_845), 
                               (XLXN_876), 
                               (XLXN_844), 
                               (XLXN_867));
   CSA_MUSER_BAMV4H0  XLXI_558 ((A[5]), 
                               (b[2]), 
                               (XLXN_843), 
                               (XLXN_878), 
                               (XLXN_841), 
                               (XLXN_869));
   CSA_MUSER_BAMV4H0  XLXI_559 ((A[7]), 
                               (b[2]), 
                               (XLXN_842), 
                               (XLXN_880), 
                               (XLXN_872), 
                               (XLXN_871));
   CSA_MUSER_BAMV4H0  XLXI_560 ((A[6]), 
                               (b[3]), 
                               (XLXN_858), 
                               (XLXN_871), 
                               (XLXN_859), 
                               (XLXN_978));
   CSA_MUSER_BAMV4H0  XLXI_561 ((A[4]), 
                               (b[3]), 
                               (XLXN_861), 
                               (XLXN_869), 
                               (XLXN_860), 
                               (XLXN_976));
   CSA_MUSER_BAMV4H0  XLXI_562 ((A[2]), 
                               (b[3]), 
                               (XLXN_863), 
                               (XLXN_867), 
                               (XLXN_862), 
                               (XLXN_974));
   CSA_MUSER_BAMV4H0  XLXI_564 ((A[1]), 
                               (b[3]), 
                               (XLXN_864), 
                               (XLXN_866), 
                               (XLXN_863), 
                               (XLXN_973));
   CSA_MUSER_BAMV4H0  XLXI_565 ((A[3]), 
                               (b[3]), 
                               (XLXN_862), 
                               (XLXN_868), 
                               (XLXN_861), 
                               (XLXN_975));
   CSA_MUSER_BAMV4H0  XLXI_566 ((A[5]), 
                               (b[3]), 
                               (XLXN_860), 
                               (XLXN_870), 
                               (XLXN_858), 
                               (XLXN_977));
   CSA_MUSER_BAMV4H0  XLXI_567 ((A[7]), 
                               (b[3]), 
                               (XLXN_859), 
                               (XLXN_872), 
                               (XLXN_980), 
                               (XLXN_979));
   CSA_MUSER_BAMV4H0  XLXI_568 ((A[6]), 
                               (b[4]), 
                               (XLXN_891), 
                               (XLXN_979), 
                               (XLXN_892), 
                               (XLXN_920));
   CSA_MUSER_BAMV4H0  XLXI_569 ((A[4]), 
                               (b[4]), 
                               (XLXN_894), 
                               (XLXN_977), 
                               (XLXN_893), 
                               (XLXN_918));
   CSA_MUSER_BAMV4H0  XLXI_570 ((A[2]), 
                               (b[4]), 
                               (XLXN_896), 
                               (XLXN_975), 
                               (XLXN_895), 
                               (XLXN_916));
   CSA_MUSER_BAMV4H0  XLXI_571 ((A[0]), 
                               (b[4]), 
                               (XLXN_889), 
                               (XLXN_973), 
                               (XLXN_897), 
                               (s[4]));
   CSA_MUSER_BAMV4H0  XLXI_572 ((A[1]), 
                               (b[4]), 
                               (XLXN_897), 
                               (XLXN_974), 
                               (XLXN_896), 
                               (XLXN_915));
   CSA_MUSER_BAMV4H0  XLXI_573 ((A[3]), 
                               (b[4]), 
                               (XLXN_895), 
                               (XLXN_976), 
                               (XLXN_894), 
                               (XLXN_917));
   CSA_MUSER_BAMV4H0  XLXI_574 ((A[5]), 
                               (b[4]), 
                               (XLXN_893), 
                               (XLXN_978), 
                               (XLXN_891), 
                               (XLXN_919));
   CSA_MUSER_BAMV4H0  XLXI_575 ((A[7]), 
                               (b[4]), 
                               (XLXN_892), 
                               (XLXN_980), 
                               (XLXN_922), 
                               (XLXN_921));
   CSA_MUSER_BAMV4H0  XLXI_576 ((A[6]), 
                               (b[5]), 
                               (XLXN_908), 
                               (XLXN_921), 
                               (XLXN_909), 
                               (XLXN_970));
   CSA_MUSER_BAMV4H0  XLXI_577 ((A[4]), 
                               (b[5]), 
                               (XLXN_911), 
                               (XLXN_919), 
                               (XLXN_910), 
                               (XLXN_968));
   CSA_MUSER_BAMV4H0  XLXI_578 ((A[2]), 
                               (b[5]), 
                               (XLXN_913), 
                               (XLXN_917), 
                               (XLXN_912), 
                               (XLXN_966));
   CSA_MUSER_BAMV4H0  XLXI_579 ((A[0]), 
                               (b[5]), 
                               (XLXN_906), 
                               (XLXN_915), 
                               (XLXN_914), 
                               (s[5]));
   CSA_MUSER_BAMV4H0  XLXI_580 ((A[1]), 
                               (b[5]), 
                               (XLXN_914), 
                               (XLXN_916), 
                               (XLXN_913), 
                               (XLXN_965));
   CSA_MUSER_BAMV4H0  XLXI_581 ((A[3]), 
                               (b[5]), 
                               (XLXN_912), 
                               (XLXN_918), 
                               (XLXN_911), 
                               (XLXN_967));
   CSA_MUSER_BAMV4H0  XLXI_582 ((A[5]), 
                               (b[5]), 
                               (XLXN_910), 
                               (XLXN_920), 
                               (XLXN_908), 
                               (XLXN_969));
   CSA_MUSER_BAMV4H0  XLXI_583 ((A[7]), 
                               (b[5]), 
                               (XLXN_909), 
                               (XLXN_922), 
                               (XLXN_972), 
                               (XLXN_971));
   CSA_MUSER_BAMV4H0  XLXI_584 ((A[6]), 
                               (b[6]), 
                               (XLXN_933), 
                               (XLXN_971), 
                               (XLXN_934), 
                               (XLXN_962));
   CSA_MUSER_BAMV4H0  XLXI_585 ((A[4]), 
                               (b[6]), 
                               (XLXN_936), 
                               (XLXN_969), 
                               (XLXN_935), 
                               (XLXN_960));
   CSA_MUSER_BAMV4H0  XLXI_586 ((A[2]), 
                               (b[6]), 
                               (XLXN_938), 
                               (XLXN_967), 
                               (XLXN_937), 
                               (XLXN_958));
   CSA_MUSER_BAMV4H0  XLXI_587 ((A[0]), 
                               (b[6]), 
                               (XLXN_931), 
                               (XLXN_965), 
                               (XLXN_939), 
                               (s[6]));
   CSA_MUSER_BAMV4H0  XLXI_588 ((A[1]), 
                               (b[6]), 
                               (XLXN_939), 
                               (XLXN_966), 
                               (XLXN_938), 
                               (XLXN_957));
   CSA_MUSER_BAMV4H0  XLXI_589 ((A[3]), 
                               (b[6]), 
                               (XLXN_937), 
                               (XLXN_968), 
                               (XLXN_936), 
                               (XLXN_959));
   CSA_MUSER_BAMV4H0  XLXI_590 ((A[5]), 
                               (b[6]), 
                               (XLXN_935), 
                               (XLXN_970), 
                               (XLXN_933), 
                               (XLXN_961));
   CSA_MUSER_BAMV4H0  XLXI_591 ((A[7]), 
                               (b[6]), 
                               (XLXN_934), 
                               (XLXN_972), 
                               (XLXN_964), 
                               (XLXN_963));
   CSA_MUSER_BAMV4H0  XLXI_592 ((A[6]), 
                               (b[7]), 
                               (XLXN_950), 
                               (XLXN_963), 
                               (XLXN_951), 
                               (s[13]));
   CSA_MUSER_BAMV4H0  XLXI_593 ((A[4]), 
                               (b[7]), 
                               (XLXN_953), 
                               (XLXN_961), 
                               (XLXN_952), 
                               (s[11]));
   CSA_MUSER_BAMV4H0  XLXI_594 ((A[2]), 
                               (b[7]), 
                               (XLXN_955), 
                               (XLXN_959), 
                               (XLXN_954), 
                               (s[9]));
   CSA_MUSER_BAMV4H0  XLXI_595 ((A[0]), 
                               (b[7]), 
                               (XLXN_948), 
                               (XLXN_957), 
                               (XLXN_956), 
                               (s[7]));
   CSA_MUSER_BAMV4H0  XLXI_596 ((A[1]), 
                               (b[7]), 
                               (XLXN_956), 
                               (XLXN_958), 
                               (XLXN_955), 
                               (s[8]));
   CSA_MUSER_BAMV4H0  XLXI_597 ((A[3]), 
                               (b[7]), 
                               (XLXN_954), 
                               (XLXN_960), 
                               (XLXN_953), 
                               (s[10]));
   CSA_MUSER_BAMV4H0  XLXI_598 ((A[5]), 
                               (b[7]), 
                               (XLXN_952), 
                               (XLXN_962), 
                               (XLXN_950), 
                               (s[12]));
   CSA_MUSER_BAMV4H0  XLXI_599 ((A[7]), 
                               (b[7]), 
                               (XLXN_951), 
                               (XLXN_964), 
                               (s[15]), 
                               (s[14]));
   assign XLXN_906 = 0;
   assign XLXN_931 = 0;
   assign XLXN_948 = 0;
   assign XLXN_981 = 0;
   assign XLXN_4 = 0;
   assign XLXN_717 = 0;
   assign XLXN_864 = 0;
   assign XLXN_889 = 0;
   assign XLXN_846 = 0;
   assign s[0] = 0;
   assign s[1] = 0;
   assign s[2] = 0;
   assign s[3] = 0;
endmodule
	