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
static const char *ng0 = "D:/Facultate/Anul 3/AC/Tema1/tester_tema_1/build/bin/sensors_input.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {4, 0};



static void Always_28_0(char *t0)
{
    char t6[8];
    char t22[8];
    char t37[8];
    char t53[8];
    char t61[8];
    char t98[8];
    char t99[8];
    char t118[8];
    char t120[8];
    char t122[8];
    char t123[8];
    char t125[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    char *t119;
    char *t121;
    char *t124;
    char *t126;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    memcpy(t61, t22, 8);

LAB16:    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB51;

LAB48:    if (t18 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t6) = 1;

LAB51:    memset(t22, 0, 8);
    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t8) != 0)
        goto LAB54;

LAB55:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t23);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB56;

LAB57:    memcpy(t61, t22, 8);

LAB58:    t75 = (t61 + 4);
    t90 = *((unsigned int *)t75);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(49, ng0);

LAB90:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t3, 8, t4, 8);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 8, t6, 8, t5, 8);
    t2 = (t0 + 1528U);
    t7 = *((char **)t2);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 8, t22, 8, t7, 8);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t37, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t8 = ((char*)((ng6)));
    memset(t22, 0, 8);
    t21 = (t6 + 4);
    t23 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t23);
    t20 = (t18 ^ t19);
    t24 = (t17 | t20);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t31 = (t24 & t28);
    if (t31 != 0)
        goto LAB94;

LAB91:    if (t27 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t22) = 1;

LAB94:    memset(t37, 0, 8);
    t30 = (t22 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t40 = (t34 & t33);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t30) != 0)
        goto LAB97;

LAB98:    t36 = (t37 + 4);
    t42 = *((unsigned int *)t37);
    t43 = (!(t42));
    t44 = *((unsigned int *)t36);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB99;

LAB100:    memcpy(t99, t37, 8);

LAB101:    t109 = (t99 + 4);
    t110 = *((unsigned int *)t109);
    t111 = (~(t110));
    t112 = *((unsigned int *)t99);
    t113 = (t112 & t111);
    t114 = (t113 != 0);
    if (t114 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(54, ng0);

LAB117:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 8, t4, 8);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t6, 32, t5, 8);
    t2 = (t0 + 1528U);
    t7 = *((char **)t2);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t22, 32, t7, 8);
    t2 = ((char*)((ng8)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_divide(t53, 32, t37, 32, t2, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 8);

LAB115:
LAB72:
LAB30:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 1368U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB20;

LAB17:    if (t49 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t37) = 1;

LAB20:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t54) != 0)
        goto LAB23;

LAB24:    t62 = *((unsigned int *)t22);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t22 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t53) = 1;
    goto LAB24;

LAB23:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB24;

LAB25:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t22 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t22);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    goto LAB27;

LAB28:    xsi_set_current_line(29, ng0);

LAB31:    xsi_set_current_line(30, ng0);
    t95 = (t0 + 1208U);
    t96 = *((char **)t95);
    t95 = (t0 + 1528U);
    t97 = *((char **)t95);
    memset(t98, 0, 8);
    xsi_vlog_unsigned_add(t98, 8, t96, 8, t97, 8);
    t95 = (t0 + 1928);
    xsi_vlogvar_assign_value(t95, t98, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = ((char*)((ng2)));
    memset(t22, 0, 8);
    t21 = (t6 + 4);
    t23 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t23);
    t20 = (t18 ^ t19);
    t24 = (t17 | t20);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t31 = (t24 & t28);
    if (t31 != 0)
        goto LAB35;

LAB32:    if (t27 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t22) = 1;

LAB35:    t30 = (t22 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t40 = (t34 & t33);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = ((char*)((ng5)));
    memset(t22, 0, 8);
    t21 = (t6 + 4);
    t23 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t23);
    t20 = (t18 ^ t19);
    t24 = (t17 | t20);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t31 = (t24 & t28);
    if (t31 != 0)
        goto LAB43;

LAB40:    if (t27 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t22) = 1;

