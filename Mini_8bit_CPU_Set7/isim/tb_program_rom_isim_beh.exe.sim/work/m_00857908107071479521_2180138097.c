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
static const char *ng0 = "/home/ise/VLSI-Lab/Mini_8bit_CPU_Set7/tb_program_rom.v";
static const char *ng1 = "FAIL PC=%0d instr=%h expected=%h";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS PC=%0d instr=%h";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {499U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {1084U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {1553U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {2304U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {560U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {1600U, 0U};
static int ng16[] = {6, 0};
static int ng17[] = {16, 0};
static int ng18[] = {0, 0};
static const char *ng19 = "program_rom: ALL TESTS PASSED";
static const char *ng20 = "program_rom: %0d ERRORS";



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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t5 = (t1 + 2360);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 1880);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(11, ng0);
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

LAB6:    xsi_set_current_line(12, ng0);
    t4 = (t1 + 1480U);
    t5 = *((char **)t4);
    t4 = (t1 + 2520);
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

LAB11:    xsi_set_current_line(16, ng0);
    t4 = (t1 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1480U);
    t8 = *((char **)t7);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t7, (char)118, t6, 4, (char)118, t8, 12);

LAB12:    goto LAB4;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12, ng0);

LAB13:    xsi_set_current_line(13, ng0);
    t17 = (t1 + 2360);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t1 + 1480U);
    t21 = *((char **)t20);
    t20 = (t1 + 2520);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 4, t24, (char)118, t19, 4, (char)118, t21, 12, (char)118, t23, 12);
    xsi_set_current_line(14, ng0);
    t4 = (t1 + 2040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2040);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB12;

}

static void Initial_21_0(char *t0)
{
    char t22[8];
    char t28[8];
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
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);

LAB4:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3240);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB7:    t9 = (t0 + 3336);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB9:    if (t17 != 0)
        goto LAB10;

LAB5:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB6:    t18 = (t0 + 3336);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3240);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3240);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB13:    t9 = (t0 + 3336);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB15:    if (t17 != 0)
        goto LAB16;

LAB11:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB12:    t18 = (t0 + 3336);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3240);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3240);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB19:    t9 = (t0 + 3336);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB21:    if (t17 != 0)
        goto LAB22;

LAB17:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB18:    t18 = (t0 + 3336);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3240);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3240);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB25:    t9 = (t0 + 3336);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB27:    if (t17 != 0)
        goto LAB28;

LAB23:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB24:    t18 = (t0 + 3336);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3240);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3240);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB31:    t9 = (t0 + 3336);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB33:    if (t17 != 0)
        goto LAB34;

LAB29:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB30:    t18 = (t0 + 3336);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3240);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng14)));
    t3 = ((char*)((ng15)));
    t4 = (t0 + 3240);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 12);

LAB37:    t9 = (t0 + 3336);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB39:    if (t17 != 0)
        goto LAB40;

LAB35:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB36:    t18 = (t0 + 3336);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 3240);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(28, ng0);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB41:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    memset(t22, 0, 8);
    xsi_vlog_signed_less(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng18)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)119, t4, 32);

LAB52:    xsi_set_current_line(32, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t9 = (t0 + 3432U);
    *((char **)t9) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t9 = (t0 + 3432U);
    *((char **)t9) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t9 = (t0 + 3432U);
    *((char **)t9) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t9 = (t0 + 3432U);
    *((char **)t9) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t9 = (t0 + 3432U);
    *((char **)t9) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t9 = (t0 + 3432U);
    *((char **)t9) = &&LAB37;
    goto LAB1;

LAB42:    xsi_set_current_line(29, ng0);
    t7 = (t0 + 2200);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t28, 0, 8);
    t10 = (t28 + 4);
    t11 = (t9 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (t29 >> 0);
    *((unsigned int *)t28) = t30;
    t31 = *((unsigned int *)t11);
    t32 = (t31 >> 0);
    *((unsigned int *)t10) = t32;
    t33 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t33 & 15U);
    t34 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t34 & 15U);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 3240);
    t14 = (t0 + 848);
    t15 = xsi_create_subprogram_invocation(t13, 0, t0, t14, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t14, t15);
    t16 = (t0 + 2360);
    xsi_vlogvar_assign_value(t16, t28, 0, 0, 4);
    t18 = (t0 + 2520);
    xsi_vlogvar_assign_value(t18, t12, 0, 0, 12);

LAB46:    t19 = (t0 + 3336);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t35 = *((char **)t21);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t17 = ((int  (*)(char *, char *))t39)(t0, t20);

LAB48:    if (t17 != 0)
        goto LAB49;

LAB44:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB45:    t40 = (t0 + 3336);
    t41 = *((char **)t40);
    t40 = (t0 + 848);
    t42 = (t0 + 3240);
    t43 = 0;
    xsi_delete_subprogram_invocation(t40, t41, t0, t42, t43);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 2200);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB41;

LAB47:;
LAB49:    t19 = (t0 + 3432U);
    *((char **)t19) = &&LAB46;
    goto LAB1;

LAB50:    xsi_set_current_line(30, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    goto LAB52;

}


extern void work_m_00857908107071479521_2180138097_init()
{
	static char *pe[] = {(void *)Initial_21_0};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_00857908107071479521_2180138097", "isim/tb_program_rom_isim_beh.exe.sim/work/m_00857908107071479521_2180138097.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
