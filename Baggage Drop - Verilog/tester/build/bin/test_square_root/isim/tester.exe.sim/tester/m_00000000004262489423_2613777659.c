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
static const char *ng0 = "D:/Facultate/Anul 3/AC/Tema1/tester_tema_1/build/bin/tester/adapter.inc";
static const char *ng1 = "testing: S1 = %0d, S2 = %0d, S3 = %0d, S4 = %0d, T_lim = %0.2f, drop_en = %0d";
static int ng2[] = {8, 0, 0, 0};
static const char *ng3 = "testing: S1 = %0d \t S2 = %0d \t S3 = %0d \t S4 = %0d";
static const char *ng4 = "\t result: H = %0d";
static const char *ng5 = "testing: in = %0d";
static const char *ng6 = "\t results: sqrt_result = %0.2f \t (16'b%b_%b)";
static const char *ng7 = "testing: T_act = %0.2f, T_lim = %0.2f, drop_en = %0d";
static const char *ng8 = "-> result: message = %0s%0s%0s%0s, drop_activated = %0d";
static const char *ng9 = "-> result: 7Segments(1-2-3-4) -> %b - %b - %b - %b, drop_activated = %0d";
static unsigned int ng10[] = {57U, 0U};
static int ng11[] = {67, 0};
static unsigned int ng12[] = {94U, 0U};
static int ng13[] = {68, 0};
static unsigned int ng14[] = {118U, 0U};
static int ng15[] = {72, 0};
static unsigned int ng16[] = {56U, 0U};
static int ng17[] = {76, 0};
static unsigned int ng18[] = {92U, 0U};
static int ng19[] = {79, 0};
static unsigned int ng20[] = {115U, 0U};
static int ng21[] = {80, 0};
static unsigned int ng22[] = {80U, 0U};
static int ng23[] = {82, 0};
static unsigned int ng24[] = {120U, 0U};
static int ng25[] = {84, 0};
static unsigned int ng26[] = {0U, 0U};
static int ng27[] = {32, 0};
static const char *ng28 = "D:/Facultate/Anul 3/AC/Tema1/tester_tema_1/build/bin/tester/tester.v";
static int ng29[] = {0, 0};
static const char *ng30 = "test.config";
static const char *ng31 = "r";
static const char *ng32 = "error opening config file\n";
static const char *ng33 = "name=%s\n";
static int ng34[] = {1, 0};
static const char *ng35 = "error reading test name\n";
static const char *ng36 = "value=%f\n";
static const char *ng37 = "error reading test value\n";
static const char *ng38 = "penalty=%f\n";
static const char *ng39 = "error reading test penalty\n";
static int ng40[] = {1919905652, 0, 1634887007, 0, 1601401205, 0, 1952805748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng41[] = {2, 0};
static int ng42[] = {8, 0};
static const char *ng43 = ", ";
static const char *ng44 = "\tok\n";
static const char *ng45 = "\n";
static const char *ng46 = "\terror: ";
static const char *ng47 = ", expected ";
static const char *ng48 = "\t.\n";
static int ng49[] = {1852863860, 0, 1920163689, 0, 1701737327, 0, 1937006451, 0, 29797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng50 = "test.data";
static const char *ng51 = "error opening data file\n";
static const char *ng52 = "nof_inputs = %d\n";
static const char *ng53 = "error reading nof_sensor_inputs\n";
static const char *ng54 = "%d";
static const char *ng55 = "error reading sensors1 data for input number %d\n";
static const char *ng56 = "error reading sensors2 data for input number %d\n";
static const char *ng57 = "error reading sensors3 data for input number %d\n";
static const char *ng58 = "%d\n";
static const char *ng59 = "error reading sensors4 data for input number %d\n";
static int ng60[] = {1937007981, 0, 1885303673, 0, 1600418415, 0, 1734436709, 0, 1600282983, 0, 1952805748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng61 = "%b";
static const char *ng62 = "error reading t_lim data for input number %d\n";
static const char *ng63 = "error reading drop_enable data for input number %d\n";
static unsigned int ng64[] = {1U, 0U};
static int ng65[] = {1685221232, 0, 1634624607, 0, 1818327391, 0, 1684632432, 0, 1702065247, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng66 = "error reading t_act data for input number %d\n";
static const char *ng67 = "test ok\n";
static const char *ng68 = "result.tester";
static const char *ng69 = "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n";



static int sp_print_top_input(char *t1, char *t2)
{
    char t20[16];
    char t25[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    double t19;
    char *t21;
    double t22;
    double t23;
    double t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1664);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t5 = (t1 + 12552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 13832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(30, ng0);
    t4 = (t1 + 12712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 13992);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t4 = (t1 + 12872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 14152);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(32, ng0);
    t4 = (t1 + 13032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 14312);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(33, ng0);
    t4 = (t1 + 13192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 13512);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(34, ng0);
    t4 = (t1 + 13352);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 13672);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t4 = (t1 + 13832);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 13992);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 14152);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 14312);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 13512);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = xsi_vlog_convert_to_real(t18, 16, 2);
    t21 = ((char*)((ng2)));
    xsi_vlog_signed_unary_minus(t20, 64, t21, 32);
    t22 = xsi_vlog_convert_to_real(t20, 32, 1);
    t23 = xsi_vlog_double_power(2.0000000000000000, t22);
    t24 = (t19 * t23);
    *((double *)t25) = t24;
    t26 = (t1 + 13672);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t1 + 1664);
    xsi_vlogfile_write(0, 0, 1, ng1, 7, t29, (char)118, t6, 8, (char)118, t9, 8, (char)118, t12, 8, (char)118, t15, 8, (char)114, t25, 64, (char)118, t28, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_print_top_output(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2096);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(48, ng0);
    t5 = (t1 + 14472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 14632);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 14792);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 14952);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 15112);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 15272);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    t25 = (t2 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t26, &&LAB5);
    t27 = (t2 + 56U);
    t28 = *((char **)t27);
    t29 = (t1 + 4688);
    t30 = xsi_create_subprogram_invocation(t28, 0, t1, t29, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t29, t30);
    t31 = (t1 + 18632);
    xsi_vlogvar_assign_value(t31, t7, 0, 0, 7);
    t32 = (t1 + 18792);
    xsi_vlogvar_assign_value(t32, t10, 0, 0, 7);
    t33 = (t1 + 18952);
    xsi_vlogvar_assign_value(t33, t13, 0, 0, 7);
    t34 = (t1 + 19112);
    xsi_vlogvar_assign_value(t34, t16, 0, 0, 7);
    t35 = (t1 + 19272);
    xsi_vlogvar_assign_value(t35, t19, 0, 0, 1);
    t36 = (t1 + 19432);
    xsi_vlogvar_assign_value(t36, t22, 0, 0, 1);

LAB7:    t37 = (t2 + 64U);
    t38 = *((char **)t37);
    t39 = (t38 + 80U);
    t40 = *((char **)t39);
    t41 = (t40 + 272U);
    t42 = *((char **)t41);
    t43 = (t42 + 0U);
    t44 = *((char **)t43);
    t45 = ((int  (*)(char *, char *))t44)(t1, t38);
    if (t45 == -1)
        goto LAB8;

LAB9:    if (t45 != 0)
        goto LAB10;

LAB5:    t38 = (t1 + 4688);
    xsi_vlog_subprogram_popinvocation(t38);

LAB6:    t46 = (t2 + 64U);
    t47 = *((char **)t46);
    t46 = (t1 + 4688);
    t48 = (t2 + 56U);
    t49 = *((char **)t48);
    xsi_delete_subprogram_invocation(t46, t47, t1, t49, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t0 = -1;
    goto LAB1;

LAB10:    t37 = (t2 + 48U);
    *((char **)t37) = &&LAB7;
    goto LAB1;

}

static int sp_print_sensors_input(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2528);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t5 = (t1 + 15432);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 16072);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(62, ng0);
    t4 = (t1 + 15592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 16232);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t4 = (t1 + 15752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 16392);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t4 = (t1 + 15912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 16552);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(65, ng0);
    t4 = (t1 + 16072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 16232);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 16392);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 16552);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t1 + 2528);
    xsi_vlogfile_write(0, 0, 1, ng3, 5, t16, (char)118, t6, 8, (char)118, t9, 8, (char)118, t12, 8, (char)118, t15, 8);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_print_sensors_output(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2960);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(75, ng0);
    t5 = (t1 + 16712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 16872);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(76, ng0);
    t4 = (t1 + 16872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2960);
    xsi_vlogfile_write(0, 0, 1, ng4, 2, t7, (char)118, t6, 8);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_print_sqrt_input(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3392);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t5 = (t1 + 17032);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 17192);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t4 = (t1 + 17192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3392);
    xsi_vlogfile_write(0, 0, 1, ng5, 2, t7, (char)118, t6, 8);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_print_sqrt_output(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    char t15[8];
    char t26[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    double t9;
    double t11;
    double t12;
    double t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3824);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t5 = (t1 + 17352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 17512);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 17512);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = xsi_vlog_convert_to_real(t6, 16, 2);
    t7 = ((char*)((ng2)));
    xsi_vlog_signed_unary_minus(t10, 64, t7, 32);
    t11 = xsi_vlog_convert_to_real(t10, 32, 1);
    t12 = xsi_vlog_double_power(2.0000000000000000, t11);
    t13 = (t9 * t12);
    *((double *)t14) = t13;
    t8 = (t1 + 17512);
    t16 = (t8 + 56U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t18 = (t15 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 8);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 8);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 255U);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 255U);
    t27 = (t1 + 17512);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t26, 0, 8);
    t30 = (t26 + 4);
    t31 = (t29 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t26) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & 255U);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 & 255U);
    t38 = (t1 + 3824);
    xsi_vlogfile_write(0, 0, 1, ng6, 4, t38, (char)114, t14, 64, (char)118, t15, 8, (char)118, t26, 8);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_print_display_input(char *t1, char *t2)
{
    char t10[16];
    char t14[8];
    char t18[16];
    char t23[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    double t9;
    double t11;
    double t12;
    double t13;
    char *t15;
    char *t16;
    double t17;
    char *t19;
    double t20;
    double t21;
    double t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4256);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(113, ng0);

LAB5:    xsi_set_current_line(114, ng0);
    t5 = (t1 + 17672);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 18152);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    xsi_set_current_line(115, ng0);
    t4 = (t1 + 17832);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 18312);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(116, ng0);
    t4 = (t1 + 17992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 18472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t4 = (t1 + 18152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = xsi_vlog_convert_to_real(t6, 16, 2);
    t7 = ((char*)((ng2)));
    xsi_vlog_signed_unary_minus(t10, 64, t7, 32);
    t11 = xsi_vlog_convert_to_real(t10, 32, 1);
    t12 = xsi_vlog_double_power(2.0000000000000000, t11);
    t13 = (t9 * t12);
    *((double *)t14) = t13;
    t8 = (t1 + 18312);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = xsi_vlog_convert_to_real(t16, 16, 2);
    t19 = ((char*)((ng2)));
    xsi_vlog_signed_unary_minus(t18, 64, t19, 32);
    t20 = xsi_vlog_convert_to_real(t18, 32, 1);
    t21 = xsi_vlog_double_power(2.0000000000000000, t20);
    t22 = (t17 * t21);
    *((double *)t23) = t22;
    t24 = (t1 + 18472);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 4256);
    xsi_vlogfile_write(0, 0, 1, ng7, 4, t27, (char)114, t14, 64, (char)114, t23, 64, (char)118, t26, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_print_display_output(char *t1, char *t2)
{
    char t5[8];
    char t51[8];
    char t54[8];
    char t61[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4688);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(132, ng0);

LAB5:    xsi_set_current_line(133, ng0);
    t6 = (t1 + 19432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t9) == 0)
        goto LAB6;

LAB8:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;

LAB9:    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t5);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(141, ng0);

LAB38:    xsi_set_current_line(142, ng0);
    t4 = (t1 + 18632);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t5, t7, 8);
    t8 = (t1 + 19592);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 8);
    xsi_set_current_line(143, ng0);
    t4 = (t1 + 18792);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t5, t7, 8);
    t8 = (t1 + 19752);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 8);
    xsi_set_current_line(144, ng0);
    t4 = (t1 + 18952);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t5, t7, 8);
    t8 = (t1 + 19912);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 8);
    xsi_set_current_line(145, ng0);
    t4 = (t1 + 19112);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t5, t7, 8);
    t8 = (t1 + 20072);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 8);
    xsi_set_current_line(146, ng0);
    t4 = (t1 + 19272);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 20232);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t4 = (t1 + 19592);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 127U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 127U);
    t15 = (t1 + 19752);
    t16 = (t15 + 56U);
    t22 = *((char **)t16);
    memset(t51, 0, 8);
    t23 = (t51 + 4);
    t24 = (t22 + 4);
    t18 = *((unsigned int *)t22);
    t19 = (t18 >> 0);
    *((unsigned int *)t51) = t19;
    t20 = *((unsigned int *)t24);
    t21 = (t20 >> 0);
    *((unsigned int *)t23) = t21;
    t52 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t52 & 127U);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & 127U);
    t25 = (t1 + 19912);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t54, 0, 8);
    t28 = (t54 + 4);
    t29 = (t27 + 4);
    t55 = *((unsigned int *)t27);
    t56 = (t55 >> 0);
    *((unsigned int *)t54) = t56;
    t57 = *((unsigned int *)t29);
    t58 = (t57 >> 0);
    *((unsigned int *)t28) = t58;
    t59 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t59 & 127U);
    t60 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t60 & 127U);
    t30 = (t1 + 20072);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t61, 0, 8);
    t33 = (t61 + 4);
    t34 = (t32 + 4);
    t62 = *((unsigned int *)t32);
    t63 = (t62 >> 0);
    *((unsigned int *)t61) = t63;
    t64 = *((unsigned int *)t34);
    t65 = (t64 >> 0);
    *((unsigned int *)t33) = t65;
    t66 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t66 & 127U);
    t67 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t67 & 127U);
    t35 = (t1 + 20232);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 4688);
    xsi_vlogfile_write(0, 0, 1, ng9, 6, t38, (char)118, t5, 7, (char)118, t51, 7, (char)118, t54, 7, (char)118, t61, 7, (char)118, t37, 1);

LAB12:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(133, ng0);

LAB13:    xsi_set_current_line(134, ng0);
    t22 = (t1 + 18632);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t2 + 56U);
    t26 = *((char **)t25);
    t27 = (t2 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t28, &&LAB14);
    t29 = (t2 + 56U);
    t30 = *((char **)t29);
    t31 = (t1 + 5120);
    t32 = xsi_create_subprogram_invocation(t30, 0, t1, t31, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t31, t32);
    t33 = (t1 + 20392);
    xsi_vlogvar_assign_value(t33, t24, 0, 0, 7);

LAB16:    t34 = (t2 + 64U);
    t35 = *((char **)t34);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t38 = (t37 + 272U);
    t39 = *((char **)t38);
    t40 = (t39 + 0U);
    t41 = *((char **)t40);
    t42 = ((int  (*)(char *, char *))t41)(t1, t35);
    if (t42 == -1)
        goto LAB17;

LAB18:    if (t42 != 0)
        goto LAB19;

LAB14:    t35 = (t1 + 5120);
    xsi_vlog_subprogram_popinvocation(t35);