LAB43:    t30 = (t22 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t40 = (t34 & t33);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB44;

LAB45:
LAB46:
LAB38:    goto LAB30;

LAB34:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(31, ng0);

LAB39:    xsi_set_current_line(32, ng0);
    t35 = (t0 + 1208U);
    t36 = *((char **)t35);
    t35 = (t0 + 1528U);
    t38 = *((char **)t35);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t36, 8, t38, 8);
    t35 = ((char*)((ng3)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_divide(t53, 32, t37, 32, t35, 32);
    t39 = ((char*)((ng4)));
    memset(t61, 0, 8);
    xsi_vlog_unsigned_add(t61, 32, t53, 32, t39, 32);
    t52 = (t0 + 1928);
    xsi_vlogvar_assign_value(t52, t61, 0, 0, 8);
    goto LAB38;

LAB42:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(34, ng0);

LAB47:    xsi_set_current_line(35, ng0);
    t35 = (t0 + 1208U);
    t36 = *((char **)t35);
    t35 = (t0 + 1528U);
    t38 = *((char **)t35);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t36, 8, t38, 8);
    t35 = ((char*)((ng3)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_divide(t53, 32, t37, 32, t35, 32);
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t53, 0, 0, 8);
    goto LAB46;

LAB50:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t22) = 1;
    goto LAB55;

LAB54:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB55;

LAB56:    t29 = (t0 + 1528U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t35 = (t30 + 4);
    t36 = (t29 + 4);
    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t29);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t35);
    t44 = *((unsigned int *)t36);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t36);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB62;

LAB59:    if (t49 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t37) = 1;

LAB62:    memset(t53, 0, 8);
    t39 = (t37 + 4);
    t55 = *((unsigned int *)t39);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t39) != 0)
        goto LAB65;

LAB66:    t62 = *((unsigned int *)t22);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t54 = (t22 + 4);
    t60 = (t53 + 4);
    t65 = (t61 + 4);
    t68 = *((unsigned int *)t54);
    t69 = *((unsigned int *)t60);
    t70 = (t68 | t69);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t65);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB58;

LAB61:    t38 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t53) = 1;
    goto LAB66;

LAB65:    t52 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB66;

LAB67:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t65);
    *((unsigned int *)t61) = (t73 | t74);
    t66 = (t22 + 4);
    t67 = (t53 + 4);
    t77 = *((unsigned int *)t66);
    t78 = (~(t77));
    t79 = *((unsigned int *)t22);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t67);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    goto LAB69;

LAB70:    xsi_set_current_line(39, ng0);

LAB73:    xsi_set_current_line(40, ng0);
    t76 = (t0 + 1048U);
    t89 = *((char **)t76);
    t76 = (t0 + 1368U);
    t95 = *((char **)t76);
    memset(t98, 0, 8);
    xsi_vlog_unsigned_add(t98, 8, t89, 8, t95, 8);
    t76 = (t0 + 1928);
    xsi_vlogvar_assign_value(t76, t98, 0, 0, 8);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = ((char*)((ng2)));
    memset(t22, 0, 8);
    t21 = (t6 + 4);
    t23 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t23);
    t20 = (t18 ^ t19);
    t24 = (t17 | t20);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t31 = (t24 & t28);
    if (t31 != 0)
        goto LAB77;

LAB74:    if (t27 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t22) = 1;

LAB77:    t30 = (t22 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t40 = (t34 & t33);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = ((char*)((ng5)));
    memset(t22, 0, 8);
    t21 = (t6 + 4);
    t23 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t23);
    t20 = (t18 ^ t19);
    t24 = (t17 | t20);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t31 = (t24 & t28);
    if (t31 != 0)
        goto LAB85;

LAB82:    if (t27 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t22) = 1;

