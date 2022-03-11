/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Facultate/Anul 3/AC/Tema1/tester_tema_1/build/bin/reference/reference_sensors_input.v";
static int ng1[] = {2, 0};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};



static void Cont_33_0(char *t0)
{
    char t5[8];
    char t7[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 3464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 10, t3, 8, t4, 8);
    t2 = (t0 + 1664U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 10, t5, 10, t6, 8);
    t2 = (t0 + 1824U);
    t8 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 10, t7, 10, t8, 8);
    t2 = (t0 + 4656);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 1023U;
    t15 = t14;
    t16 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t2, 0, 9);
    t22 = (t0 + 4528);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1664U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 10, t3, 8, t4, 8);
    t2 = (t0 + 4720);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 9);
    t18 = (t0 + 4544);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_35_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 10, t3, 8, t4, 8);
    t2 = (t0 + 4784);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 9);
    t18 = (t0 + 4560);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_37_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t13[8];
    char t22[8];
    char t54[8];
    char t63[8];
    char t95[8];
    char t104[8];
    char t149[8];
    char t152[8];
    char t156[8];
    char t161[8];
    char t162[8];
    char t163[8];
    char t172[8];
    char t181[8];
    char t226[8];
    char t229[8];
    char t233[8];
    char t240[8];
    char t243[8];
    char t247[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    char *t150;
    char *t151;
    char *t153;
    char *t154;
    char *t155;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    int t205;
    int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    char *t224;
    char *t225;
    char *t227;
    char *t228;
    char *t230;
    char *t231;
    char *t232;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t238;
    char *t239;
    char *t241;
    char *t242;
    char *t244;
    char *t245;
    char *t246;
    char *t248;
    char *t249;
    char *t250;
    char *t251;
    char *t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;
    unsigned int t259;
    unsigned int t260;
    char *t261;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1344U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 255U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t14 = (t0 + 1504U);
    t15 = *((char **)t14);
    memset(t13, 0, 8);
    t14 = (t15 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 255U);
    if (t20 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB11:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t13);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t5 + 4);
    t27 = (t13 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB12;

LAB13:
LAB14:    t55 = (t0 + 1664U);
    t56 = *((char **)t55);
    memset(t54, 0, 8);
    t55 = (t56 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (~(t57));
    t59 = *((unsigned int *)t56);
    t60 = (t59 & t58);
    t61 = (t60 & 255U);
    if (t61 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t55) != 0)
        goto LAB17;

LAB18:    t64 = *((unsigned int *)t22);
    t65 = *((unsigned int *)t54);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t22 + 4);
    t68 = (t54 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB19;

LAB20:
LAB21:    t96 = (t0 + 1824U);
    t97 = *((char **)t96);
    memset(t95, 0, 8);
    t96 = (t97 + 4);
    t98 = *((unsigned int *)t96);
    t99 = (~(t98));
    t100 = *((unsigned int *)t97);
    t101 = (t100 & t99);
    t102 = (t101 & 255U);
    if (t102 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t96) != 0)
        goto LAB24;

LAB25:    t105 = *((unsigned int *)t63);
    t106 = *((unsigned int *)t95);
    t107 = (t105 & t106);
    *((unsigned int *)t104) = t107;
    t108 = (t63 + 4);
    t109 = (t95 + 4);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t108);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB26;

LAB27:
LAB28:    memset(t4, 0, 8);
    t136 = (t104 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t104);
    t140 = (t139 & t138);
    t141 = (t140 & 1U);
    if (t141 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t136) != 0)
        goto LAB31;

LAB32:    t143 = (t4 + 4);
    t144 = *((unsigned int *)t4);
    t145 = *((unsigned int *)t143);
    t146 = (t144 || t145);
    if (t146 > 0)
        goto LAB33;

LAB34:    t157 = *((unsigned int *)t4);
    t158 = (~(t157));
    t159 = *((unsigned int *)t143);
    t160 = (t158 || t159);
    if (t160 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t143) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t4) > 0)
        goto LAB39;

LAB40:    memcpy(t3, t161, 8);