LAB15:    t43 = (t2 + 64U);
    t44 = *((char **)t43);
    t43 = (t1 + 20552);
    t45 = (t43 + 56U);
    t46 = *((char **)t45);
    t47 = (t1 + 19592);
    xsi_vlogvar_assign_value(t47, t46, 0, 0, 8);
    t48 = (t1 + 5120);
    t49 = (t2 + 56U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t48, t44, t1, t50, t2);
    xsi_set_current_line(135, ng0);
    t4 = (t1 + 18792);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t16, &&LAB20);
    t22 = (t2 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 5120);
    t25 = xsi_create_subprogram_invocation(t23, 0, t1, t24, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t26 = (t1 + 20392);
    xsi_vlogvar_assign_value(t26, t7, 0, 0, 7);

LAB22:    t27 = (t2 + 64U);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t42 = ((int  (*)(char *, char *))t34)(t1, t28);
    if (t42 == -1)
        goto LAB23;

LAB24:    if (t42 != 0)
        goto LAB25;

LAB20:    t28 = (t1 + 5120);
    xsi_vlog_subprogram_popinvocation(t28);

LAB21:    t35 = (t2 + 64U);
    t36 = *((char **)t35);
    t35 = (t1 + 20552);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t39 = (t1 + 19752);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 8);
    t40 = (t1 + 5120);
    t41 = (t2 + 56U);
    t43 = *((char **)t41);
    xsi_delete_subprogram_invocation(t40, t36, t1, t43, t2);
    xsi_set_current_line(136, ng0);
    t4 = (t1 + 18952);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t16, &&LAB26);
    t22 = (t2 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 5120);
    t25 = xsi_create_subprogram_invocation(t23, 0, t1, t24, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t26 = (t1 + 20392);
    xsi_vlogvar_assign_value(t26, t7, 0, 0, 7);

LAB28:    t27 = (t2 + 64U);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t42 = ((int  (*)(char *, char *))t34)(t1, t28);
    if (t42 == -1)
        goto LAB29;

LAB30:    if (t42 != 0)
        goto LAB31;

LAB26:    t28 = (t1 + 5120);
    xsi_vlog_subprogram_popinvocation(t28);

LAB27:    t35 = (t2 + 64U);
    t36 = *((char **)t35);
    t35 = (t1 + 20552);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t39 = (t1 + 19912);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 8);
    t40 = (t1 + 5120);
    t41 = (t2 + 56U);
    t43 = *((char **)t41);
    xsi_delete_subprogram_invocation(t40, t36, t1, t43, t2);
    xsi_set_current_line(137, ng0);
    t4 = (t1 + 19112);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t16, &&LAB32);
    t22 = (t2 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 5120);
    t25 = xsi_create_subprogram_invocation(t23, 0, t1, t24, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t26 = (t1 + 20392);
    xsi_vlogvar_assign_value(t26, t7, 0, 0, 7);

LAB34:    t27 = (t2 + 64U);
    t28 = *((char **)t27);
    t29 = (t28 + 80U);
    t30 = *((char **)t29);
    t31 = (t30 + 272U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    t34 = *((char **)t33);
    t42 = ((int  (*)(char *, char *))t34)(t1, t28);
    if (t42 == -1)
        goto LAB35;

LAB36:    if (t42 != 0)
        goto LAB37;

LAB32:    t28 = (t1 + 5120);
    xsi_vlog_subprogram_popinvocation(t28);

LAB33:    t35 = (t2 + 64U);
    t36 = *((char **)t35);
    t35 = (t1 + 20552);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t39 = (t1 + 20072);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 8);
    t40 = (t1 + 5120);
    t41 = (t2 + 56U);
    t43 = *((char **)t41);
    xsi_delete_subprogram_invocation(t40, t36, t1, t43, t2);
    xsi_set_current_line(138, ng0);
    t4 = (t1 + 19272);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 20232);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t4 = (t1 + 19592);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 19752);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t16 = (t1 + 19912);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 20072);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 20232);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t1 + 4688);
    xsi_vlogfile_write(0, 0, 1, ng8, 6, t30, (char)118, t7, 8, (char)118, t15, 8, (char)118, t23, 8, (char)118, t26, 8, (char)118, t29, 1);
    goto LAB12;

LAB17:    t0 = -1;
    goto LAB1;

LAB19:    t34 = (t2 + 48U);
    *((char **)t34) = &&LAB16;
    goto LAB1;

LAB23:    t0 = -1;
    goto LAB1;

LAB25:    t27 = (t2 + 48U);
    *((char **)t27) = &&LAB22;
    goto LAB1;

LAB29:    t0 = -1;
    goto LAB1;

LAB31:    t27 = (t2 + 48U);
    *((char **)t27) = &&LAB28;
    goto LAB1;

LAB35:    t0 = -1;
    goto LAB1;

LAB37:    t27 = (t2 + 48U);
    *((char **)t27) = &&LAB34;
    goto LAB1;

}

static int sp_convert_dec_to_seven_seg(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5120);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(156, ng0);

LAB5:    xsi_set_current_line(157, ng0);
    t5 = (t1 + 20392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);

LAB6:    t8 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t8, 7);
    if (t9 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng12)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t4, 7);
    if (t9 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng14)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t4, 7);
    if (t9 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng16)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t4, 7);
    if (t9 == 1)
        goto LAB13;

LAB14:    t4 = ((char*)((ng18)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t4, 7);
    if (t9 == 1)
        goto LAB15;

LAB16:    t4 = ((char*)((ng20)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t4, 7);
    if (t9 == 1)
        goto LAB17;

LAB18:    t4 = ((char*)((ng22)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t4, 7);
    if (t9 == 1)
        goto LAB19;

LAB20:    t4 = ((char*)((ng24)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t4, 7);
    if (t9 == 1)
        goto LAB21;

LAB22:    t4 = ((char*)((ng26)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 7, t4, 7);
    if (t9 == 1)
        goto LAB23;

LAB24:
LAB25:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(158, ng0);
    t10 = ((char*)((ng11)));
    t11 = (t1 + 20552);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 8);
    goto LAB25;

LAB9:    xsi_set_current_line(159, ng0);
    t5 = ((char*)((ng13)));
    t6 = (t1 + 20552);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB25;

LAB11:    xsi_set_current_line(160, ng0);
    t5 = ((char*)((ng15)));
    t6 = (t1 + 20552);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB25;

LAB13:    xsi_set_current_line(161, ng0);
    t5 = ((char*)((ng17)));
    t6 = (t1 + 20552);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB25;

LAB15:    xsi_set_current_line(162, ng0);
    t5 = ((char*)((ng19)));
    t6 = (t1 + 20552);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB25;

LAB17:    xsi_set_current_line(163, ng0);
    t5 = ((char*)((ng21)));
    t6 = (t1 + 20552);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB25;

LAB19:    xsi_set_current_line(164, ng0);
    t5 = ((char*)((ng23)));
    t6 = (t1 + 20552);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB25;

LAB21:    xsi_set_current_line(165, ng0);
    t5 = ((char*)((ng25)));
    t6 = (t1 + 20552);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB25;

LAB23:    xsi_set_current_line(166, ng0);
    t5 = ((char*)((ng27)));
    t6 = (t1 + 20552);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    goto LAB25;

}

static void Initial_85_0(char *t0)
{
    char t4[8];
    char t19[104];
    char t23[8];
    char t26[8];
    char t40[8];
    char t45[8];
    char t72[8];
    char t101[8];
    char t102[8];
    char t106[8];
    char t133[8];
    char t142[8];
    char t143[8];
    char t149[8];
    char t181[8];
    char t196[8];
    char t198[8];
    char t206[8];
    char t248[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    double t25;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    int t173;
    int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;
    char *t195;
    char *t197;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    int t230;
    int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    char *t245;
    char *t246;
    char *t247;
    char *t249;
    double t250;
    double t251;
    double t252;
    double t253;
    double t254;

LAB0:    t1 = (t0 + 21472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng28);

LAB4:    xsi_set_current_line(86, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 9672);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(87, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 9832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(88, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 8872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(89, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 8232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(90, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 8392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(91, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 8552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(92, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 8712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(93, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 9032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(94, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 9192);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(95, ng28);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 9352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng28);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng30, ng31);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 10952);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(99, ng28);
    t2 = (t0 + 10952);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(103, ng28);
    t2 = (t0 + 10952);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10472);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t19, 0, t13, 0, 400);
    *((int *)t4) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng33, 2, t0, (char)118, t19, 400);
    t20 = (t4 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 10472);
    xsi_vlogvar_assign_value(t21, t19, 0, 0, 400);
    t22 = ((char*)((ng34)));
    memset(t23, 0, 8);
    xsi_vlog_signed_not_equal(t23, 32, t4, 32, t22, 32);
    t24 = (t23 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t23);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(107, ng28);
    t2 = (t0 + 10952);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10632);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t25 = *((double *)t13);
    t20 = xsi_vlog_convert_real_to_bits(t25, t4, 64);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng36, 2, t0, (char)101, t4, 64);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 10632);
    xsi_vlogvar_assign_value_double(t22, *((double *)t4), 0);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(111, ng28);
    t2 = (t0 + 10952);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10792);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t25 = *((double *)t13);
    t20 = xsi_vlog_convert_real_to_bits(t25, t4, 64);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng38, 2, t0, (char)101, t4, 64);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 10792);
    xsi_vlogvar_assign_value_double(t22, *((double *)t4), 0);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(115, ng28);
    t2 = (t0 + 10952);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(119, ng28);
    t2 = (t0 + 21280);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB25;

LAB1:    return;
LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(99, ng28);

LAB12:    xsi_set_current_line(100, ng28);
    xsi_vlogfile_write(0, 0, 1, ng32, 1, t0);
    xsi_set_current_line(101, ng28);
    xsi_vlog_finish(1);
    goto LAB11;

LAB13:    xsi_set_current_line(103, ng28);

LAB16:    xsi_set_current_line(104, ng28);
    xsi_vlogfile_write(0, 0, 1, ng35, 1, t0);
    xsi_set_current_line(105, ng28);
    xsi_vlog_finish(1);
    goto LAB15;

LAB17:    xsi_set_current_line(107, ng28);

LAB20:    xsi_set_current_line(108, ng28);
    xsi_vlogfile_write(0, 0, 1, ng37, 1, t0);
    xsi_set_current_line(109, ng28);
    xsi_vlog_finish(1);
    goto LAB19;

LAB21:    xsi_set_current_line(111, ng28);

LAB24:    xsi_set_current_line(112, ng28);
    xsi_vlogfile_write(0, 0, 1, ng39, 1, t0);
    xsi_set_current_line(113, ng28);
    xsi_vlog_finish(1);
    goto LAB23;

LAB25:    xsi_set_current_line(121, ng28);
    t2 = (t0 + 10472);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB26:    t6 = ((char*)((ng40)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 400, t6, 400);
    if (t28 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng49)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 400, t2, 400);
    if (t28 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng60)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 400, t2, 400);
    if (t28 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng65)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 400, t2, 400);
    if (t28 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(412, ng28);

LAB654:
LAB37:    xsi_set_current_line(415, ng28);
    t2 = (t0 + 9672);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9832);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t6, 32, t20, 32);
    t21 = (t4 + 4);
    t7 = *((unsigned int *)t21);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB655;

LAB656:
LAB657:    xsi_set_current_line(418, ng28);
    t2 = (t0 + 9672);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t25 = xsi_vlog_convert_to_real(t6, 32, 1);
    t250 = (t25 * 1.0000000000000000);
    t12 = (t0 + 9832);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t251 = xsi_vlog_convert_to_real(t20, 32, 1);
    t252 = (t250 / t251);
    t21 = (t0 + 9992);
    xsi_vlogvar_assign_value_double(t21, t252, 0);
    xsi_set_current_line(419, ng28);
    t2 = (t0 + 9672);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t25 = xsi_vlog_convert_to_real(t6, 32, 1);
    t250 = (t25 * 1.0000000000000000);
    t12 = (t0 + 9832);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t251 = xsi_vlog_convert_to_real(t20, 32, 1);
    t252 = (t250 / t251);
    t21 = (t0 + 10152);
    xsi_vlogvar_assign_value_double(t21, t252, 0);
    xsi_set_current_line(422, ng28);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname(ng68);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 10312);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(423, ng28);
    t2 = (t0 + 10312);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 10632);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t25 = *((double *)t20);
    t21 = (t0 + 10152);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t250 = *((double *)t24);
    t251 = (t250 - 1.0000000000000000);
    t252 = (t25 * t251);
    *((double *)t4) = t252;
    t27 = (t0 + 9672);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 9832);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 9992);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t253 = *((double *)t36);
    t254 = (100.00000000000000 * t253);
    *((double *)t23) = t254;
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng69, 5, t0, (char)114, t4, 64, (char)119, t30, 32, (char)119, t33, 32, (char)114, t23, 64);
    xsi_set_current_line(424, ng28);
    t2 = (t0 + 10312);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t6));
    goto LAB1;

LAB27:    xsi_set_current_line(122, ng28);

LAB38:    xsi_set_current_line(123, ng28);
    xsi_set_current_line(123, ng28);
    t12 = ((char*)((ng29)));
    t13 = (t0 + 9512);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);

LAB39:    t2 = (t0 + 9512);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng41)));
    t13 = ((char*)((ng42)));
    memset(t4, 0, 8);
    xsi_vlog_signed_power(t4, 32, t12, 32, t13, 32, 1);
    memset(t23, 0, 8);
    xsi_vlog_signed_less(t23, 32, t6, 32, t4, 32);
    t20 = (t23 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t23);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB40;

LAB41:    goto LAB37;

LAB29:    xsi_set_current_line(167, ng28);

LAB136:    xsi_set_current_line(169, ng28);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng50, ng31);
    t3 = (t4 + 4);
    *((int *)t3) = 0;
    t6 = (t0 + 11112);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    xsi_set_current_line(170, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB140;

LAB138:    if (*((unsigned int *)t12) == 0)
        goto LAB137;

LAB139:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB140:    t20 = (t4 + 4);
    t14 = *((unsigned int *)t20);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB141;

LAB142:
LAB143:    xsi_set_current_line(175, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11272);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 32);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng52, 2, t0, (char)119, t4, 32);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 11272);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 32);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB145;

LAB146:
LAB147:    xsi_set_current_line(180, ng28);
    xsi_set_current_line(180, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 9512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB149:    t2 = (t0 + 9512);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11272);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t20, 32);
    t21 = (t4 + 4);
    t7 = *((unsigned int *)t21);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB150;

LAB151:    goto LAB37;

LAB31:    xsi_set_current_line(245, ng28);

LAB262:    xsi_set_current_line(247, ng28);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng50, ng31);
    t3 = (t4 + 4);
    *((int *)t3) = 0;
    t6 = (t0 + 11112);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    xsi_set_current_line(248, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB266;

LAB264:    if (*((unsigned int *)t12) == 0)
        goto LAB263;

LAB265:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB266:    t20 = (t4 + 4);
    t14 = *((unsigned int *)t20);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB267;

LAB268:
LAB269:    xsi_set_current_line(253, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11272);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 32);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng52, 2, t0, (char)119, t4, 32);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 11272);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 32);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB271;

LAB272:
LAB273:    xsi_set_current_line(258, ng28);
    xsi_set_current_line(258, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 9512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB275:    t2 = (t0 + 9512);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11272);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t20, 32);
    t21 = (t4 + 4);
    t7 = *((unsigned int *)t21);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB276;

LAB277:    goto LAB37;

LAB33:    xsi_set_current_line(336, ng28);

LAB464:    xsi_set_current_line(338, ng28);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng50, ng31);
    t3 = (t4 + 4);
    *((int *)t3) = 0;
    t6 = (t0 + 11112);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    xsi_set_current_line(339, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB468;

LAB466:    if (*((unsigned int *)t12) == 0)
        goto LAB465;

LAB467:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB468:    t20 = (t4 + 4);
    t14 = *((unsigned int *)t20);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB469;

LAB470:
LAB471:    xsi_set_current_line(344, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11272);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 32);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng52, 2, t0, (char)119, t4, 32);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 11272);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 32);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB473;

LAB474:
LAB475:    xsi_set_current_line(349, ng28);
    xsi_set_current_line(349, ng28);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 9512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB477:    t2 = (t0 + 9512);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11272);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t20, 32);
    t21 = (t4 + 4);
    t7 = *((unsigned int *)t21);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB478;

LAB479:    goto LAB37;

LAB40:    xsi_set_current_line(123, ng28);

LAB42:    xsi_set_current_line(124, ng28);
    t21 = (t0 + 9832);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_add(t26, 32, t24, 32, t27, 32);
    t29 = (t0 + 9832);
    xsi_vlogvar_assign_value(t29, t26, 0, 0, 32);
    xsi_set_current_line(126, ng28);
    t2 = (t0 + 9512);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8872);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(127, ng28);
    t2 = (t0 + 21280);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(129, ng28);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB44;

LAB45:
LAB46:    xsi_set_current_line(132, ng28);
    t2 = (t0 + 6232U);
    t3 = *((char **)t2);
    t2 = (t0 + 6072U);
    t6 = *((char **)t2);
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t6))
        goto LAB55;

LAB53:    t2 = (t3 + 4);
    t12 = (t6 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t12))
        goto LAB55;

LAB54:    *((unsigned int *)t4) = 1;

LAB55:    t13 = (t4 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(141, ng28);

LAB70:    xsi_set_current_line(142, ng28);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB71;

LAB72:
LAB73:    xsi_set_current_line(145, ng28);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t2) != 0)
        goto LAB76;