LAB85:    t30 = (t22 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t40 = (t34 & t33);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB86;

LAB87:
LAB88:
LAB80:    goto LAB72;

LAB76:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(41, ng0);

LAB81:    xsi_set_current_line(42, ng0);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    t35 = (t0 + 1368U);
    t38 = *((char **)t35);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t36, 8, t38, 8);
    t35 = ((char*)((ng3)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_divide(t53, 32, t37, 32, t35, 32);
    t39 = ((char*)((ng4)));
    memset(t61, 0, 8);
    xsi_vlog_unsigned_add(t61, 32, t53, 32, t39, 32);
    t52 = (t0 + 1928);
    xsi_vlogvar_assign_value(t52, t61, 0, 0, 8);
    goto LAB80;

LAB84:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(44, ng0);

LAB89:    xsi_set_current_line(45, ng0);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    t35 = (t0 + 1368U);
    t38 = *((char **)t35);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t36, 8, t38, 8);
    t35 = ((char*)((ng3)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_divide(t53, 32, t37, 32, t35, 32);
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t53, 0, 0, 8);
    goto LAB88;

LAB93:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB94;

LAB95:    *((unsigned int *)t37) = 1;
    goto LAB98;

LAB97:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB98;

LAB99:    t38 = (t0 + 1928);
    t39 = (t38 + 56U);
    t52 = *((char **)t39);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t60 = (t52 + 4);
    t46 = *((unsigned int *)t52);
    t47 = (t46 >> 0);
    *((unsigned int *)t53) = t47;
    t48 = *((unsigned int *)t60);
    t49 = (t48 >> 0);
    *((unsigned int *)t54) = t49;
    t50 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t50 & 3U);
    t51 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t51 & 3U);
    t65 = ((char*)((ng7)));
    memset(t61, 0, 8);
    t66 = (t53 + 4);
    t67 = (t65 + 4);
    t55 = *((unsigned int *)t53);
    t56 = *((unsigned int *)t65);
    t57 = (t55 ^ t56);
    t58 = *((unsigned int *)t66);
    t59 = *((unsigned int *)t67);
    t62 = (t58 ^ t59);
    t63 = (t57 | t62);
    t64 = *((unsigned int *)t66);
    t68 = *((unsigned int *)t67);
    t69 = (t64 | t68);
    t70 = (~(t69));
    t71 = (t63 & t70);
    if (t71 != 0)
        goto LAB105;

LAB102:    if (t69 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t61) = 1;

LAB105:    memset(t98, 0, 8);
    t76 = (t61 + 4);
    t72 = *((unsigned int *)t76);
    t73 = (~(t72));
    t74 = *((unsigned int *)t61);
    t77 = (t74 & t73);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t76) != 0)
        goto LAB108;

LAB109:    t79 = *((unsigned int *)t37);
    t81 = *((unsigned int *)t98);
    t82 = (t79 | t81);
    *((unsigned int *)t99) = t82;
    t95 = (t37 + 4);
    t96 = (t98 + 4);
    t97 = (t99 + 4);
    t83 = *((unsigned int *)t95);
    t85 = *((unsigned int *)t96);
    t86 = (t83 | t85);
    *((unsigned int *)t97) = t86;
    t87 = *((unsigned int *)t97);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB110;

LAB111:
LAB112:    goto LAB101;

LAB104:    t75 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB105;

LAB106:    *((unsigned int *)t98) = 1;
    goto LAB109;

LAB108:    t89 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB109;

LAB110:    t90 = *((unsigned int *)t99);
    t91 = *((unsigned int *)t97);
    *((unsigned int *)t99) = (t90 | t91);
    t100 = (t37 + 4);
    t101 = (t98 + 4);
    t92 = *((unsigned int *)t100);
    t93 = (~(t92));
    t94 = *((unsigned int *)t37);
    t80 = (t94 & t93);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t98);
    t84 = (t104 & t103);
    t105 = (~(t80));
    t106 = (~(t84));
    t107 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t107 & t105);
    t108 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t108 & t106);
    goto LAB112;

LAB113:    xsi_set_current_line(51, ng0);

LAB116:    xsi_set_current_line(52, ng0);
    t115 = (t0 + 1048U);
    t116 = *((char **)t115);
    t115 = (t0 + 1208U);
    t117 = *((char **)t115);
    memset(t118, 0, 8);
    xsi_vlog_unsigned_add(t118, 32, t116, 8, t117, 8);
    t115 = (t0 + 1368U);
    t119 = *((char **)t115);
    memset(t120, 0, 8);
    xsi_vlog_unsigned_add(t120, 32, t118, 32, t119, 8);
    t115 = (t0 + 1528U);
    t121 = *((char **)t115);
    memset(t122, 0, 8);
    xsi_vlog_unsigned_add(t122, 32, t120, 32, t121, 8);
    t115 = ((char*)((ng8)));
    memset(t123, 0, 8);
    xsi_vlog_unsigned_divide(t123, 32, t122, 32, t115, 32);
    t124 = ((char*)((ng4)));
    memset(t125, 0, 8);
    xsi_vlog_unsigned_add(t125, 32, t123, 32, t124, 32);
    t126 = (t0 + 1928);
    xsi_vlogvar_assign_value(t126, t125, 0, 0, 8);
    goto LAB115;

}


extern void uut_m_00000000004151461737_3166864719_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("uut_m_00000000004151461737_3166864719", "isim/tester.exe.sim/uut/m_00000000004151461737_3166864719.didat");
	xsi_register_executes(pe);
}
