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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/VLSI-Lab/Mini_8bit_CPU_Set7/tb_alu.v";
static const char *ng1 = "FAIL op=%b ACC=%h operand=%h result=%h expected=%h";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS op=%b ACC=%h operand=%h result=%h";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {85U, 0U};
static unsigned int ng6[] = {243U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {16U, 0U};
static unsigned int ng9[] = {48U, 0U};
static unsigned int ng10[] = {64U, 0U};
static unsigned int ng11[] = {255U, 0U};
static unsigned int ng12[] = {240U, 0U};
static unsigned int ng13[] = {32U, 0U};
static unsigned int ng14[] = {2U, 0U};
static unsigned int ng15[] = {60U, 0U};
static unsigned int ng16[] = {3U, 0U};
static unsigned int ng17[] = {17U, 0U};
static unsigned int ng18[] = {33U, 0U};
static unsigned int ng19[] = {4U, 0U};
static unsigned int ng20[] = {128U, 0U};
static unsigned int ng21[] = {7U, 0U};
static unsigned int ng22[] = {165U, 0U};
static unsigned int ng23[] = {18U, 0U};
static int ng24[] = {0, 0};
static const char *ng25 = "alu: ALL TESTS PASSED";
static const char *ng26 = "alu: %0d ERRORS";



static int sp_check(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t5 = (t1 + 2520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2200);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    xsi_set_current_line(12, ng0);
    t4 = (t1 + 2680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1880);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(12, ng0);
    t4 = (t1 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2040);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(12, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(13, ng0);
    t4 = (t1 + 1480U);
    t5 = *((char **)t4);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB8;

LAB7:    t8 = (t5 + 4);
    t10 = (t7 + 4);
    if (*((unsigned int *)t8) != *((unsigned int *)t10))
        goto LAB8;

LAB9:    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(18, ng0);
    t4 = (t1 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2680);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t1 + 2840);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 1480U);
    t20 = *((char **)t19);
    t19 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 5, t19, (char)118, t6, 3, (char)118, t10, 8, (char)118, t18, 8, (char)118, t20, 8);

LAB12:    goto LAB4;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(13, ng0);

LAB13:    xsi_set_current_line(14, ng0);
    t17 = (t1 + 2520);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 2680);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t1 + 2840);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 1480U);
    t27 = *((char **)t26);
    t26 = (t1 + 3000);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 6, t30, (char)118, t19, 3, (char)118, t22, 8, (char)118, t25, 8, (char)118, t27, 8, (char)118, t29, 8);
    xsi_set_current_line(16, ng0);
    t4 = (t1 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2360);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB12;

}

static void Initial_22_0(char *t0)
{
    char t26[8];
    char *t1;
    char *t2;
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
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);

LAB4:    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng6)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB7:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB9:    if (t21 != 0)
        goto LAB10;

LAB5:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB6:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng8)));
    t4 = ((char*)((ng9)));
    t5 = ((char*)((ng10)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB13:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB15:    if (t21 != 0)
        goto LAB16;

LAB11:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB12:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng7)));
    t5 = ((char*)((ng4)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB19:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB21:    if (t21 != 0)
        goto LAB22;

LAB17:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB18:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng12)));
    t4 = ((char*)((ng13)));
    t5 = ((char*)((ng8)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB25:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB27:    if (t21 != 0)
        goto LAB28;

LAB23:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB24:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng6)));
    t4 = ((char*)((ng15)));
    t5 = ((char*)((ng9)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB31:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB33:    if (t21 != 0)
        goto LAB34;

LAB29:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB30:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng4)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB37:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB39:    if (t21 != 0)
        goto LAB40;

LAB35:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB36:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng16)));
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng17)));
    t5 = ((char*)((ng18)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB43:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB45:    if (t21 != 0)
        goto LAB46;

LAB41:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB42:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng16)));
    t3 = ((char*)((ng10)));
    t4 = ((char*)((ng10)));
    t5 = ((char*)((ng4)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB49:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB51:    if (t21 != 0)
        goto LAB52;

LAB47:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB48:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng19)));
    t3 = ((char*)((ng18)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng8)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB55:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB57:    if (t21 != 0)
        goto LAB58;

LAB53:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB54:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng19)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng11)));
    t5 = ((char*)((ng4)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB61:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB63:    if (t21 != 0)
        goto LAB64;

LAB59:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB60:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng19)));
    t3 = ((char*)((ng20)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng10)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB67:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB69:    if (t21 != 0)
        goto LAB70;

LAB65:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB66:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng21)));
    t3 = ((char*)((ng22)));
    t4 = ((char*)((ng23)));
    t5 = ((char*)((ng22)));
    t6 = (t0 + 3720);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 3);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 2840);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 8);

LAB73:    t13 = (t0 + 3816);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB75:    if (t21 != 0)
        goto LAB76;

LAB71:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB72:    t22 = (t0 + 3816);
    t23 = *((char **)t22);
    t22 = (t0 + 848);
    t24 = (t0 + 3720);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng24)));
    memset(t26, 0, 8);
    xsi_vlog_signed_equal(t26, 32, t4, 32, t5, 32);
    t6 = (t26 + 4);
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng26, 2, t0, (char)119, t4, 32);

LAB79:    xsi_set_current_line(37, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB43;
    goto LAB1;

LAB50:;
LAB52:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB49;
    goto LAB1;

LAB56:;
LAB58:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB55;
    goto LAB1;

LAB62:;
LAB64:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB61;
    goto LAB1;

LAB68:;
LAB70:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB67;
    goto LAB1;

LAB74:;
LAB76:    t13 = (t0 + 3912U);
    *((char **)t13) = &&LAB73;
    goto LAB1;

LAB77:    xsi_set_current_line(35, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    goto LAB79;

}


extern void work_m_08607985271388276395_2521077532_init()
{
	static char *pe[] = {(void *)Initial_22_0};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_08607985271388276395_2521077532", "isim/tb_alu_isim_beh.exe.sim/work/m_08607985271388276395_2521077532.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