LAB77:    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (!(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB78;

LAB79:    memcpy(t45, t4, 8);

LAB80:    t37 = (t45 + 4);
    t67 = *((unsigned int *)t37);
    t68 = (~(t67));
    t69 = *((unsigned int *)t45);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB88;

LAB89:
LAB90:    xsi_set_current_line(154, ng28);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB113;

LAB111:    if (*((unsigned int *)t2) == 0)
        goto LAB110;

LAB112:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;

LAB113:    memset(t23, 0, 8);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t12) != 0)
        goto LAB116;

LAB117:    t20 = (t23 + 4);
    t41 = *((unsigned int *)t23);
    t42 = *((unsigned int *)t20);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB118;

LAB119:    memcpy(t72, t23, 8);

LAB120:    t39 = (t72 + 4);
    t76 = *((unsigned int *)t39);
    t77 = (~(t76));
    t78 = *((unsigned int *)t72);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB128;

LAB129:
LAB130:    xsi_set_current_line(160, ng28);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB132;

LAB133:
LAB134:
LAB58:    xsi_set_current_line(123, ng28);
    t2 = (t0 + 9512);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng34)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 9512);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB39;

LAB44:    xsi_set_current_line(130, ng28);
    t6 = (t0 + 8872);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 21280);
    t21 = (t0 + 3392);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t21, t22);
    t24 = (t0 + 17032);
    xsi_vlogvar_assign_value(t24, t13, 0, 0, 8);

LAB49:    t27 = (t0 + 21376);
    t29 = *((char **)t27);
    t30 = (t29 + 80U);
    t31 = *((char **)t30);
    t32 = (t31 + 272U);
    t33 = *((char **)t32);
    t34 = (t33 + 0U);
    t35 = *((char **)t34);
    t28 = ((int  (*)(char *, char *))t35)(t0, t29);

LAB51:    if (t28 != 0)
        goto LAB52;

LAB47:    t29 = (t0 + 3392);
    xsi_vlog_subprogram_popinvocation(t29);

LAB48:    t36 = (t0 + 21376);
    t37 = *((char **)t36);
    t36 = (t0 + 3392);
    t38 = (t0 + 21280);
    t39 = 0;
    xsi_delete_subprogram_invocation(t36, t37, t0, t38, t39);
    goto LAB46;

LAB50:;
LAB52:    t27 = (t0 + 21472U);
    *((char **)t27) = &&LAB49;
    goto LAB1;

LAB56:    xsi_set_current_line(132, ng28);

LAB59:    xsi_set_current_line(133, ng28);
    t20 = (t0 + 9672);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = ((char*)((ng34)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t22, 32, t24, 32);
    t27 = (t0 + 9672);
    xsi_vlogvar_assign_value(t27, t23, 0, 0, 32);
    xsi_set_current_line(135, ng28);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB58;

LAB60:    xsi_set_current_line(135, ng28);

LAB63:    xsi_set_current_line(136, ng28);
    xsi_vlogfile_write(0, 0, 1, ng43, 1, t0);
    xsi_set_current_line(137, ng28);
    t2 = (t0 + 6072U);
    t3 = *((char **)t2);
    t2 = (t0 + 21280);
    t6 = (t0 + 3824);
    t12 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t12);
    t13 = (t0 + 17352);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);

LAB66:    t20 = (t0 + 21376);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t24 = *((char **)t22);
    t27 = (t24 + 272U);
    t29 = *((char **)t27);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t28 = ((int  (*)(char *, char *))t31)(t0, t21);

LAB68:    if (t28 != 0)
        goto LAB69;

LAB64:    t21 = (t0 + 3824);
    xsi_vlog_subprogram_popinvocation(t21);

LAB65:    t32 = (t0 + 21376);
    t33 = *((char **)t32);
    t32 = (t0 + 3824);
    t34 = (t0 + 21280);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    xsi_set_current_line(138, ng28);
    xsi_vlogfile_write(0, 0, 1, ng44, 1, t0);
    goto LAB62;

LAB67:;
LAB69:    t20 = (t0 + 21472U);
    *((char **)t20) = &&LAB66;
    goto LAB1;

LAB71:    xsi_set_current_line(143, ng28);
    xsi_vlogfile_write(0, 0, 1, ng45, 1, t0);
    goto LAB73;

LAB74:    *((unsigned int *)t4) = 1;
    goto LAB77;

LAB76:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB77;

LAB78:    t13 = (t0 + 9832);
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 9672);
    t24 = (t22 + 56U);
    t27 = *((char **)t24);
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t21, 32, t27, 32);
    t29 = (t0 + 1152);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_leq(t26, 32, t23, 32, t30, 32);
    memset(t40, 0, 8);
    t29 = (t26 + 4);
    t18 = *((unsigned int *)t29);
    t41 = (~(t18));
    t42 = *((unsigned int *)t26);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t29) != 0)
        goto LAB83;

LAB84:    t46 = *((unsigned int *)t4);
    t47 = *((unsigned int *)t40);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t32 = (t4 + 4);
    t33 = (t40 + 4);
    t34 = (t45 + 4);
    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t33);
    t51 = (t49 | t50);
    *((unsigned int *)t34) = t51;
    t52 = *((unsigned int *)t34);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB80;

LAB81:    *((unsigned int *)t40) = 1;
    goto LAB84;

LAB83:    t31 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB84;

LAB85:    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t45) = (t54 | t55);
    t35 = (t4 + 4);
    t36 = (t40 + 4);
    t56 = *((unsigned int *)t35);
    t57 = (~(t56));
    t58 = *((unsigned int *)t4);
    t28 = (t58 & t57);
    t59 = *((unsigned int *)t36);
    t60 = (~(t59));
    t61 = *((unsigned int *)t40);
    t62 = (t61 & t60);
    t63 = (~(t28));
    t64 = (~(t62));
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t63);
    t66 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t66 & t64);
    goto LAB87;

LAB88:    xsi_set_current_line(145, ng28);

LAB91:    xsi_set_current_line(146, ng28);
    xsi_vlogfile_write(0, 0, 1, ng46, 1, t0);
    xsi_set_current_line(147, ng28);
    t2 = (t0 + 8872);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 21280);
    t13 = (t0 + 3392);
    t20 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t13, t20);
    t21 = (t0 + 17032);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 8);

LAB94:    t22 = (t0 + 21376);
    t24 = *((char **)t22);
    t27 = (t24 + 80U);
    t29 = *((char **)t27);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t28 = ((int  (*)(char *, char *))t33)(t0, t24);

LAB96:    if (t28 != 0)
        goto LAB97;

LAB92:    t24 = (t0 + 3392);
    xsi_vlog_subprogram_popinvocation(t24);

LAB93:    t34 = (t0 + 21376);
    t35 = *((char **)t34);
    t34 = (t0 + 3392);
    t36 = (t0 + 21280);
    t37 = 0;
    xsi_delete_subprogram_invocation(t34, t35, t0, t36, t37);
    xsi_set_current_line(148, ng28);
    xsi_vlogfile_write(0, 0, 1, ng43, 1, t0);
    xsi_set_current_line(149, ng28);
    t2 = (t0 + 6232U);
    t3 = *((char **)t2);
    t2 = (t0 + 21280);
    t6 = (t0 + 3824);
    t12 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t12);
    t13 = (t0 + 17352);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);

LAB100:    t20 = (t0 + 21376);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t24 = *((char **)t22);
    t27 = (t24 + 272U);
    t29 = *((char **)t27);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t28 = ((int  (*)(char *, char *))t31)(t0, t21);

LAB102:    if (t28 != 0)
        goto LAB103;

LAB98:    t21 = (t0 + 3824);
    xsi_vlog_subprogram_popinvocation(t21);

LAB99:    t32 = (t0 + 21376);
    t33 = *((char **)t32);
    t32 = (t0 + 3824);
    t34 = (t0 + 21280);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    xsi_set_current_line(150, ng28);
    xsi_vlogfile_write(0, 0, 1, ng47, 1, t0);
    xsi_set_current_line(151, ng28);
    t2 = (t0 + 6072U);
    t3 = *((char **)t2);
    t2 = (t0 + 21280);
    t6 = (t0 + 3824);
    t12 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t12);
    t13 = (t0 + 17352);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 16);

LAB106:    t20 = (t0 + 21376);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t24 = *((char **)t22);
    t27 = (t24 + 272U);
    t29 = *((char **)t27);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t28 = ((int  (*)(char *, char *))t31)(t0, t21);

LAB108:    if (t28 != 0)
        goto LAB109;

LAB104:    t21 = (t0 + 3824);
    xsi_vlog_subprogram_popinvocation(t21);

LAB105:    t32 = (t0 + 21376);
    t33 = *((char **)t32);
    t32 = (t0 + 3824);
    t34 = (t0 + 21280);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    xsi_set_current_line(152, ng28);
    xsi_vlogfile_write(0, 0, 1, ng45, 1, t0);
    goto LAB90;

LAB95:;
LAB97:    t22 = (t0 + 21472U);
    *((char **)t22) = &&LAB94;
    goto LAB1;

LAB101:;
LAB103:    t20 = (t0 + 21472U);
    *((char **)t20) = &&LAB100;
    goto LAB1;

LAB107:;
LAB109:    t20 = (t0 + 21472U);
    *((char **)t20) = &&LAB106;
    goto LAB1;

LAB110:    *((unsigned int *)t4) = 1;
    goto LAB113;

LAB114:    *((unsigned int *)t23) = 1;
    goto LAB117;

LAB116:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB117;

LAB118:    t21 = (t0 + 9832);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 9672);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t24, 32, t30, 32);
    t31 = (t0 + 1152);
    t32 = *((char **)t31);
    memset(t40, 0, 8);
    xsi_vlog_signed_equal(t40, 32, t26, 32, t32, 32);
    memset(t45, 0, 8);
    t31 = (t40 + 4);
    t44 = *((unsigned int *)t31);
    t46 = (~(t44));
    t47 = *((unsigned int *)t40);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t31) != 0)
        goto LAB123;

LAB124:    t50 = *((unsigned int *)t23);
    t51 = *((unsigned int *)t45);
    t52 = (t50 & t51);
    *((unsigned int *)t72) = t52;
    t34 = (t23 + 4);
    t35 = (t45 + 4);
    t36 = (t72 + 4);
    t53 = *((unsigned int *)t34);
    t54 = *((unsigned int *)t35);
    t55 = (t53 | t54);
    *((unsigned int *)t36) = t55;
    t56 = *((unsigned int *)t36);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB125;

LAB126:
LAB127:    goto LAB120;

LAB121:    *((unsigned int *)t45) = 1;
    goto LAB124;

LAB123:    t33 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB124;

LAB125:    t58 = *((unsigned int *)t72);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t72) = (t58 | t59);
    t37 = (t23 + 4);
    t38 = (t45 + 4);
    t60 = *((unsigned int *)t23);
    t61 = (~(t60));
    t63 = *((unsigned int *)t37);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (~(t65));
    t67 = *((unsigned int *)t38);
    t68 = (~(t67));
    t28 = (t61 & t64);
    t62 = (t66 & t68);
    t69 = (~(t28));
    t70 = (~(t62));
    t71 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t71 & t69);
    t73 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t73 & t70);
    t74 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t74 & t69);
    t75 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t75 & t70);
    goto LAB127;

LAB128:    xsi_set_current_line(154, ng28);

LAB131:    xsi_set_current_line(155, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    xsi_set_current_line(156, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    xsi_set_current_line(157, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    goto LAB130;

LAB132:    xsi_set_current_line(160, ng28);

LAB135:    xsi_set_current_line(161, ng28);
    t6 = ((char*)((ng41)));
    t12 = ((char*)((ng42)));
    memset(t4, 0, 8);
    xsi_vlog_signed_power(t4, 32, t6, 32, t12, 32, 1);
    t13 = (t0 + 9512);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB134;

LAB137:    *((unsigned int *)t4) = 1;
    goto LAB140;

LAB141:    xsi_set_current_line(170, ng28);

LAB144:    xsi_set_current_line(171, ng28);
    xsi_vlogfile_write(0, 0, 1, ng51, 1, t0);
    xsi_set_current_line(172, ng28);
    xsi_vlog_finish(1);
    goto LAB143;

LAB145:    xsi_set_current_line(175, ng28);

LAB148:    xsi_set_current_line(176, ng28);
    xsi_vlogfile_write(0, 0, 1, ng53, 1, t0);
    xsi_set_current_line(177, ng28);
    xsi_vlog_finish(1);
    goto LAB147;

LAB150:    xsi_set_current_line(180, ng28);

LAB152:    xsi_set_current_line(181, ng28);
    t22 = (t0 + 11112);
    t24 = (t22 + 56U);
    t27 = *((char **)t24);
    t29 = (t0 + 11432);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_bit_copy(t23, 0, t31, 0, 9);
    *((int *)t26) = xsi_vlogfile_fscanf(*((unsigned int *)t27), ng54, 2, t0, (char)118, t23, 9);
    t32 = (t26 + 4);
    *((int *)t32) = 0;
    t33 = (t0 + 11432);
    xsi_vlogvar_assign_value(t33, t23, 0, 0, 9);
    t34 = ((char*)((ng34)));
    memset(t40, 0, 8);
    xsi_vlog_signed_not_equal(t40, 32, t26, 32, t34, 32);
    t35 = (t40 + 4);
    t14 = *((unsigned int *)t35);
    t15 = (~(t14));
    t16 = *((unsigned int *)t40);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB153;

LAB154:
LAB155:    xsi_set_current_line(185, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11592);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 9);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng54, 2, t0, (char)118, t4, 9);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 11592);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 9);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB157;

LAB158:
LAB159:    xsi_set_current_line(189, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11752);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 9);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng54, 2, t0, (char)118, t4, 9);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 11752);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 9);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB161;

LAB162:
LAB163:    xsi_set_current_line(193, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11912);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 9);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng58, 2, t0, (char)118, t4, 9);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 11912);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 9);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB165;

LAB166:
LAB167:    xsi_set_current_line(199, ng28);
    t2 = (t0 + 9832);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng34)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 9832);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    xsi_set_current_line(201, ng28);
    t2 = (t0 + 11432);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8232);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(202, ng28);
    t2 = (t0 + 11592);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8392);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(203, ng28);
    t2 = (t0 + 11752);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8552);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(204, ng28);
    t2 = (t0 + 11912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8712);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(205, ng28);
    t2 = (t0 + 21280);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB169;
    goto LAB1;

LAB153:    xsi_set_current_line(181, ng28);

LAB156:    xsi_set_current_line(182, ng28);
    t36 = (t0 + 9512);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlogfile_write(0, 0, 1, ng55, 2, t0, (char)119, t38, 32);
    xsi_set_current_line(183, ng28);
    xsi_vlog_finish(1);
    goto LAB155;

LAB157:    xsi_set_current_line(185, ng28);

LAB160:    xsi_set_current_line(186, ng28);
    t29 = (t0 + 9512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(0, 0, 1, ng56, 2, t0, (char)119, t31, 32);
    xsi_set_current_line(187, ng28);
    xsi_vlog_finish(1);
    goto LAB159;

LAB161:    xsi_set_current_line(189, ng28);

LAB164:    xsi_set_current_line(190, ng28);
    t29 = (t0 + 9512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(0, 0, 1, ng57, 2, t0, (char)119, t31, 32);
    xsi_set_current_line(191, ng28);
    xsi_vlog_finish(1);
    goto LAB163;

LAB165:    xsi_set_current_line(193, ng28);

LAB168:    xsi_set_current_line(194, ng28);
    t29 = (t0 + 9512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(0, 0, 1, ng59, 2, t0, (char)119, t31, 32);
    xsi_set_current_line(195, ng28);
    xsi_vlog_finish(1);
    goto LAB167;

LAB169:    xsi_set_current_line(207, ng28);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB170;

LAB171:
LAB172:    xsi_set_current_line(210, ng28);
    t2 = (t0 + 5912U);
    t3 = *((char **)t2);
    t2 = (t0 + 5752U);
    t6 = *((char **)t2);
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t6))
        goto LAB181;

LAB179:    t2 = (t3 + 4);
    t12 = (t6 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t12))
        goto LAB181;

LAB180:    *((unsigned int *)t4) = 1;