LAB41:    t248 = (t0 + 4848);
    t249 = (t248 + 56U);
    t250 = *((char **)t249);
    t251 = (t250 + 56U);
    t252 = *((char **)t251);
    memset(t252, 0, 8);
    t253 = 255U;
    t254 = t253;
    t255 = (t3 + 4);
    t256 = *((unsigned int *)t3);
    t253 = (t253 & t256);
    t257 = *((unsigned int *)t255);
    t254 = (t254 & t257);
    t258 = (t252 + 4);
    t259 = *((unsigned int *)t252);
    *((unsigned int *)t252) = (t259 | t253);
    t260 = *((unsigned int *)t258);
    *((unsigned int *)t258) = (t260 | t254);
    xsi_driver_vfirst_trans(t248, 0, 7);
    t261 = (t0 + 4576);
    *((int *)t261) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB10:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB11;

LAB12:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t5 + 4);
    t37 = (t13 + 4);
    t38 = *((unsigned int *)t5);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB14;

LAB15:    *((unsigned int *)t54) = 1;
    goto LAB18;

LAB17:    t62 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB18;

LAB19:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t22 + 4);
    t78 = (t54 + 4);
    t79 = *((unsigned int *)t22);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t54);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    t94 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t94 & t90);
    goto LAB21;

LAB22:    *((unsigned int *)t95) = 1;
    goto LAB25;

LAB24:    t103 = (t95 + 4);
    *((unsigned int *)t95) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB25;

LAB26:    t116 = *((unsigned int *)t104);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t104) = (t116 | t117);
    t118 = (t63 + 4);
    t119 = (t95 + 4);
    t120 = *((unsigned int *)t63);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (~(t122));
    t124 = *((unsigned int *)t95);
    t125 = (~(t124));
    t126 = *((unsigned int *)t119);
    t127 = (~(t126));
    t128 = (t121 & t123);
    t129 = (t125 & t127);
    t130 = (~(t128));
    t131 = (~(t129));
    t132 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t132 & t130);
    t133 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t133 & t131);
    t134 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t134 & t130);
    t135 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t135 & t131);
    goto LAB28;

LAB29:    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB31:    t142 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB32;

LAB33:    t147 = (t0 + 1984U);
    t148 = *((char **)t147);
    t147 = ((char*)((ng1)));
    memset(t149, 0, 8);
    xsi_vlog_unsigned_rshift(t149, 10, t148, 10, t147, 32);
    t150 = (t0 + 1984U);
    t151 = *((char **)t150);
    t150 = (t0 + 1944U);
    t153 = (t150 + 72U);
    t154 = *((char **)t153);
    t155 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t152, 10, t151, t154, 2, t155, 32, 1);
    memset(t156, 0, 8);
    xsi_vlog_unsigned_add(t156, 10, t149, 10, t152, 10);
    goto LAB34;

LAB35:    t164 = (t0 + 1344U);
    t165 = *((char **)t164);
    memset(t163, 0, 8);
    t164 = (t165 + 4);
    t166 = *((unsigned int *)t164);
    t167 = (~(t166));
    t168 = *((unsigned int *)t165);
    t169 = (t168 & t167);
    t170 = (t169 & 255U);
    if (t170 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t164) != 0)
        goto LAB44;

LAB45:    t173 = (t0 + 1664U);
    t174 = *((char **)t173);
    memset(t172, 0, 8);
    t173 = (t174 + 4);
    t175 = *((unsigned int *)t173);
    t176 = (~(t175));
    t177 = *((unsigned int *)t174);
    t178 = (t177 & t176);
    t179 = (t178 & 255U);
    if (t179 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t173) != 0)
        goto LAB48;

LAB49:    t182 = *((unsigned int *)t163);
    t183 = *((unsigned int *)t172);
    t184 = (t182 & t183);
    *((unsigned int *)t181) = t184;
    t185 = (t163 + 4);
    t186 = (t172 + 4);
    t187 = (t181 + 4);
    t188 = *((unsigned int *)t185);
    t189 = *((unsigned int *)t186);
    t190 = (t188 | t189);
    *((unsigned int *)t187) = t190;
    t191 = *((unsigned int *)t187);
    t192 = (t191 != 0);
    if (t192 == 1)
        goto LAB50;

