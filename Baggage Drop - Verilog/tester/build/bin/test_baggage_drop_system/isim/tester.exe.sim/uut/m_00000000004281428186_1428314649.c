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
static const char *ng0 = "D:/Facultate/Anul 3/AC/Tema1/tester_tema_1/build/bin/square_root.v";
static unsigned int ng1[] = {1073741824U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {31, 0};
static int ng4[] = {24, 0};
static int ng5[] = {16, 0};
static int ng6[] = {2, 0};
static int ng7[] = {1, 0};
static int ng8[] = {4, 0};



static void Always_31_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char t57[8];
    char t76[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t78;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng3)));
    t11 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB8:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t9 = (t6 + 4);
    t13 = *((unsigned int *)t9);
    t16 = (~(t13));
    t20 = *((unsigned int *)t6);
    t23 = (t20 & t16);
    t25 = (t23 != 0);
    if (t25 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t9 = (t6 + 4);
    t13 = *((unsigned int *)t9);
    t16 = (~(t13));
    t20 = *((unsigned int *)t6);
    t23 = (t20 & t16);
    t25 = (t23 != 0);
    if (t25 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t4, 32, t5, 32);
    t9 = (t0 + 1608);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);
    goto LAB2;

LAB6:    t23 = *((unsigned int *)t8);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t7);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t3, t24, *((unsigned int *)t7), t28);
    goto LAB7;

LAB9:    xsi_set_current_line(37, ng0);

LAB11:    xsi_set_current_line(38, ng0);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t15 = (t0 + 1928);
    t19 = (t15 + 56U);
    t29 = *((char **)t19);
    memset(t7, 0, 8);
    t30 = (t12 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB13;

LAB12:    t31 = (t29 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB13;

LAB16:    if (*((unsigned int *)t12) > *((unsigned int *)t29))
        goto LAB14;

LAB15:    t33 = (t7 + 4);
    t26 = *((unsigned int *)t33);
    t34 = (~(t26));
    t35 = *((unsigned int *)t7);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);
    goto LAB8;

LAB13:    t32 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB15;

LAB14:    *((unsigned int *)t7) = 1;
    goto LAB15;

LAB17:    xsi_set_current_line(38, ng0);

LAB20:    xsi_set_current_line(39, ng0);
    t38 = (t0 + 1768);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_rshift(t8, 32, t40, 32, t41, 32);
    t42 = (t0 + 1768);
    xsi_vlogvar_assign_value(t42, t8, 0, 0, 32);
    goto LAB19;

LAB22:    xsi_set_current_line(43, ng0);

LAB24:    xsi_set_current_line(44, ng0);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t19 = (t12 + 4);
    t29 = (t15 + 4);
    t26 = *((unsigned int *)t12);
    t34 = *((unsigned int *)t15);
    t35 = (t26 ^ t34);
    t36 = *((unsigned int *)t19);
    t37 = *((unsigned int *)t29);
    t43 = (t36 ^ t37);
    t44 = (t35 | t43);
    t45 = *((unsigned int *)t19);
    t46 = *((unsigned int *)t29);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB26;

LAB25:    if (t47 != 0)
        goto LAB27;

LAB28:    t31 = (t7 + 4);
    t50 = *((unsigned int *)t31);
    t51 = (~(t50));
    t52 = *((unsigned int *)t7);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);
    goto LAB21;

LAB26:    *((unsigned int *)t7) = 1;
    goto LAB28;

LAB27:    t30 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(44, ng0);

LAB32:    xsi_set_current_line(45, ng0);
    t32 = (t0 + 1928);
    t33 = (t32 + 56U);
    t38 = *((char **)t33);
    t39 = (t0 + 1608);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t0 + 1768);
    t55 = (t42 + 56U);
    t56 = *((char **)t55);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t41, 32, t56, 32);
    memset(t57, 0, 8);
    t58 = (t38 + 4);
    if (*((unsigned int *)t58) != 0)
        goto LAB34;

LAB33:    t59 = (t8 + 4);
    if (*((unsigned int *)t59) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t38) < *((unsigned int *)t8))
        goto LAB36;

LAB35:    *((unsigned int *)t57) = 1;

LAB36:    t61 = (t57 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(50, ng0);

LAB42:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t4, 32, t5, 32);
    t9 = (t0 + 1608);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);

LAB40:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t4, 32, t5, 32);
    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);
    goto LAB31;

LAB34:    t60 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(45, ng0);

LAB41:    xsi_set_current_line(46, ng0);
    t67 = (t0 + 1928);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = (t0 + 1608);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t0 + 1768);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    memset(t76, 0, 8);
    xsi_vlog_unsigned_add(t76, 32, t72, 32, t75, 32);
    memset(t77, 0, 8);
    xsi_vlog_unsigned_minus(t77, 32, t69, 32, t76, 32);
    t78 = (t0 + 1928);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t4, 32, t5, 32);
    t9 = (t0 + 1768);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t6, 32, t11, 32);
    t12 = (t0 + 1608);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 32);
    goto LAB40;

}

static void Cont_59_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 3752);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void uut_m_00000000004281428186_1428314649_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Cont_59_1};
	xsi_register_didat("uut_m_00000000004281428186_1428314649", "isim/tester.exe.sim/uut/m_00000000004281428186_1428314649.didat");
	xsi_register_executes(pe);
}