LAB181:    t13 = (t4 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB182;

LAB183:    xsi_set_current_line(219, ng28);

LAB196:    xsi_set_current_line(220, ng28);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB197;

LAB198:
LAB199:    xsi_set_current_line(223, ng28);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB200;

LAB201:    if (*((unsigned int *)t2) != 0)
        goto LAB202;

LAB203:    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (!(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB204;

LAB205:    memcpy(t45, t4, 8);

LAB206:    t37 = (t45 + 4);
    t67 = *((unsigned int *)t37);
    t68 = (~(t67));
    t69 = *((unsigned int *)t45);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB214;

LAB215:
LAB216:    xsi_set_current_line(232, ng28);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB239;

LAB237:    if (*((unsigned int *)t2) == 0)
        goto LAB236;

LAB238:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;

LAB239:    memset(t23, 0, 8);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB240;

LAB241:    if (*((unsigned int *)t12) != 0)
        goto LAB242;

LAB243:    t20 = (t23 + 4);
    t41 = *((unsigned int *)t23);
    t42 = *((unsigned int *)t20);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB244;

LAB245:    memcpy(t72, t23, 8);

LAB246:    t39 = (t72 + 4);
    t76 = *((unsigned int *)t39);
    t77 = (~(t76));
    t78 = *((unsigned int *)t72);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB254;

LAB255:
LAB256:    xsi_set_current_line(238, ng28);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB258;

LAB259:
LAB260:
LAB184:    xsi_set_current_line(180, ng28);
    t2 = (t0 + 9512);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng34)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 9512);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB149;

LAB170:    xsi_set_current_line(208, ng28);
    t6 = (t0 + 8232);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 8392);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = (t0 + 8552);
    t27 = (t24 + 56U);
    t29 = *((char **)t27);
    t30 = (t0 + 8712);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 21280);
    t34 = (t0 + 2528);
    t35 = xsi_create_subprogram_invocation(t33, 0, t0, t34, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t34, t35);
    t36 = (t0 + 15432);
    xsi_vlogvar_assign_value(t36, t13, 0, 0, 8);
    t37 = (t0 + 15592);
    xsi_vlogvar_assign_value(t37, t22, 0, 0, 8);
    t38 = (t0 + 15752);
    xsi_vlogvar_assign_value(t38, t29, 0, 0, 8);
    t39 = (t0 + 15912);
    xsi_vlogvar_assign_value(t39, t32, 0, 0, 8);

LAB175:    t81 = (t0 + 21376);
    t82 = *((char **)t81);
    t83 = (t82 + 80U);
    t84 = *((char **)t83);
    t85 = (t84 + 272U);
    t86 = *((char **)t85);
    t87 = (t86 + 0U);
    t88 = *((char **)t87);
    t28 = ((int  (*)(char *, char *))t88)(t0, t82);

LAB177:    if (t28 != 0)
        goto LAB178;

LAB173:    t82 = (t0 + 2528);
    xsi_vlog_subprogram_popinvocation(t82);

LAB174:    t89 = (t0 + 21376);
    t90 = *((char **)t89);
    t89 = (t0 + 2528);
    t91 = (t0 + 21280);
    t92 = 0;
    xsi_delete_subprogram_invocation(t89, t90, t0, t91, t92);
    goto LAB172;

LAB176:;
LAB178:    t81 = (t0 + 21472U);
    *((char **)t81) = &&LAB175;
    goto LAB1;

LAB182:    xsi_set_current_line(210, ng28);

LAB185:    xsi_set_current_line(211, ng28);
    t20 = (t0 + 9672);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = ((char*)((ng34)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t22, 32, t24, 32);
    t27 = (t0 + 9672);
    xsi_vlogvar_assign_value(t27, t23, 0, 0, 32);
    xsi_set_current_line(213, ng28);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB186;

LAB187:
LAB188:    goto LAB184;

LAB186:    xsi_set_current_line(213, ng28);

LAB189:    xsi_set_current_line(214, ng28);
    xsi_vlogfile_write(0, 0, 1, ng43, 1, t0);
    xsi_set_current_line(215, ng28);
    t2 = (t0 + 5752U);
    t3 = *((char **)t2);
    t2 = (t0 + 21280);
    t6 = (t0 + 2960);
    t12 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t12);
    t13 = (t0 + 16712);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);

LAB192:    t20 = (t0 + 21376);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t24 = *((char **)t22);
    t27 = (t24 + 272U);
    t29 = *((char **)t27);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t28 = ((int  (*)(char *, char *))t31)(t0, t21);

LAB194:    if (t28 != 0)
        goto LAB195;

LAB190:    t21 = (t0 + 2960);
    xsi_vlog_subprogram_popinvocation(t21);

LAB191:    t32 = (t0 + 21376);
    t33 = *((char **)t32);
    t32 = (t0 + 2960);
    t34 = (t0 + 21280);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    xsi_set_current_line(216, ng28);
    xsi_vlogfile_write(0, 0, 1, ng44, 1, t0);
    goto LAB188;

LAB193:;
LAB195:    t20 = (t0 + 21472U);
    *((char **)t20) = &&LAB192;
    goto LAB1;

LAB197:    xsi_set_current_line(221, ng28);
    xsi_vlogfile_write(0, 0, 1, ng45, 1, t0);
    goto LAB199;

LAB200:    *((unsigned int *)t4) = 1;
    goto LAB203;

LAB202:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB203;

LAB204:    t13 = (t0 + 9832);
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 9672);
    t24 = (t22 + 56U);
    t27 = *((char **)t24);
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t21, 32, t27, 32);
    t29 = (t0 + 1152);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_leq(t26, 32, t23, 32, t30, 32);
    memset(t40, 0, 8);
    t29 = (t26 + 4);
    t18 = *((unsigned int *)t29);
    t41 = (~(t18));
    t42 = *((unsigned int *)t26);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t29) != 0)
        goto LAB209;

LAB210:    t46 = *((unsigned int *)t4);
    t47 = *((unsigned int *)t40);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t32 = (t4 + 4);
    t33 = (t40 + 4);
    t34 = (t45 + 4);
    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t33);
    t51 = (t49 | t50);
    *((unsigned int *)t34) = t51;
    t52 = *((unsigned int *)t34);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB211;

LAB212:
LAB213:    goto LAB206;

LAB207:    *((unsigned int *)t40) = 1;
    goto LAB210;

LAB209:    t31 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB210;

LAB211:    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t45) = (t54 | t55);
    t35 = (t4 + 4);
    t36 = (t40 + 4);
    t56 = *((unsigned int *)t35);
    t57 = (~(t56));
    t58 = *((unsigned int *)t4);
    t28 = (t58 & t57);
    t59 = *((unsigned int *)t36);
    t60 = (~(t59));
    t61 = *((unsigned int *)t40);
    t62 = (t61 & t60);
    t63 = (~(t28));
    t64 = (~(t62));
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t63);
    t66 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t66 & t64);
    goto LAB213;

LAB214:    xsi_set_current_line(223, ng28);

LAB217:    xsi_set_current_line(224, ng28);
    xsi_vlogfile_write(0, 0, 1, ng46, 1, t0);
    xsi_set_current_line(225, ng28);
    t2 = (t0 + 8232);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8392);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t21 = (t0 + 8552);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 8712);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 21280);
    t32 = (t0 + 2528);
    t33 = xsi_create_subprogram_invocation(t31, 0, t0, t32, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t32, t33);
    t34 = (t0 + 15432);
    xsi_vlogvar_assign_value(t34, t6, 0, 0, 8);
    t35 = (t0 + 15592);
    xsi_vlogvar_assign_value(t35, t20, 0, 0, 8);
    t36 = (t0 + 15752);
    xsi_vlogvar_assign_value(t36, t24, 0, 0, 8);
    t37 = (t0 + 15912);
    xsi_vlogvar_assign_value(t37, t30, 0, 0, 8);

LAB220:    t38 = (t0 + 21376);
    t39 = *((char **)t38);
    t81 = (t39 + 80U);
    t82 = *((char **)t81);
    t83 = (t82 + 272U);
    t84 = *((char **)t83);
    t85 = (t84 + 0U);
    t86 = *((char **)t85);
    t28 = ((int  (*)(char *, char *))t86)(t0, t39);

LAB222:    if (t28 != 0)
        goto LAB223;

LAB218:    t39 = (t0 + 2528);
    xsi_vlog_subprogram_popinvocation(t39);

LAB219:    t87 = (t0 + 21376);
    t88 = *((char **)t87);
    t87 = (t0 + 2528);
    t89 = (t0 + 21280);
    t90 = 0;
    xsi_delete_subprogram_invocation(t87, t88, t0, t89, t90);
    xsi_set_current_line(226, ng28);
    xsi_vlogfile_write(0, 0, 1, ng43, 1, t0);
    xsi_set_current_line(227, ng28);
    t2 = (t0 + 5912U);
    t3 = *((char **)t2);
    t2 = (t0 + 21280);
    t6 = (t0 + 2960);
    t12 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t12);
    t13 = (t0 + 16712);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);

LAB226:    t20 = (t0 + 21376);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t24 = *((char **)t22);
    t27 = (t24 + 272U);
    t29 = *((char **)t27);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t28 = ((int  (*)(char *, char *))t31)(t0, t21);

LAB228:    if (t28 != 0)
        goto LAB229;

LAB224:    t21 = (t0 + 2960);
    xsi_vlog_subprogram_popinvocation(t21);

LAB225:    t32 = (t0 + 21376);
    t33 = *((char **)t32);
    t32 = (t0 + 2960);
    t34 = (t0 + 21280);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    xsi_set_current_line(228, ng28);
    xsi_vlogfile_write(0, 0, 1, ng47, 1, t0);
    xsi_set_current_line(229, ng28);
    t2 = (t0 + 5752U);
    t3 = *((char **)t2);
    t2 = (t0 + 21280);
    t6 = (t0 + 2960);
    t12 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t12);
    t13 = (t0 + 16712);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 8);

LAB232:    t20 = (t0 + 21376);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t24 = *((char **)t22);
    t27 = (t24 + 272U);
    t29 = *((char **)t27);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t28 = ((int  (*)(char *, char *))t31)(t0, t21);

LAB234:    if (t28 != 0)
        goto LAB235;

LAB230:    t21 = (t0 + 2960);
    xsi_vlog_subprogram_popinvocation(t21);

LAB231:    t32 = (t0 + 21376);
    t33 = *((char **)t32);
    t32 = (t0 + 2960);
    t34 = (t0 + 21280);
    t35 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t34, t35);
    xsi_set_current_line(230, ng28);
    xsi_vlogfile_write(0, 0, 1, ng45, 1, t0);
    goto LAB216;

LAB221:;
LAB223:    t38 = (t0 + 21472U);
    *((char **)t38) = &&LAB220;
    goto LAB1;

LAB227:;
LAB229:    t20 = (t0 + 21472U);
    *((char **)t20) = &&LAB226;
    goto LAB1;

LAB233:;
LAB235:    t20 = (t0 + 21472U);
    *((char **)t20) = &&LAB232;
    goto LAB1;

LAB236:    *((unsigned int *)t4) = 1;
    goto LAB239;

LAB240:    *((unsigned int *)t23) = 1;
    goto LAB243;

LAB242:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB243;

LAB244:    t21 = (t0 + 9832);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 9672);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t24, 32, t30, 32);
    t31 = (t0 + 1152);
    t32 = *((char **)t31);
    memset(t40, 0, 8);
    xsi_vlog_signed_equal(t40, 32, t26, 32, t32, 32);
    memset(t45, 0, 8);
    t31 = (t40 + 4);
    t44 = *((unsigned int *)t31);
    t46 = (~(t44));
    t47 = *((unsigned int *)t40);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB247;

LAB248:    if (*((unsigned int *)t31) != 0)
        goto LAB249;

LAB250:    t50 = *((unsigned int *)t23);
    t51 = *((unsigned int *)t45);
    t52 = (t50 & t51);
    *((unsigned int *)t72) = t52;
    t34 = (t23 + 4);
    t35 = (t45 + 4);
    t36 = (t72 + 4);
    t53 = *((unsigned int *)t34);
    t54 = *((unsigned int *)t35);
    t55 = (t53 | t54);
    *((unsigned int *)t36) = t55;
    t56 = *((unsigned int *)t36);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB251;

LAB252:
LAB253:    goto LAB246;

LAB247:    *((unsigned int *)t45) = 1;
    goto LAB250;

LAB249:    t33 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB250;

LAB251:    t58 = *((unsigned int *)t72);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t72) = (t58 | t59);
    t37 = (t23 + 4);
    t38 = (t45 + 4);
    t60 = *((unsigned int *)t23);
    t61 = (~(t60));
    t63 = *((unsigned int *)t37);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (~(t65));
    t67 = *((unsigned int *)t38);
    t68 = (~(t67));
    t28 = (t61 & t64);
    t62 = (t66 & t68);
    t69 = (~(t28));
    t70 = (~(t62));
    t71 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t71 & t69);
    t73 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t73 & t70);
    t74 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t74 & t69);
    t75 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t75 & t70);
    goto LAB253;

LAB254:    xsi_set_current_line(232, ng28);

LAB257:    xsi_set_current_line(233, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    xsi_set_current_line(234, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    xsi_set_current_line(235, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    goto LAB256;

LAB258:    xsi_set_current_line(238, ng28);

LAB261:    xsi_set_current_line(239, ng28);
    t6 = (t0 + 11272);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 9512);
    xsi_vlogvar_assign_value(t20, t13, 0, 0, 32);
    goto LAB260;

LAB263:    *((unsigned int *)t4) = 1;
    goto LAB266;

LAB267:    xsi_set_current_line(248, ng28);

LAB270:    xsi_set_current_line(249, ng28);
    xsi_vlogfile_write(0, 0, 1, ng51, 1, t0);
    xsi_set_current_line(250, ng28);
    xsi_vlog_finish(1);
    goto LAB269;

LAB271:    xsi_set_current_line(253, ng28);

LAB274:    xsi_set_current_line(254, ng28);
    xsi_vlogfile_write(0, 0, 1, ng53, 1, t0);
    xsi_set_current_line(255, ng28);
    xsi_vlog_finish(1);
    goto LAB273;

LAB276:    xsi_set_current_line(258, ng28);

LAB278:    xsi_set_current_line(259, ng28);
    t22 = (t0 + 11112);
    t24 = (t22 + 56U);
    t27 = *((char **)t24);
    t29 = (t0 + 11432);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_bit_copy(t23, 0, t31, 0, 9);
    *((int *)t26) = xsi_vlogfile_fscanf(*((unsigned int *)t27), ng54, 2, t0, (char)118, t23, 9);
    t32 = (t26 + 4);
    *((int *)t32) = 0;
    t33 = (t0 + 11432);
    xsi_vlogvar_assign_value(t33, t23, 0, 0, 9);
    t34 = ((char*)((ng34)));
    memset(t40, 0, 8);
    xsi_vlog_signed_not_equal(t40, 32, t26, 32, t34, 32);
    t35 = (t40 + 4);
    t14 = *((unsigned int *)t35);
    t15 = (~(t14));
    t16 = *((unsigned int *)t40);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB279;

LAB280:
LAB281:    xsi_set_current_line(263, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11592);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 9);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng54, 2, t0, (char)118, t4, 9);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 11592);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 9);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB283;

LAB284:
LAB285:    xsi_set_current_line(267, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11752);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 9);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng54, 2, t0, (char)118, t4, 9);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 11752);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 9);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB287;

LAB288:
LAB289:    xsi_set_current_line(271, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 11912);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 9);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng54, 2, t0, (char)118, t4, 9);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 11912);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 9);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB291;

LAB292:
LAB293:    xsi_set_current_line(275, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 12232);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 17);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng61, 2, t0, (char)118, t4, 17);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 12232);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 17);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB295;

LAB296:
LAB297:    xsi_set_current_line(279, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 12392);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 1);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng58, 2, t0, (char)118, t4, 1);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 12392);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 1);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB299;

LAB300:
LAB301:    xsi_set_current_line(285, ng28);
    t2 = (t0 + 9832);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng34)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 9832);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    xsi_set_current_line(287, ng28);
    t2 = (t0 + 11432);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8232);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(288, ng28);
    t2 = (t0 + 11592);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8392);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(289, ng28);
    t2 = (t0 + 11752);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8552);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(290, ng28);
    t2 = (t0 + 11912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8712);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(291, ng28);
    t2 = (t0 + 12232);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9032);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 16);
    xsi_set_current_line(292, ng28);
    t2 = (t0 + 12392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9352);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);
    xsi_set_current_line(293, ng28);
    t2 = (t0 + 21280);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB303;
    goto LAB1;

LAB279:    xsi_set_current_line(259, ng28);

LAB282:    xsi_set_current_line(260, ng28);
    t36 = (t0 + 9512);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlogfile_write(0, 0, 1, ng55, 2, t0, (char)119, t38, 32);
    xsi_set_current_line(261, ng28);
    xsi_vlog_finish(1);
    goto LAB281;