LAB51:
LAB52:    memset(t162, 0, 8);
    t213 = (t181 + 4);
    t214 = *((unsigned int *)t213);
    t215 = (~(t214));
    t216 = *((unsigned int *)t181);
    t217 = (t216 & t215);
    t218 = (t217 & 1U);
    if (t218 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t213) != 0)
        goto LAB55;

LAB56:    t220 = (t162 + 4);
    t221 = *((unsigned int *)t162);
    t222 = *((unsigned int *)t220);
    t223 = (t221 || t222);
    if (t223 > 0)
        goto LAB57;

LAB58:    t234 = *((unsigned int *)t162);
    t235 = (~(t234));
    t236 = *((unsigned int *)t220);
    t237 = (t235 || t236);
    if (t237 > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t220) > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t162) > 0)
        goto LAB63;

LAB64:    memcpy(t161, t247, 8);

LAB65:    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t3, 10, t156, 10, t161, 10);
    goto LAB41;

LAB39:    memcpy(t3, t156, 8);
    goto LAB41;

LAB42:    *((unsigned int *)t163) = 1;
    goto LAB45;

LAB44:    t171 = (t163 + 4);
    *((unsigned int *)t163) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t172) = 1;
    goto LAB49;

LAB48:    t180 = (t172 + 4);
    *((unsigned int *)t172) = 1;
    *((unsigned int *)t180) = 1;
    goto LAB49;

LAB50:    t193 = *((unsigned int *)t181);
    t194 = *((unsigned int *)t187);
    *((unsigned int *)t181) = (t193 | t194);
    t195 = (t163 + 4);
    t196 = (t172 + 4);
    t197 = *((unsigned int *)t163);
    t198 = (~(t197));
    t199 = *((unsigned int *)t195);
    t200 = (~(t199));
    t201 = *((unsigned int *)t172);
    t202 = (~(t201));
    t203 = *((unsigned int *)t196);
    t204 = (~(t203));
    t205 = (t198 & t200);
    t206 = (t202 & t204);
    t207 = (~(t205));
    t208 = (~(t206));
    t209 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t209 & t207);
    t210 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t210 & t208);
    t211 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t211 & t207);
    t212 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t212 & t208);
    goto LAB52;

LAB53:    *((unsigned int *)t162) = 1;
    goto LAB56;

LAB55:    t219 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t219) = 1;
    goto LAB56;

LAB57:    t224 = (t0 + 2144U);
    t225 = *((char **)t224);
    t224 = ((char*)((ng2)));
    memset(t226, 0, 8);
    xsi_vlog_unsigned_rshift(t226, 10, t225, 10, t224, 32);
    t227 = (t0 + 2144U);
    t228 = *((char **)t227);
    t227 = (t0 + 2104U);
    t230 = (t227 + 72U);
    t231 = *((char **)t230);
    t232 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t229, 10, t228, t231, 2, t232, 32, 1);
    memset(t233, 0, 8);
    xsi_vlog_unsigned_add(t233, 10, t226, 10, t229, 10);
    goto LAB58;

LAB59:    t238 = (t0 + 2304U);
    t239 = *((char **)t238);
    t238 = ((char*)((ng2)));
    memset(t240, 0, 8);
    xsi_vlog_unsigned_rshift(t240, 10, t239, 10, t238, 32);
    t241 = (t0 + 2304U);
    t242 = *((char **)t241);
    t241 = (t0 + 2264U);
    t244 = (t241 + 72U);
    t245 = *((char **)t244);
    t246 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t243, 10, t242, t245, 2, t246, 32, 1);
    memset(t247, 0, 8);
    xsi_vlog_unsigned_add(t247, 10, t240, 10, t243, 10);
    goto LAB60;

LAB61:    xsi_vlog_unsigned_bit_combine(t161, 10, t233, 10, t247, 10);
    goto LAB65;

LAB63:    memcpy(t161, t233, 8);
    goto LAB65;

}


extern void reference_m_00000000001121380327_1082347310_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1,(void *)Cont_35_2,(void *)Cont_37_3};
	xsi_register_didat("reference_m_00000000001121380327_1082347310", "isim/tester.exe.sim/reference/m_00000000001121380327_1082347310.didat");
	xsi_register_executes(pe);
}
