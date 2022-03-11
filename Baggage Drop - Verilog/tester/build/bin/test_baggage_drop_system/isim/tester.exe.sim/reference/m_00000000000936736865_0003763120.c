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
static const char *ng0 = "D:/Facultate/Anul 3/AC/Tema1/tester_tema_1/build/bin/reference/reference_square_root.v";
static int ng1[] = {16, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {12, 0};
static int ng6[] = {2, 0};
static int ng7[] = {22, 0};
static int ng8[] = {1, 0};
static int ng9[] = {11, 0};



static void Always_33_0(char *t0)
{
    char t6[8];
    char t20[8];
    char t21[8];
    char t25[8];
    char t34[8];
    char t35[8];
    char t39[8];
    char t48[8];
    char t49[8];
    char t51[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t50;
    char *t52;
    char *t54;
    unsigned int t55;
    int t56;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3464);
    *((int *)t2) = 1;
    t3 = (t0 + 3176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 24, t5, 8, t4, 32);
    t7 = (t0 + 2064);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 24);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB6:    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB8;

LAB7:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB9;

LAB10:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB12;

LAB13:    goto LAB2;

LAB8:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(39, ng0);

LAB14:    xsi_set_current_line(40, ng0);
    t16 = (t0 + 1904);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_lshift(t20, 16, t18, 16, t19, 32);
    t22 = (t0 + 2064);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = (t0 + 2064);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng7)));
    t30 = ((char*)((ng6)));
    t31 = (t0 + 2224);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_multiply(t34, 32, t30, 32, t33, 4);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t29, 32, t34, 32);
    xsi_vlog_generic_get_index_select_value(t25, 1, t24, t28, 2, t35, 32, 2);
    t36 = (t0 + 2064);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t40 = (t0 + 2064);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng7)));
    t44 = ((char*)((ng6)));
    t45 = (t0 + 2224);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_multiply(t48, 32, t44, 32, t47, 4);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_minus(t49, 32, t43, 32, t48, 32);
    t50 = ((char*)((ng8)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t49, 32, t50, 32);
    xsi_vlog_generic_get_index_select_value(t39, 1, t38, t42, 2, t51, 32, 2);
    t52 = ((char*)((ng3)));
    xsi_vlogtype_concat(t21, 16, 16, 3U, t52, 14, t39, 1, t25, 1);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 16, t20, 16, t21, 16);
    t54 = (t0 + 1904);
    xsi_vlogvar_assign_value(t54, t53, 0, 0, 16);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1744);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB16;

LAB15:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB17;

LAB18:    t17 = (t6 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(44, ng0);

LAB26:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1584);
    t4 = (t0 + 1584);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng9)));
    t9 = (t0 + 2224);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 32, t8, 32, t16, 4);
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t20, 32, 2);
    t17 = (t6 + 4);
    t11 = *((unsigned int *)t17);
    t56 = (!(t11));
    if (t56 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1744);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 16, t4, 16, t8, 16);
    t9 = (t0 + 1904);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 16);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1744);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t20, 0, 8);
    t7 = (t20 + 4);
    t8 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 2);
    *((unsigned int *)t20) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 2);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t15 & 16383U);
    t55 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t55 & 16383U);
    t9 = ((char*)((ng8)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_lshift(t21, 14, t20, 14, t9, 32);
    t10 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 14, t21, 14, t10, 14);
    xsi_vlogtype_concat(t6, 16, 16, 2U, t25, 14, t2, 2);
    t16 = (t0 + 1744);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 16);

LAB22:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 2224);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB6;

LAB16:    t16 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(41, ng0);

LAB23:    xsi_set_current_line(42, ng0);
    t18 = ((char*)((ng4)));
    t19 = (t0 + 1584);
    t22 = (t0 + 1584);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t26 = ((char*)((ng9)));
    t27 = (t0 + 2224);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 32, t26, 32, t29, 4);
    xsi_vlog_generic_convert_bit_index(t20, t24, 2, t21, 32, 2);
    t30 = (t20 + 4);
    t55 = *((unsigned int *)t30);
    t56 = (!(t55));
    if (t56 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1744);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t20, 0, 8);
    t7 = (t20 + 4);
    t8 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 2);
    *((unsigned int *)t20) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 2);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t15 & 16383U);
    t55 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t55 & 16383U);
    t9 = ((char*)((ng8)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_lshift(t21, 14, t20, 14, t9, 32);
    xsi_vlogtype_concat(t6, 16, 16, 2U, t21, 14, t2, 2);
    t10 = (t0 + 1744);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 16);
    goto LAB22;

LAB24:    xsi_vlogvar_assign_value(t19, t18, 0, *((unsigned int *)t20), 1);
    goto LAB25;

LAB27:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB28;

}


extern void reference_m_00000000000936736865_0003763120_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("reference_m_00000000000936736865_0003763120", "isim/tester.exe.sim/reference/m_00000000000936736865_0003763120.didat");
	xsi_register_executes(pe);
}