LAB283:    xsi_set_current_line(263, ng28);

LAB286:    xsi_set_current_line(264, ng28);
    t29 = (t0 + 9512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(0, 0, 1, ng56, 2, t0, (char)119, t31, 32);
    xsi_set_current_line(265, ng28);
    xsi_vlog_finish(1);
    goto LAB285;

LAB287:    xsi_set_current_line(267, ng28);

LAB290:    xsi_set_current_line(268, ng28);
    t29 = (t0 + 9512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(0, 0, 1, ng57, 2, t0, (char)119, t31, 32);
    xsi_set_current_line(269, ng28);
    xsi_vlog_finish(1);
    goto LAB289;

LAB291:    xsi_set_current_line(271, ng28);

LAB294:    xsi_set_current_line(272, ng28);
    t29 = (t0 + 9512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(0, 0, 1, ng59, 2, t0, (char)119, t31, 32);
    xsi_set_current_line(273, ng28);
    xsi_vlog_finish(1);
    goto LAB293;

LAB295:    xsi_set_current_line(275, ng28);

LAB298:    xsi_set_current_line(276, ng28);
    t29 = (t0 + 9512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(0, 0, 1, ng62, 2, t0, (char)119, t31, 32);
    xsi_set_current_line(277, ng28);
    xsi_vlog_finish(1);
    goto LAB297;

LAB299:    xsi_set_current_line(279, ng28);

LAB302:    xsi_set_current_line(280, ng28);
    t29 = (t0 + 9512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(0, 0, 1, ng63, 2, t0, (char)119, t31, 32);
    xsi_set_current_line(281, ng28);
    xsi_vlog_finish(1);
    goto LAB301;

LAB303:    xsi_set_current_line(295, ng28);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB304;

LAB305:
LAB306:    xsi_set_current_line(298, ng28);
    t2 = (t0 + 7192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6392U);
    t6 = *((char **)t2);
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t6))
        goto LAB315;

LAB313:    t2 = (t3 + 4);
    t12 = (t6 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t12))
        goto LAB315;

LAB314:    *((unsigned int *)t4) = 1;

LAB315:    memset(t23, 0, 8);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB316;

LAB317:    if (*((unsigned int *)t13) != 0)
        goto LAB318;

LAB319:    t21 = (t23 + 4);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB320;

LAB321:    memcpy(t45, t23, 8);

LAB322:    memset(t72, 0, 8);
    t37 = (t45 + 4);
    t70 = *((unsigned int *)t37);
    t71 = (~(t70));
    t73 = *((unsigned int *)t45);
    t74 = (t73 & t71);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB333;

LAB334:    if (*((unsigned int *)t37) != 0)
        goto LAB335;

LAB336:    t39 = (t72 + 4);
    t76 = *((unsigned int *)t72);
    t77 = *((unsigned int *)t39);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB337;

LAB338:    memcpy(t106, t72, 8);

LAB339:    memset(t133, 0, 8);
    t92 = (t106 + 4);
    t134 = *((unsigned int *)t92);
    t135 = (~(t134));
    t136 = *((unsigned int *)t106);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB350;

LAB351:    if (*((unsigned int *)t92) != 0)
        goto LAB352;

LAB353:    t94 = (t133 + 4);
    t139 = *((unsigned int *)t133);
    t140 = *((unsigned int *)t94);
    t141 = (t139 || t140);
    if (t141 > 0)
        goto LAB354;

LAB355:    memcpy(t149, t133, 8);

LAB356:    memset(t181, 0, 8);
    t182 = (t149 + 4);
    t183 = *((unsigned int *)t182);
    t184 = (~(t183));
    t185 = *((unsigned int *)t149);
    t186 = (t185 & t184);
    t187 = (t186 & 1U);
    if (t187 != 0)
        goto LAB367;

LAB368:    if (*((unsigned int *)t182) != 0)
        goto LAB369;

LAB370:    t189 = (t181 + 4);
    t190 = *((unsigned int *)t181);
    t191 = *((unsigned int *)t189);
    t192 = (t190 || t191);
    if (t192 > 0)
        goto LAB371;

LAB372:    memcpy(t206, t181, 8);

LAB373:    t238 = (t206 + 4);
    t239 = *((unsigned int *)t238);
    t240 = (~(t239));
    t241 = *((unsigned int *)t206);
    t242 = (t241 & t240);
    t243 = (t242 != 0);
    if (t243 > 0)
        goto LAB384;

LAB385:    xsi_set_current_line(309, ng28);

LAB398:    xsi_set_current_line(310, ng28);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB399;

LAB400:
LAB401:    xsi_set_current_line(313, ng28);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB402;

LAB403:    if (*((unsigned int *)t2) != 0)
        goto LAB404;

LAB405:    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (!(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB406;

LAB407:    memcpy(t45, t4, 8);

LAB408:    t37 = (t45 + 4);
    t67 = *((unsigned int *)t37);
    t68 = (~(t67));
    t69 = *((unsigned int *)t45);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB416;

LAB417:
LAB418:    xsi_set_current_line(322, ng28);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB441;

LAB439:    if (*((unsigned int *)t2) == 0)
        goto LAB438;

LAB440:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;

LAB441:    memset(t23, 0, 8);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB442;

LAB443:    if (*((unsigned int *)t12) != 0)
        goto LAB444;

LAB445:    t20 = (t23 + 4);
    t41 = *((unsigned int *)t23);
    t42 = *((unsigned int *)t20);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB446;

LAB447:    memcpy(t72, t23, 8);

LAB448:    t39 = (t72 + 4);
    t76 = *((unsigned int *)t39);
    t77 = (~(t76));
    t78 = *((unsigned int *)t72);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB456;

LAB457:
LAB458:    xsi_set_current_line(328, ng28);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB460;

LAB461:
LAB462:
LAB386:    xsi_set_current_line(258, ng28);
    t2 = (t0 + 9512);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng34)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 9512);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB275;

LAB304:    xsi_set_current_line(296, ng28);
    t6 = (t0 + 8232);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 8392);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = (t0 + 8552);
    t27 = (t24 + 56U);
    t29 = *((char **)t27);
    t30 = (t0 + 8712);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 9032);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t0 + 9352);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t0 + 21280);
    t81 = (t0 + 1664);
    t82 = xsi_create_subprogram_invocation(t39, 0, t0, t81, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t81, t82);
    t83 = (t0 + 12552);
    xsi_vlogvar_assign_value(t83, t13, 0, 0, 8);
    t84 = (t0 + 12712);
    xsi_vlogvar_assign_value(t84, t22, 0, 0, 8);
    t85 = (t0 + 12872);
    xsi_vlogvar_assign_value(t85, t29, 0, 0, 8);
    t86 = (t0 + 13032);
    xsi_vlogvar_assign_value(t86, t32, 0, 0, 8);
    t87 = (t0 + 13192);
    xsi_vlogvar_assign_value(t87, t35, 0, 0, 16);
    t88 = (t0 + 13352);
    xsi_vlogvar_assign_value(t88, t38, 0, 0, 1);

LAB309:    t89 = (t0 + 21376);
    t90 = *((char **)t89);
    t91 = (t90 + 80U);
    t92 = *((char **)t91);
    t93 = (t92 + 272U);
    t94 = *((char **)t93);
    t95 = (t94 + 0U);
    t96 = *((char **)t95);
    t28 = ((int  (*)(char *, char *))t96)(t0, t90);

LAB311:    if (t28 != 0)
        goto LAB312;

LAB307:    t90 = (t0 + 1664);
    xsi_vlog_subprogram_popinvocation(t90);

LAB308:    t97 = (t0 + 21376);
    t98 = *((char **)t97);
    t97 = (t0 + 1664);
    t99 = (t0 + 21280);
    t100 = 0;
    xsi_delete_subprogram_invocation(t97, t98, t0, t99, t100);
    goto LAB306;

LAB310:;
LAB312:    t89 = (t0 + 21472U);
    *((char **)t89) = &&LAB309;
    goto LAB1;

LAB316:    *((unsigned int *)t23) = 1;
    goto LAB319;

LAB318:    t20 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB319;

LAB320:    t22 = (t0 + 7352U);
    t24 = *((char **)t22);
    t22 = (t0 + 6552U);
    t27 = *((char **)t22);
    memset(t26, 0, 8);
    if (*((unsigned int *)t24) != *((unsigned int *)t27))
        goto LAB325;

LAB323:    t22 = (t24 + 4);
    t29 = (t27 + 4);
    if (*((unsigned int *)t22) != *((unsigned int *)t29))
        goto LAB325;

LAB324:    *((unsigned int *)t26) = 1;

LAB325:    memset(t40, 0, 8);
    t30 = (t26 + 4);
    t17 = *((unsigned int *)t30);
    t18 = (~(t17));
    t41 = *((unsigned int *)t26);
    t42 = (t41 & t18);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB326;

LAB327:    if (*((unsigned int *)t30) != 0)
        goto LAB328;

LAB329:    t44 = *((unsigned int *)t23);
    t46 = *((unsigned int *)t40);
    t47 = (t44 & t46);
    *((unsigned int *)t45) = t47;
    t32 = (t23 + 4);
    t33 = (t40 + 4);
    t34 = (t45 + 4);
    t48 = *((unsigned int *)t32);
    t49 = *((unsigned int *)t33);
    t50 = (t48 | t49);
    *((unsigned int *)t34) = t50;
    t51 = *((unsigned int *)t34);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB330;

LAB331:
LAB332:    goto LAB322;

LAB326:    *((unsigned int *)t40) = 1;
    goto LAB329;

LAB328:    t31 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB329;

LAB330:    t53 = *((unsigned int *)t45);
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t45) = (t53 | t54);
    t35 = (t23 + 4);
    t36 = (t40 + 4);
    t55 = *((unsigned int *)t23);
    t56 = (~(t55));
    t57 = *((unsigned int *)t35);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t36);
    t63 = (~(t61));
    t28 = (t56 & t58);
    t62 = (t60 & t63);
    t64 = (~(t28));
    t65 = (~(t62));
    t66 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t66 & t64);
    t67 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t64);
    t69 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t69 & t65);
    goto LAB332;

LAB333:    *((unsigned int *)t72) = 1;
    goto LAB336;

LAB335:    t38 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB336;

LAB337:    t81 = (t0 + 7512U);
    t82 = *((char **)t81);
    t81 = (t0 + 6712U);
    t83 = *((char **)t81);
    memset(t101, 0, 8);
    if (*((unsigned int *)t82) != *((unsigned int *)t83))
        goto LAB342;

LAB340:    t81 = (t82 + 4);
    t84 = (t83 + 4);
    if (*((unsigned int *)t81) != *((unsigned int *)t84))
        goto LAB342;

LAB341:    *((unsigned int *)t101) = 1;

LAB342:    memset(t102, 0, 8);
    t85 = (t101 + 4);
    t79 = *((unsigned int *)t85);
    t80 = (~(t79));
    t103 = *((unsigned int *)t101);
    t104 = (t103 & t80);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB343;

LAB344:    if (*((unsigned int *)t85) != 0)
        goto LAB345;

LAB346:    t107 = *((unsigned int *)t72);
    t108 = *((unsigned int *)t102);
    t109 = (t107 & t108);
    *((unsigned int *)t106) = t109;
    t87 = (t72 + 4);
    t88 = (t102 + 4);
    t89 = (t106 + 4);
    t110 = *((unsigned int *)t87);
    t111 = *((unsigned int *)t88);
    t112 = (t110 | t111);
    *((unsigned int *)t89) = t112;
    t113 = *((unsigned int *)t89);
    t114 = (t113 != 0);
    if (t114 == 1)
        goto LAB347;

LAB348:
LAB349:    goto LAB339;

LAB343:    *((unsigned int *)t102) = 1;
    goto LAB346;

LAB345:    t86 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB346;

LAB347:    t115 = *((unsigned int *)t106);
    t116 = *((unsigned int *)t89);
    *((unsigned int *)t106) = (t115 | t116);
    t90 = (t72 + 4);
    t91 = (t102 + 4);
    t117 = *((unsigned int *)t72);
    t118 = (~(t117));
    t119 = *((unsigned int *)t90);
    t120 = (~(t119));
    t121 = *((unsigned int *)t102);
    t122 = (~(t121));
    t123 = *((unsigned int *)t91);
    t124 = (~(t123));
    t125 = (t118 & t120);
    t126 = (t122 & t124);
    t127 = (~(t125));
    t128 = (~(t126));
    t129 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t129 & t127);
    t130 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t130 & t128);
    t131 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t131 & t127);
    t132 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t132 & t128);
    goto LAB349;

LAB350:    *((unsigned int *)t133) = 1;
    goto LAB353;

LAB352:    t93 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB353;

LAB354:    t95 = (t0 + 7672U);
    t96 = *((char **)t95);
    t95 = (t0 + 6872U);
    t97 = *((char **)t95);
    memset(t142, 0, 8);
    if (*((unsigned int *)t96) != *((unsigned int *)t97))
        goto LAB359;

LAB357:    t95 = (t96 + 4);
    t98 = (t97 + 4);
    if (*((unsigned int *)t95) != *((unsigned int *)t98))
        goto LAB359;

LAB358:    *((unsigned int *)t142) = 1;

LAB359:    memset(t143, 0, 8);
    t99 = (t142 + 4);
    t144 = *((unsigned int *)t99);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB360;

LAB361:    if (*((unsigned int *)t99) != 0)
        goto LAB362;

LAB363:    t150 = *((unsigned int *)t133);
    t151 = *((unsigned int *)t143);
    t152 = (t150 & t151);
    *((unsigned int *)t149) = t152;
    t153 = (t133 + 4);
    t154 = (t143 + 4);
    t155 = (t149 + 4);
    t156 = *((unsigned int *)t153);
    t157 = *((unsigned int *)t154);
    t158 = (t156 | t157);
    *((unsigned int *)t155) = t158;
    t159 = *((unsigned int *)t155);
    t160 = (t159 != 0);
    if (t160 == 1)
        goto LAB364;

LAB365:
LAB366:    goto LAB356;

LAB360:    *((unsigned int *)t143) = 1;
    goto LAB363;

LAB362:    t100 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB363;

LAB364:    t161 = *((unsigned int *)t149);
    t162 = *((unsigned int *)t155);
    *((unsigned int *)t149) = (t161 | t162);
    t163 = (t133 + 4);
    t164 = (t143 + 4);
    t165 = *((unsigned int *)t133);
    t166 = (~(t165));
    t167 = *((unsigned int *)t163);
    t168 = (~(t167));
    t169 = *((unsigned int *)t143);
    t170 = (~(t169));
    t171 = *((unsigned int *)t164);
    t172 = (~(t171));
    t173 = (t166 & t168);
    t174 = (t170 & t172);
    t175 = (~(t173));
    t176 = (~(t174));
    t177 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t177 & t175);
    t178 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t178 & t176);
    t179 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t179 & t175);
    t180 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t180 & t176);
    goto LAB366;

LAB367:    *((unsigned int *)t181) = 1;
    goto LAB370;

LAB369:    t188 = (t181 + 4);
    *((unsigned int *)t181) = 1;
    *((unsigned int *)t188) = 1;
    goto LAB370;

LAB371:    t193 = (t0 + 7832U);
    t194 = *((char **)t193);
    t193 = (t0 + 7032U);
    t195 = *((char **)t193);
    memset(t196, 0, 8);
    if (*((unsigned int *)t194) != *((unsigned int *)t195))
        goto LAB376;

LAB374:    t193 = (t194 + 4);
    t197 = (t195 + 4);
    if (*((unsigned int *)t193) != *((unsigned int *)t197))
        goto LAB376;

LAB375:    *((unsigned int *)t196) = 1;

LAB376:    memset(t198, 0, 8);
    t199 = (t196 + 4);
    t200 = *((unsigned int *)t199);
    t201 = (~(t200));
    t202 = *((unsigned int *)t196);
    t203 = (t202 & t201);
    t204 = (t203 & 1U);
    if (t204 != 0)
        goto LAB377;

LAB378:    if (*((unsigned int *)t199) != 0)
        goto LAB379;

LAB380:    t207 = *((unsigned int *)t181);
    t208 = *((unsigned int *)t198);
    t209 = (t207 & t208);
    *((unsigned int *)t206) = t209;
    t210 = (t181 + 4);
    t211 = (t198 + 4);
    t212 = (t206 + 4);
    t213 = *((unsigned int *)t210);
    t214 = *((unsigned int *)t211);
    t215 = (t213 | t214);
    *((unsigned int *)t212) = t215;
    t216 = *((unsigned int *)t212);
    t217 = (t216 != 0);
    if (t217 == 1)
        goto LAB381;

LAB382:
LAB383:    goto LAB373;

LAB377:    *((unsigned int *)t198) = 1;
    goto LAB380;

LAB379:    t205 = (t198 + 4);
    *((unsigned int *)t198) = 1;
    *((unsigned int *)t205) = 1;
    goto LAB380;

LAB381:    t218 = *((unsigned int *)t206);
    t219 = *((unsigned int *)t212);
    *((unsigned int *)t206) = (t218 | t219);
    t220 = (t181 + 4);
    t221 = (t198 + 4);
    t222 = *((unsigned int *)t181);
    t223 = (~(t222));
    t224 = *((unsigned int *)t220);
    t225 = (~(t224));
    t226 = *((unsigned int *)t198);
    t227 = (~(t226));
    t228 = *((unsigned int *)t221);
    t229 = (~(t228));
    t230 = (t223 & t225);
    t231 = (t227 & t229);
    t232 = (~(t230));
    t233 = (~(t231));
    t234 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t234 & t232);
    t235 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t235 & t233);
    t236 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t236 & t232);
    t237 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t237 & t233);
    goto LAB383;

LAB384:    xsi_set_current_line(299, ng28);

LAB387:    xsi_set_current_line(301, ng28);
    t244 = (t0 + 9672);
    t245 = (t244 + 56U);
    t246 = *((char **)t245);
    t247 = ((char*)((ng34)));
    memset(t248, 0, 8);
    xsi_vlog_signed_add(t248, 32, t246, 32, t247, 32);
    t249 = (t0 + 9672);
    xsi_vlogvar_assign_value(t249, t248, 0, 0, 32);
    xsi_set_current_line(303, ng28);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB388;

LAB389:
LAB390:    goto LAB386;

LAB388:    xsi_set_current_line(303, ng28);

LAB391:    xsi_set_current_line(304, ng28);
    xsi_vlogfile_write(0, 0, 1, ng43, 1, t0);
    xsi_set_current_line(305, ng28);
    t2 = (t0 + 6392U);
    t3 = *((char **)t2);
    t2 = (t0 + 6552U);
    t6 = *((char **)t2);
    t2 = (t0 + 6712U);
    t12 = *((char **)t2);
    t2 = (t0 + 6872U);
    t13 = *((char **)t2);
    t2 = (t0 + 7032U);
    t20 = *((char **)t2);
    t2 = ((char*)((ng26)));
    t21 = (t0 + 21280);
    t22 = (t0 + 2096);
    t24 = xsi_create_subprogram_invocation(t21, 0, t0, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t24);
    t27 = (t0 + 14472);
    xsi_vlogvar_assign_value(t27, t3, 0, 0, 7);
    t29 = (t0 + 14632);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 7);
    t30 = (t0 + 14792);
    xsi_vlogvar_assign_value(t30, t12, 0, 0, 7);
    t31 = (t0 + 14952);
    xsi_vlogvar_assign_value(t31, t13, 0, 0, 7);
    t32 = (t0 + 15112);
    xsi_vlogvar_assign_value(t32, t20, 0, 0, 1);
    t33 = (t0 + 15272);
    xsi_vlogvar_assign_value(t33, t2, 0, 0, 1);

LAB394:    t34 = (t0 + 21376);
    t35 = *((char **)t34);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t38 = (t37 + 272U);
    t39 = *((char **)t38);
    t81 = (t39 + 0U);
    t82 = *((char **)t81);
    t28 = ((int  (*)(char *, char *))t82)(t0, t35);

LAB396:    if (t28 != 0)
        goto LAB397;

LAB392:    t35 = (t0 + 2096);
    xsi_vlog_subprogram_popinvocation(t35);

LAB393:    t83 = (t0 + 21376);
    t84 = *((char **)t83);
    t83 = (t0 + 2096);
    t85 = (t0 + 21280);
    t86 = 0;
    xsi_delete_subprogram_invocation(t83, t84, t0, t85, t86);
    xsi_set_current_line(306, ng28);
    xsi_vlogfile_write(0, 0, 1, ng44, 1, t0);
    goto LAB390;

LAB395:;
LAB397:    t34 = (t0 + 21472U);
    *((char **)t34) = &&LAB394;
    goto LAB1;

LAB399:    xsi_set_current_line(311, ng28);
    xsi_vlogfile_write(0, 0, 1, ng45, 1, t0);
    goto LAB401;

LAB402:    *((unsigned int *)t4) = 1;
    goto LAB405;

LAB404:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB405;

LAB406:    t13 = (t0 + 9832);
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 9672);
    t24 = (t22 + 56U);
    t27 = *((char **)t24);
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t21, 32, t27, 32);
    t29 = (t0 + 1152);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_leq(t26, 32, t23, 32, t30, 32);
    memset(t40, 0, 8);
    t29 = (t26 + 4);
    t18 = *((unsigned int *)t29);
    t41 = (~(t18));
    t42 = *((unsigned int *)t26);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB409;

LAB410:    if (*((unsigned int *)t29) != 0)
        goto LAB411;

LAB412:    t46 = *((unsigned int *)t4);
    t47 = *((unsigned int *)t40);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t32 = (t4 + 4);
    t33 = (t40 + 4);
    t34 = (t45 + 4);
    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t33);
    t51 = (t49 | t50);
    *((unsigned int *)t34) = t51;
    t52 = *((unsigned int *)t34);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB413;

LAB414:
LAB415:    goto LAB408;

LAB409:    *((unsigned int *)t40) = 1;
    goto LAB412;

LAB411:    t31 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB412;

LAB413:    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t45) = (t54 | t55);
    t35 = (t4 + 4);
    t36 = (t40 + 4);
    t56 = *((unsigned int *)t35);
    t57 = (~(t56));
    t58 = *((unsigned int *)t4);
    t28 = (t58 & t57);
    t59 = *((unsigned int *)t36);
    t60 = (~(t59));
    t61 = *((unsigned int *)t40);
    t62 = (t61 & t60);
    t63 = (~(t28));
    t64 = (~(t62));
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t63);
    t66 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t66 & t64);
    goto LAB415;

LAB416:    xsi_set_current_line(313, ng28);

LAB419:    xsi_set_current_line(314, ng28);
    xsi_vlogfile_write(0, 0, 1, ng46, 1, t0);
    xsi_set_current_line(315, ng28);
    t2 = (t0 + 8232);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 8392);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t21 = (t0 + 8552);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 8712);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 9032);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 9352);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 21280);
    t38 = (t0 + 1664);
    t39 = xsi_create_subprogram_invocation(t37, 0, t0, t38, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t38, t39);
    t81 = (t0 + 12552);
    xsi_vlogvar_assign_value(t81, t6, 0, 0, 8);
    t82 = (t0 + 12712);
    xsi_vlogvar_assign_value(t82, t20, 0, 0, 8);
    t83 = (t0 + 12872);
    xsi_vlogvar_assign_value(t83, t24, 0, 0, 8);
    t84 = (t0 + 13032);
    xsi_vlogvar_assign_value(t84, t30, 0, 0, 8);
    t85 = (t0 + 13192);
    xsi_vlogvar_assign_value(t85, t33, 0, 0, 16);
    t86 = (t0 + 13352);
    xsi_vlogvar_assign_value(t86, t36, 0, 0, 1);

LAB422:    t87 = (t0 + 21376);
    t88 = *((char **)t87);
    t89 = (t88 + 80U);
    t90 = *((char **)t89);
    t91 = (t90 + 272U);
    t92 = *((char **)t91);
    t93 = (t92 + 0U);
    t94 = *((char **)t93);
    t28 = ((int  (*)(char *, char *))t94)(t0, t88);

LAB424:    if (t28 != 0)
        goto LAB425;

LAB420:    t88 = (t0 + 1664);
    xsi_vlog_subprogram_popinvocation(t88);

LAB421:    t95 = (t0 + 21376);
    t96 = *((char **)t95);
    t95 = (t0 + 1664);
    t97 = (t0 + 21280);
    t98 = 0;
    xsi_delete_subprogram_invocation(t95, t96, t0, t97, t98);
    xsi_set_current_line(316, ng28);
    xsi_vlogfile_write(0, 0, 1, ng43, 1, t0);
    xsi_set_current_line(317, ng28);
    t2 = (t0 + 7192U);
    t3 = *((char **)t2);
    t2 = (t0 + 7352U);
    t6 = *((char **)t2);
    t2 = (t0 + 7512U);
    t12 = *((char **)t2);
    t2 = (t0 + 7672U);
    t13 = *((char **)t2);
    t2 = (t0 + 7832U);
    t20 = *((char **)t2);
    t2 = ((char*)((ng64)));
    t21 = (t0 + 21280);
    t22 = (t0 + 2096);
    t24 = xsi_create_subprogram_invocation(t21, 0, t0, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t24);
    t27 = (t0 + 14472);
    xsi_vlogvar_assign_value(t27, t3, 0, 0, 7);
    t29 = (t0 + 14632);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 7);
    t30 = (t0 + 14792);
    xsi_vlogvar_assign_value(t30, t12, 0, 0, 7);
    t31 = (t0 + 14952);
    xsi_vlogvar_assign_value(t31, t13, 0, 0, 7);
    t32 = (t0 + 15112);
    xsi_vlogvar_assign_value(t32, t20, 0, 0, 1);
    t33 = (t0 + 15272);
    xsi_vlogvar_assign_value(t33, t2, 0, 0, 1);

LAB428:    t34 = (t0 + 21376);
    t35 = *((char **)t34);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t38 = (t37 + 272U);
    t39 = *((char **)t38);
    t81 = (t39 + 0U);
    t82 = *((char **)t81);
    t28 = ((int  (*)(char *, char *))t82)(t0, t35);

LAB430:    if (t28 != 0)
        goto LAB431;

LAB426:    t35 = (t0 + 2096);
    xsi_vlog_subprogram_popinvocation(t35);

LAB427:    t83 = (t0 + 21376);
    t84 = *((char **)t83);
    t83 = (t0 + 2096);
    t85 = (t0 + 21280);
    t86 = 0;
    xsi_delete_subprogram_invocation(t83, t84, t0, t85, t86);
    xsi_set_current_line(318, ng28);
    xsi_vlogfile_write(0, 0, 1, ng47, 1, t0);
    xsi_set_current_line(319, ng28);
    t2 = (t0 + 6392U);
    t3 = *((char **)t2);
    t2 = (t0 + 6552U);
    t6 = *((char **)t2);
    t2 = (t0 + 6712U);
    t12 = *((char **)t2);
    t2 = (t0 + 6872U);
    t13 = *((char **)t2);
    t2 = (t0 + 7032U);
    t20 = *((char **)t2);
    t2 = ((char*)((ng64)));
    t21 = (t0 + 21280);
    t22 = (t0 + 2096);
    t24 = xsi_create_subprogram_invocation(t21, 0, t0, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t24);
    t27 = (t0 + 14472);
    xsi_vlogvar_assign_value(t27, t3, 0, 0, 7);
    t29 = (t0 + 14632);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 7);
    t30 = (t0 + 14792);
    xsi_vlogvar_assign_value(t30, t12, 0, 0, 7);
    t31 = (t0 + 14952);
    xsi_vlogvar_assign_value(t31, t13, 0, 0, 7);
    t32 = (t0 + 15112);
    xsi_vlogvar_assign_value(t32, t20, 0, 0, 1);
    t33 = (t0 + 15272);
    xsi_vlogvar_assign_value(t33, t2, 0, 0, 1);

LAB434:    t34 = (t0 + 21376);
    t35 = *((char **)t34);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t38 = (t37 + 272U);
    t39 = *((char **)t38);
    t81 = (t39 + 0U);
    t82 = *((char **)t81);
    t28 = ((int  (*)(char *, char *))t82)(t0, t35);

LAB436:    if (t28 != 0)
        goto LAB437;

LAB432:    t35 = (t0 + 2096);
    xsi_vlog_subprogram_popinvocation(t35);

LAB433:    t83 = (t0 + 21376);
    t84 = *((char **)t83);
    t83 = (t0 + 2096);
    t85 = (t0 + 21280);
    t86 = 0;
    xsi_delete_subprogram_invocation(t83, t84, t0, t85, t86);
    xsi_set_current_line(320, ng28);
    xsi_vlogfile_write(0, 0, 1, ng45, 1, t0);
    goto LAB418;

LAB423:;
LAB425:    t87 = (t0 + 21472U);
    *((char **)t87) = &&LAB422;
    goto LAB1;

LAB429:;
LAB431:    t34 = (t0 + 21472U);
    *((char **)t34) = &&LAB428;
    goto LAB1;

LAB435:;
LAB437:    t34 = (t0 + 21472U);
    *((char **)t34) = &&LAB434;
    goto LAB1;

LAB438:    *((unsigned int *)t4) = 1;
    goto LAB441;

LAB442:    *((unsigned int *)t23) = 1;
    goto LAB445;

LAB444:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB445;

LAB446:    t21 = (t0 + 9832);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 9672);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t24, 32, t30, 32);
    t31 = (t0 + 1152);
    t32 = *((char **)t31);
    memset(t40, 0, 8);
    xsi_vlog_signed_equal(t40, 32, t26, 32, t32, 32);
    memset(t45, 0, 8);
    t31 = (t40 + 4);
    t44 = *((unsigned int *)t31);
    t46 = (~(t44));
    t47 = *((unsigned int *)t40);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB449;

LAB450:    if (*((unsigned int *)t31) != 0)
        goto LAB451;

LAB452:    t50 = *((unsigned int *)t23);
    t51 = *((unsigned int *)t45);
    t52 = (t50 & t51);
    *((unsigned int *)t72) = t52;
    t34 = (t23 + 4);
    t35 = (t45 + 4);
    t36 = (t72 + 4);
    t53 = *((unsigned int *)t34);
    t54 = *((unsigned int *)t35);
    t55 = (t53 | t54);
    *((unsigned int *)t36) = t55;
    t56 = *((unsigned int *)t36);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB453;

LAB454:
LAB455:    goto LAB448;

LAB449:    *((unsigned int *)t45) = 1;
    goto LAB452;

LAB451:    t33 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB452;

LAB453:    t58 = *((unsigned int *)t72);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t72) = (t58 | t59);
    t37 = (t23 + 4);
    t38 = (t45 + 4);
    t60 = *((unsigned int *)t23);
    t61 = (~(t60));
    t63 = *((unsigned int *)t37);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (~(t65));
    t67 = *((unsigned int *)t38);
    t68 = (~(t67));
    t28 = (t61 & t64);
    t62 = (t66 & t68);
    t69 = (~(t28));
    t70 = (~(t62));
    t71 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t71 & t69);
    t73 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t73 & t70);
    t74 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t74 & t69);
    t75 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t75 & t70);
    goto LAB455;

LAB456:    xsi_set_current_line(322, ng28);

LAB459:    xsi_set_current_line(323, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    xsi_set_current_line(324, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    xsi_set_current_line(325, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    goto LAB458;

LAB460:    xsi_set_current_line(328, ng28);

LAB463:    xsi_set_current_line(329, ng28);
    t6 = (t0 + 11272);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 9512);
    xsi_vlogvar_assign_value(t20, t13, 0, 0, 32);
    goto LAB462;

LAB465:    *((unsigned int *)t4) = 1;
    goto LAB468;

LAB469:    xsi_set_current_line(339, ng28);

LAB472:    xsi_set_current_line(340, ng28);
    xsi_vlogfile_write(0, 0, 1, ng51, 1, t0);
    xsi_set_current_line(341, ng28);
    xsi_vlog_finish(1);
    goto LAB471;

LAB473:    xsi_set_current_line(344, ng28);

LAB476:    xsi_set_current_line(345, ng28);
    xsi_vlogfile_write(0, 0, 1, ng53, 1, t0);
    xsi_set_current_line(346, ng28);
    xsi_vlog_finish(1);
    goto LAB475;

LAB478:    xsi_set_current_line(349, ng28);

LAB480:    xsi_set_current_line(350, ng28);
    t22 = (t0 + 11112);
    t24 = (t22 + 56U);
    t27 = *((char **)t24);
    t29 = (t0 + 12072);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_bit_copy(t23, 0, t31, 0, 17);
    *((int *)t26) = xsi_vlogfile_fscanf(*((unsigned int *)t27), ng61, 2, t0, (char)118, t23, 17);
    t32 = (t26 + 4);
    *((int *)t32) = 0;
    t33 = (t0 + 12072);
    xsi_vlogvar_assign_value(t33, t23, 0, 0, 17);
    t34 = ((char*)((ng34)));
    memset(t40, 0, 8);
    xsi_vlog_signed_not_equal(t40, 32, t26, 32, t34, 32);
    t35 = (t40 + 4);
    t14 = *((unsigned int *)t35);
    t15 = (~(t14));
    t16 = *((unsigned int *)t40);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB481;

LAB482:
LAB483:    xsi_set_current_line(354, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 12232);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 17);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng61, 2, t0, (char)118, t4, 17);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 12232);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 17);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB485;

LAB486:
LAB487:    xsi_set_current_line(358, ng28);
    t2 = (t0 + 11112);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 12392);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    xsi_vlog_bit_copy(t4, 0, t20, 0, 1);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t6), ng58, 2, t0, (char)118, t4, 1);
    t21 = (t23 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 12392);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 1);
    t24 = ((char*)((ng34)));
    memset(t26, 0, 8);
    xsi_vlog_signed_not_equal(t26, 32, t23, 32, t24, 32);
    t27 = (t26 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB489;

LAB490:
LAB491:    xsi_set_current_line(364, ng28);
    t2 = (t0 + 9832);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng34)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 9832);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    xsi_set_current_line(366, ng28);
    t2 = (t0 + 12232);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9032);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 16);
    xsi_set_current_line(367, ng28);
    t2 = (t0 + 12072);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9192);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 16);
    xsi_set_current_line(368, ng28);
    t2 = (t0 + 12392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9352);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);
    xsi_set_current_line(369, ng28);
    t2 = (t0 + 21280);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB493;
    goto LAB1;

LAB481:    xsi_set_current_line(350, ng28);

LAB484:    xsi_set_current_line(351, ng28);
    t36 = (t0 + 9512);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlogfile_write(0, 0, 1, ng66, 2, t0, (char)119, t38, 32);
    xsi_set_current_line(352, ng28);
    xsi_vlog_finish(1);
    goto LAB483;

LAB485:    xsi_set_current_line(354, ng28);

LAB488:    xsi_set_current_line(355, ng28);
    t29 = (t0 + 9512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(0, 0, 1, ng62, 2, t0, (char)119, t31, 32);
    xsi_set_current_line(356, ng28);
    xsi_vlog_finish(1);
    goto LAB487;

LAB489:    xsi_set_current_line(358, ng28);

LAB492:    xsi_set_current_line(359, ng28);
    t29 = (t0 + 9512);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(0, 0, 1, ng63, 2, t0, (char)119, t31, 32);
    xsi_set_current_line(360, ng28);
    xsi_vlog_finish(1);
    goto LAB491;

LAB493:    xsi_set_current_line(371, ng28);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB494;

LAB495:
LAB496:    xsi_set_current_line(374, ng28);
    t2 = (t0 + 7192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6392U);
    t6 = *((char **)t2);
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t6))
        goto LAB505;

LAB503:    t2 = (t3 + 4);
    t12 = (t6 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t12))
        goto LAB505;

LAB504:    *((unsigned int *)t4) = 1;

LAB505:    memset(t23, 0, 8);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB506;

LAB507:    if (*((unsigned int *)t13) != 0)
        goto LAB508;

LAB509:    t21 = (t23 + 4);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB510;

LAB511:    memcpy(t45, t23, 8);

LAB512:    memset(t72, 0, 8);
    t37 = (t45 + 4);
    t70 = *((unsigned int *)t37);
    t71 = (~(t70));
    t73 = *((unsigned int *)t45);
    t74 = (t73 & t71);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB523;

LAB524:    if (*((unsigned int *)t37) != 0)
        goto LAB525;

LAB526:    t39 = (t72 + 4);
    t76 = *((unsigned int *)t72);
    t77 = *((unsigned int *)t39);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB527;

LAB528:    memcpy(t106, t72, 8);

LAB529:    memset(t133, 0, 8);
    t92 = (t106 + 4);
    t134 = *((unsigned int *)t92);
    t135 = (~(t134));
    t136 = *((unsigned int *)t106);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB540;

LAB541:    if (*((unsigned int *)t92) != 0)
        goto LAB542;

LAB543:    t94 = (t133 + 4);
    t139 = *((unsigned int *)t133);
    t140 = *((unsigned int *)t94);
    t141 = (t139 || t140);
    if (t141 > 0)
        goto LAB544;

LAB545:    memcpy(t149, t133, 8);

LAB546:    memset(t181, 0, 8);
    t182 = (t149 + 4);
    t183 = *((unsigned int *)t182);
    t184 = (~(t183));
    t185 = *((unsigned int *)t149);
    t186 = (t185 & t184);
    t187 = (t186 & 1U);
    if (t187 != 0)
        goto LAB557;

LAB558:    if (*((unsigned int *)t182) != 0)
        goto LAB559;

LAB560:    t189 = (t181 + 4);
    t190 = *((unsigned int *)t181);
    t191 = *((unsigned int *)t189);
    t192 = (t190 || t191);
    if (t192 > 0)
        goto LAB561;

LAB562:    memcpy(t206, t181, 8);

LAB563:    t238 = (t206 + 4);
    t239 = *((unsigned int *)t238);
    t240 = (~(t239));
    t241 = *((unsigned int *)t206);
    t242 = (t241 & t240);
    t243 = (t242 != 0);
    if (t243 > 0)
        goto LAB574;

LAB575:    xsi_set_current_line(385, ng28);

LAB588:    xsi_set_current_line(386, ng28);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB589;

LAB590:
LAB591:    xsi_set_current_line(389, ng28);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB592;

LAB593:    if (*((unsigned int *)t2) != 0)
        goto LAB594;

LAB595:    t12 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (!(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB596;

LAB597:    memcpy(t45, t4, 8);

LAB598:    t37 = (t45 + 4);
    t67 = *((unsigned int *)t37);
    t68 = (~(t67));
    t69 = *((unsigned int *)t45);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB606;

LAB607:
LAB608:    xsi_set_current_line(398, ng28);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB631;

LAB629:    if (*((unsigned int *)t2) == 0)
        goto LAB628;

LAB630:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;

LAB631:    memset(t23, 0, 8);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB632;

LAB633:    if (*((unsigned int *)t12) != 0)
        goto LAB634;

LAB635:    t20 = (t23 + 4);
    t41 = *((unsigned int *)t23);
    t42 = *((unsigned int *)t20);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB636;

LAB637:    memcpy(t72, t23, 8);

LAB638:    t39 = (t72 + 4);
    t76 = *((unsigned int *)t39);
    t77 = (~(t76));
    t78 = *((unsigned int *)t72);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB646;

LAB647:
LAB648:    xsi_set_current_line(404, ng28);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB650;

LAB651:
LAB652:
LAB576:    xsi_set_current_line(349, ng28);
    t2 = (t0 + 9512);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng34)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 9512);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB477;

LAB494:    xsi_set_current_line(372, ng28);
    t6 = (t0 + 9192);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 9032);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = (t0 + 9352);
    t27 = (t24 + 56U);
    t29 = *((char **)t27);
    t30 = (t0 + 21280);
    t31 = (t0 + 4256);
    t32 = xsi_create_subprogram_invocation(t30, 0, t0, t31, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t31, t32);
    t33 = (t0 + 17672);
    xsi_vlogvar_assign_value(t33, t13, 0, 0, 16);
    t34 = (t0 + 17832);
    xsi_vlogvar_assign_value(t34, t22, 0, 0, 16);
    t35 = (t0 + 17992);
    xsi_vlogvar_assign_value(t35, t29, 0, 0, 1);

LAB499:    t36 = (t0 + 21376);
    t37 = *((char **)t36);
    t38 = (t37 + 80U);
    t39 = *((char **)t38);
    t81 = (t39 + 272U);
    t82 = *((char **)t81);
    t83 = (t82 + 0U);
    t84 = *((char **)t83);
    t28 = ((int  (*)(char *, char *))t84)(t0, t37);

LAB501:    if (t28 != 0)
        goto LAB502;

LAB497:    t37 = (t0 + 4256);
    xsi_vlog_subprogram_popinvocation(t37);

LAB498:    t85 = (t0 + 21376);
    t86 = *((char **)t85);
    t85 = (t0 + 4256);
    t87 = (t0 + 21280);
    t88 = 0;
    xsi_delete_subprogram_invocation(t85, t86, t0, t87, t88);
    goto LAB496;

LAB500:;
LAB502:    t36 = (t0 + 21472U);
    *((char **)t36) = &&LAB499;
    goto LAB1;

LAB506:    *((unsigned int *)t23) = 1;
    goto LAB509;

LAB508:    t20 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB509;

LAB510:    t22 = (t0 + 7352U);
    t24 = *((char **)t22);
    t22 = (t0 + 6552U);
    t27 = *((char **)t22);
    memset(t26, 0, 8);
    if (*((unsigned int *)t24) != *((unsigned int *)t27))
        goto LAB515;

LAB513:    t22 = (t24 + 4);
    t29 = (t27 + 4);
    if (*((unsigned int *)t22) != *((unsigned int *)t29))
        goto LAB515;

LAB514:    *((unsigned int *)t26) = 1;

LAB515:    memset(t40, 0, 8);
    t30 = (t26 + 4);
    t17 = *((unsigned int *)t30);
    t18 = (~(t17));
    t41 = *((unsigned int *)t26);
    t42 = (t41 & t18);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB516;

LAB517:    if (*((unsigned int *)t30) != 0)
        goto LAB518;

LAB519:    t44 = *((unsigned int *)t23);
    t46 = *((unsigned int *)t40);
    t47 = (t44 & t46);
    *((unsigned int *)t45) = t47;
    t32 = (t23 + 4);
    t33 = (t40 + 4);
    t34 = (t45 + 4);
    t48 = *((unsigned int *)t32);
    t49 = *((unsigned int *)t33);
    t50 = (t48 | t49);
    *((unsigned int *)t34) = t50;
    t51 = *((unsigned int *)t34);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB520;

LAB521:
LAB522:    goto LAB512;

LAB516:    *((unsigned int *)t40) = 1;
    goto LAB519;

LAB518:    t31 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB519;

LAB520:    t53 = *((unsigned int *)t45);
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t45) = (t53 | t54);
    t35 = (t23 + 4);
    t36 = (t40 + 4);
    t55 = *((unsigned int *)t23);
    t56 = (~(t55));
    t57 = *((unsigned int *)t35);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t36);
    t63 = (~(t61));
    t28 = (t56 & t58);
    t62 = (t60 & t63);
    t64 = (~(t28));
    t65 = (~(t62));
    t66 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t66 & t64);
    t67 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t64);
    t69 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t69 & t65);
    goto LAB522;

LAB523:    *((unsigned int *)t72) = 1;
    goto LAB526;

LAB525:    t38 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB526;

LAB527:    t81 = (t0 + 7512U);
    t82 = *((char **)t81);
    t81 = (t0 + 6712U);
    t83 = *((char **)t81);
    memset(t101, 0, 8);
    if (*((unsigned int *)t82) != *((unsigned int *)t83))
        goto LAB532;

LAB530:    t81 = (t82 + 4);
    t84 = (t83 + 4);
    if (*((unsigned int *)t81) != *((unsigned int *)t84))
        goto LAB532;

LAB531:    *((unsigned int *)t101) = 1;

LAB532:    memset(t102, 0, 8);
    t85 = (t101 + 4);
    t79 = *((unsigned int *)t85);
    t80 = (~(t79));
    t103 = *((unsigned int *)t101);
    t104 = (t103 & t80);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB533;

LAB534:    if (*((unsigned int *)t85) != 0)
        goto LAB535;

LAB536:    t107 = *((unsigned int *)t72);
    t108 = *((unsigned int *)t102);
    t109 = (t107 & t108);
    *((unsigned int *)t106) = t109;
    t87 = (t72 + 4);
    t88 = (t102 + 4);
    t89 = (t106 + 4);
    t110 = *((unsigned int *)t87);
    t111 = *((unsigned int *)t88);
    t112 = (t110 | t111);
    *((unsigned int *)t89) = t112;
    t113 = *((unsigned int *)t89);
    t114 = (t113 != 0);
    if (t114 == 1)
        goto LAB537;

LAB538:
LAB539:    goto LAB529;

LAB533:    *((unsigned int *)t102) = 1;
    goto LAB536;

LAB535:    t86 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB536;

LAB537:    t115 = *((unsigned int *)t106);
    t116 = *((unsigned int *)t89);
    *((unsigned int *)t106) = (t115 | t116);
    t90 = (t72 + 4);
    t91 = (t102 + 4);
    t117 = *((unsigned int *)t72);
    t118 = (~(t117));
    t119 = *((unsigned int *)t90);
    t120 = (~(t119));
    t121 = *((unsigned int *)t102);
    t122 = (~(t121));
    t123 = *((unsigned int *)t91);
    t124 = (~(t123));
    t125 = (t118 & t120);
    t126 = (t122 & t124);
    t127 = (~(t125));
    t128 = (~(t126));
    t129 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t129 & t127);
    t130 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t130 & t128);
    t131 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t131 & t127);
    t132 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t132 & t128);
    goto LAB539;

LAB540:    *((unsigned int *)t133) = 1;
    goto LAB543;

LAB542:    t93 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB543;

LAB544:    t95 = (t0 + 7672U);
    t96 = *((char **)t95);
    t95 = (t0 + 6872U);
    t97 = *((char **)t95);
    memset(t142, 0, 8);
    if (*((unsigned int *)t96) != *((unsigned int *)t97))
        goto LAB549;

LAB547:    t95 = (t96 + 4);
    t98 = (t97 + 4);
    if (*((unsigned int *)t95) != *((unsigned int *)t98))
        goto LAB549;

LAB548:    *((unsigned int *)t142) = 1;

LAB549:    memset(t143, 0, 8);
    t99 = (t142 + 4);
    t144 = *((unsigned int *)t99);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB550;

LAB551:    if (*((unsigned int *)t99) != 0)
        goto LAB552;

LAB553:    t150 = *((unsigned int *)t133);
    t151 = *((unsigned int *)t143);
    t152 = (t150 & t151);
    *((unsigned int *)t149) = t152;
    t153 = (t133 + 4);
    t154 = (t143 + 4);
    t155 = (t149 + 4);
    t156 = *((unsigned int *)t153);
    t157 = *((unsigned int *)t154);
    t158 = (t156 | t157);
    *((unsigned int *)t155) = t158;
    t159 = *((unsigned int *)t155);
    t160 = (t159 != 0);
    if (t160 == 1)
        goto LAB554;

LAB555:
LAB556:    goto LAB546;

LAB550:    *((unsigned int *)t143) = 1;
    goto LAB553;

LAB552:    t100 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB553;

LAB554:    t161 = *((unsigned int *)t149);
    t162 = *((unsigned int *)t155);
    *((unsigned int *)t149) = (t161 | t162);
    t163 = (t133 + 4);
    t164 = (t143 + 4);
    t165 = *((unsigned int *)t133);
    t166 = (~(t165));
    t167 = *((unsigned int *)t163);
    t168 = (~(t167));
    t169 = *((unsigned int *)t143);
    t170 = (~(t169));
    t171 = *((unsigned int *)t164);
    t172 = (~(t171));
    t173 = (t166 & t168);
    t174 = (t170 & t172);
    t175 = (~(t173));
    t176 = (~(t174));
    t177 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t177 & t175);
    t178 = *((unsigned int *)t155);
    *((unsigned int *)t155) = (t178 & t176);
    t179 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t179 & t175);
    t180 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t180 & t176);
    goto LAB556;

LAB557:    *((unsigned int *)t181) = 1;
    goto LAB560;

LAB559:    t188 = (t181 + 4);
    *((unsigned int *)t181) = 1;
    *((unsigned int *)t188) = 1;
    goto LAB560;

LAB561:    t193 = (t0 + 7832U);
    t194 = *((char **)t193);
    t193 = (t0 + 7032U);
    t195 = *((char **)t193);
    memset(t196, 0, 8);
    if (*((unsigned int *)t194) != *((unsigned int *)t195))
        goto LAB566;

LAB564:    t193 = (t194 + 4);
    t197 = (t195 + 4);
    if (*((unsigned int *)t193) != *((unsigned int *)t197))
        goto LAB566;

LAB565:    *((unsigned int *)t196) = 1;

LAB566:    memset(t198, 0, 8);
    t199 = (t196 + 4);
    t200 = *((unsigned int *)t199);
    t201 = (~(t200));
    t202 = *((unsigned int *)t196);
    t203 = (t202 & t201);
    t204 = (t203 & 1U);
    if (t204 != 0)
        goto LAB567;

LAB568:    if (*((unsigned int *)t199) != 0)
        goto LAB569;

LAB570:    t207 = *((unsigned int *)t181);
    t208 = *((unsigned int *)t198);
    t209 = (t207 & t208);
    *((unsigned int *)t206) = t209;
    t210 = (t181 + 4);
    t211 = (t198 + 4);
    t212 = (t206 + 4);
    t213 = *((unsigned int *)t210);
    t214 = *((unsigned int *)t211);
    t215 = (t213 | t214);
    *((unsigned int *)t212) = t215;
    t216 = *((unsigned int *)t212);
    t217 = (t216 != 0);
    if (t217 == 1)
        goto LAB571;

LAB572:
LAB573:    goto LAB563;

LAB567:    *((unsigned int *)t198) = 1;
    goto LAB570;

LAB569:    t205 = (t198 + 4);
    *((unsigned int *)t198) = 1;
    *((unsigned int *)t205) = 1;
    goto LAB570;

LAB571:    t218 = *((unsigned int *)t206);
    t219 = *((unsigned int *)t212);
    *((unsigned int *)t206) = (t218 | t219);
    t220 = (t181 + 4);
    t221 = (t198 + 4);
    t222 = *((unsigned int *)t181);
    t223 = (~(t222));
    t224 = *((unsigned int *)t220);
    t225 = (~(t224));
    t226 = *((unsigned int *)t198);
    t227 = (~(t226));
    t228 = *((unsigned int *)t221);
    t229 = (~(t228));
    t230 = (t223 & t225);
    t231 = (t227 & t229);
    t232 = (~(t230));
    t233 = (~(t231));
    t234 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t234 & t232);
    t235 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t235 & t233);
    t236 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t236 & t232);
    t237 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t237 & t233);
    goto LAB573;

LAB574:    xsi_set_current_line(375, ng28);

LAB577:    xsi_set_current_line(377, ng28);
    t244 = (t0 + 9672);
    t245 = (t244 + 56U);
    t246 = *((char **)t245);
    t247 = ((char*)((ng34)));
    memset(t248, 0, 8);
    xsi_vlog_signed_add(t248, 32, t246, 32, t247, 32);
    t249 = (t0 + 9672);
    xsi_vlogvar_assign_value(t249, t248, 0, 0, 32);
    xsi_set_current_line(379, ng28);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB578;

LAB579:
LAB580:    goto LAB576;

LAB578:    xsi_set_current_line(379, ng28);

LAB581:    xsi_set_current_line(380, ng28);
    xsi_vlogfile_write(0, 0, 1, ng43, 1, t0);
    xsi_set_current_line(381, ng28);
    t2 = (t0 + 6392U);
    t3 = *((char **)t2);
    t2 = (t0 + 6552U);
    t6 = *((char **)t2);
    t2 = (t0 + 6712U);
    t12 = *((char **)t2);
    t2 = (t0 + 6872U);
    t13 = *((char **)t2);
    t2 = (t0 + 7032U);
    t20 = *((char **)t2);
    t2 = ((char*)((ng26)));
    t21 = (t0 + 21280);
    t22 = (t0 + 4688);
    t24 = xsi_create_subprogram_invocation(t21, 0, t0, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t24);
    t27 = (t0 + 18632);
    xsi_vlogvar_assign_value(t27, t3, 0, 0, 7);
    t29 = (t0 + 18792);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 7);
    t30 = (t0 + 18952);
    xsi_vlogvar_assign_value(t30, t12, 0, 0, 7);
    t31 = (t0 + 19112);
    xsi_vlogvar_assign_value(t31, t13, 0, 0, 7);
    t32 = (t0 + 19272);
    xsi_vlogvar_assign_value(t32, t20, 0, 0, 1);
    t33 = (t0 + 19432);
    xsi_vlogvar_assign_value(t33, t2, 0, 0, 1);

LAB584:    t34 = (t0 + 21376);
    t35 = *((char **)t34);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t38 = (t37 + 272U);
    t39 = *((char **)t38);
    t81 = (t39 + 0U);
    t82 = *((char **)t81);
    t28 = ((int  (*)(char *, char *))t82)(t0, t35);

LAB586:    if (t28 != 0)
        goto LAB587;

LAB582:    t35 = (t0 + 4688);
    xsi_vlog_subprogram_popinvocation(t35);

LAB583:    t83 = (t0 + 21376);
    t84 = *((char **)t83);
    t83 = (t0 + 4688);
    t85 = (t0 + 21280);
    t86 = 0;
    xsi_delete_subprogram_invocation(t83, t84, t0, t85, t86);
    xsi_set_current_line(382, ng28);
    xsi_vlogfile_write(0, 0, 1, ng44, 1, t0);
    goto LAB580;

LAB585:;
LAB587:    t34 = (t0 + 21472U);
    *((char **)t34) = &&LAB584;
    goto LAB1;

LAB589:    xsi_set_current_line(387, ng28);
    xsi_vlogfile_write(0, 0, 1, ng45, 1, t0);
    goto LAB591;

LAB592:    *((unsigned int *)t4) = 1;
    goto LAB595;

LAB594:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB595;

LAB596:    t13 = (t0 + 9832);
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 9672);
    t24 = (t22 + 56U);
    t27 = *((char **)t24);
    memset(t23, 0, 8);
    xsi_vlog_signed_minus(t23, 32, t21, 32, t27, 32);
    t29 = (t0 + 1152);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_leq(t26, 32, t23, 32, t30, 32);
    memset(t40, 0, 8);
    t29 = (t26 + 4);
    t18 = *((unsigned int *)t29);
    t41 = (~(t18));
    t42 = *((unsigned int *)t26);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB599;

LAB600:    if (*((unsigned int *)t29) != 0)
        goto LAB601;

LAB602:    t46 = *((unsigned int *)t4);
    t47 = *((unsigned int *)t40);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t32 = (t4 + 4);
    t33 = (t40 + 4);
    t34 = (t45 + 4);
    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t33);
    t51 = (t49 | t50);
    *((unsigned int *)t34) = t51;
    t52 = *((unsigned int *)t34);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB603;

LAB604:
LAB605:    goto LAB598;

LAB599:    *((unsigned int *)t40) = 1;
    goto LAB602;

LAB601:    t31 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB602;

LAB603:    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t45) = (t54 | t55);
    t35 = (t4 + 4);
    t36 = (t40 + 4);
    t56 = *((unsigned int *)t35);
    t57 = (~(t56));
    t58 = *((unsigned int *)t4);
    t28 = (t58 & t57);
    t59 = *((unsigned int *)t36);
    t60 = (~(t59));
    t61 = *((unsigned int *)t40);
    t62 = (t61 & t60);
    t63 = (~(t28));
    t64 = (~(t62));
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t63);
    t66 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t66 & t64);
    goto LAB605;

LAB606:    xsi_set_current_line(389, ng28);

LAB609:    xsi_set_current_line(390, ng28);
    xsi_vlogfile_write(0, 0, 1, ng46, 1, t0);
    xsi_set_current_line(391, ng28);
    t2 = (t0 + 9192);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9032);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t21 = (t0 + 9352);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 21280);
    t29 = (t0 + 4256);
    t30 = xsi_create_subprogram_invocation(t27, 0, t0, t29, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t29, t30);
    t31 = (t0 + 17672);
    xsi_vlogvar_assign_value(t31, t6, 0, 0, 16);
    t32 = (t0 + 17832);
    xsi_vlogvar_assign_value(t32, t20, 0, 0, 16);
    t33 = (t0 + 17992);
    xsi_vlogvar_assign_value(t33, t24, 0, 0, 1);

LAB612:    t34 = (t0 + 21376);
    t35 = *((char **)t34);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t38 = (t37 + 272U);
    t39 = *((char **)t38);
    t81 = (t39 + 0U);
    t82 = *((char **)t81);
    t28 = ((int  (*)(char *, char *))t82)(t0, t35);

LAB614:    if (t28 != 0)
        goto LAB615;

LAB610:    t35 = (t0 + 4256);
    xsi_vlog_subprogram_popinvocation(t35);

LAB611:    t83 = (t0 + 21376);
    t84 = *((char **)t83);
    t83 = (t0 + 4256);
    t85 = (t0 + 21280);
    t86 = 0;
    xsi_delete_subprogram_invocation(t83, t84, t0, t85, t86);
    xsi_set_current_line(392, ng28);
    xsi_vlogfile_write(0, 0, 1, ng43, 1, t0);
    xsi_set_current_line(393, ng28);
    t2 = (t0 + 7192U);
    t3 = *((char **)t2);
    t2 = (t0 + 7352U);
    t6 = *((char **)t2);
    t2 = (t0 + 7512U);
    t12 = *((char **)t2);
    t2 = (t0 + 7672U);
    t13 = *((char **)t2);
    t2 = (t0 + 7832U);
    t20 = *((char **)t2);
    t2 = ((char*)((ng64)));
    t21 = (t0 + 21280);
    t22 = (t0 + 4688);
    t24 = xsi_create_subprogram_invocation(t21, 0, t0, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t24);
    t27 = (t0 + 18632);
    xsi_vlogvar_assign_value(t27, t3, 0, 0, 7);
    t29 = (t0 + 18792);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 7);
    t30 = (t0 + 18952);
    xsi_vlogvar_assign_value(t30, t12, 0, 0, 7);
    t31 = (t0 + 19112);
    xsi_vlogvar_assign_value(t31, t13, 0, 0, 7);
    t32 = (t0 + 19272);
    xsi_vlogvar_assign_value(t32, t20, 0, 0, 1);
    t33 = (t0 + 19432);
    xsi_vlogvar_assign_value(t33, t2, 0, 0, 1);

LAB618:    t34 = (t0 + 21376);
    t35 = *((char **)t34);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t38 = (t37 + 272U);
    t39 = *((char **)t38);
    t81 = (t39 + 0U);
    t82 = *((char **)t81);
    t28 = ((int  (*)(char *, char *))t82)(t0, t35);

LAB620:    if (t28 != 0)
        goto LAB621;

LAB616:    t35 = (t0 + 4688);
    xsi_vlog_subprogram_popinvocation(t35);

LAB617:    t83 = (t0 + 21376);
    t84 = *((char **)t83);
    t83 = (t0 + 4688);
    t85 = (t0 + 21280);
    t86 = 0;
    xsi_delete_subprogram_invocation(t83, t84, t0, t85, t86);
    xsi_set_current_line(394, ng28);
    xsi_vlogfile_write(0, 0, 1, ng47, 1, t0);
    xsi_set_current_line(395, ng28);
    t2 = (t0 + 6392U);
    t3 = *((char **)t2);
    t2 = (t0 + 6552U);
    t6 = *((char **)t2);
    t2 = (t0 + 6712U);
    t12 = *((char **)t2);
    t2 = (t0 + 6872U);
    t13 = *((char **)t2);
    t2 = (t0 + 7032U);
    t20 = *((char **)t2);
    t2 = ((char*)((ng64)));
    t21 = (t0 + 21280);
    t22 = (t0 + 4688);
    t24 = xsi_create_subprogram_invocation(t21, 0, t0, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t24);
    t27 = (t0 + 18632);
    xsi_vlogvar_assign_value(t27, t3, 0, 0, 7);
    t29 = (t0 + 18792);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 7);
    t30 = (t0 + 18952);
    xsi_vlogvar_assign_value(t30, t12, 0, 0, 7);
    t31 = (t0 + 19112);
    xsi_vlogvar_assign_value(t31, t13, 0, 0, 7);
    t32 = (t0 + 19272);
    xsi_vlogvar_assign_value(t32, t20, 0, 0, 1);
    t33 = (t0 + 19432);
    xsi_vlogvar_assign_value(t33, t2, 0, 0, 1);

LAB624:    t34 = (t0 + 21376);
    t35 = *((char **)t34);
    t36 = (t35 + 80U);
    t37 = *((char **)t36);
    t38 = (t37 + 272U);
    t39 = *((char **)t38);
    t81 = (t39 + 0U);
    t82 = *((char **)t81);
    t28 = ((int  (*)(char *, char *))t82)(t0, t35);

LAB626:    if (t28 != 0)
        goto LAB627;

LAB622:    t35 = (t0 + 4688);
    xsi_vlog_subprogram_popinvocation(t35);

LAB623:    t83 = (t0 + 21376);
    t84 = *((char **)t83);
    t83 = (t0 + 4688);
    t85 = (t0 + 21280);
    t86 = 0;
    xsi_delete_subprogram_invocation(t83, t84, t0, t85, t86);
    xsi_set_current_line(396, ng28);
    xsi_vlogfile_write(0, 0, 1, ng45, 1, t0);
    goto LAB608;

LAB613:;
LAB615:    t34 = (t0 + 21472U);
    *((char **)t34) = &&LAB612;
    goto LAB1;

LAB619:;
LAB621:    t34 = (t0 + 21472U);
    *((char **)t34) = &&LAB618;
    goto LAB1;

LAB625:;
LAB627:    t34 = (t0 + 21472U);
    *((char **)t34) = &&LAB624;
    goto LAB1;

LAB628:    *((unsigned int *)t4) = 1;
    goto LAB631;

LAB632:    *((unsigned int *)t23) = 1;
    goto LAB635;

LAB634:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB635;

LAB636:    t21 = (t0 + 9832);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t27 = (t0 + 9672);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t24, 32, t30, 32);
    t31 = (t0 + 1152);
    t32 = *((char **)t31);
    memset(t40, 0, 8);
    xsi_vlog_signed_equal(t40, 32, t26, 32, t32, 32);
    memset(t45, 0, 8);
    t31 = (t40 + 4);
    t44 = *((unsigned int *)t31);
    t46 = (~(t44));
    t47 = *((unsigned int *)t40);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB639;

LAB640:    if (*((unsigned int *)t31) != 0)
        goto LAB641;

LAB642:    t50 = *((unsigned int *)t23);
    t51 = *((unsigned int *)t45);
    t52 = (t50 & t51);
    *((unsigned int *)t72) = t52;
    t34 = (t23 + 4);
    t35 = (t45 + 4);
    t36 = (t72 + 4);
    t53 = *((unsigned int *)t34);
    t54 = *((unsigned int *)t35);
    t55 = (t53 | t54);
    *((unsigned int *)t36) = t55;
    t56 = *((unsigned int *)t36);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB643;

LAB644:
LAB645:    goto LAB638;

LAB639:    *((unsigned int *)t45) = 1;
    goto LAB642;

LAB641:    t33 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB642;

LAB643:    t58 = *((unsigned int *)t72);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t72) = (t58 | t59);
    t37 = (t23 + 4);
    t38 = (t45 + 4);
    t60 = *((unsigned int *)t23);
    t61 = (~(t60));
    t63 = *((unsigned int *)t37);
    t64 = (~(t63));
    t65 = *((unsigned int *)t45);
    t66 = (~(t65));
    t67 = *((unsigned int *)t38);
    t68 = (~(t67));
    t28 = (t61 & t64);
    t62 = (t66 & t68);
    t69 = (~(t28));
    t70 = (~(t62));
    t71 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t71 & t69);
    t73 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t73 & t70);
    t74 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t74 & t69);
    t75 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t75 & t70);
    goto LAB645;

LAB646:    xsi_set_current_line(398, ng28);

LAB649:    xsi_set_current_line(399, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    xsi_set_current_line(400, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    xsi_set_current_line(401, ng28);
    xsi_vlogfile_write(0, 0, 1, ng48, 1, t0);
    goto LAB648;

LAB650:    xsi_set_current_line(404, ng28);

LAB653:    xsi_set_current_line(405, ng28);
    t6 = (t0 + 11272);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 9512);
    xsi_vlogvar_assign_value(t20, t13, 0, 0, 32);
    goto LAB652;

LAB655:    xsi_set_current_line(416, ng28);
    xsi_vlogfile_write(0, 0, 1, ng67, 1, t0);
    goto LAB657;

}


extern void tester_m_00000000004262489423_2613777659_init()
{
	static char *pe[] = {(void *)Initial_85_0};
	static char *se[] = {(void *)sp_print_top_input,(void *)sp_print_top_output,(void *)sp_print_sensors_input,(void *)sp_print_sensors_output,(void *)sp_print_sqrt_input,(void *)sp_print_sqrt_output,(void *)sp_print_display_input,(void *)sp_print_display_output,(void *)sp_convert_dec_to_seven_seg};
	xsi_register_didat("tester_m_00000000004262489423_2613777659", "isim/tester.exe.sim/tester/m_00000000004262489423_2613777659.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
