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
static const char *ng0 = "/home/ise/VLSI-Lab/Mini_8bit_CPU_Set7/tb_accumulator.v";
static const char *ng1 = "FAIL t=%0t ACC=%h Z=%b expected ACC=%h Z=%b";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS t=%0t ACC=%h Z=%b";
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {170U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {243U, 0U};
static unsigned int ng9[] = {85U, 0U};
static unsigned int ng10[] = {119U, 0U};
static unsigned int ng11[] = {64U, 0U};
static const char *ng12 = "accumulator: ALL TESTS PASSED";
static const char *ng13 = "accumulator: %0d ERRORS";



static int sp_check(char *t1, char *t2)
{
    char t9[8];
    char t12[8];
    char t29[8];
    char t32[8];
    char t40[8];
    char t74[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t5 = (t1 + 1480U);
    t6 = *((char **)t5);
    t5 = (t1 + 2840);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB7;

LAB6:    t10 = (t6 + 4);
    t11 = (t8 + 4);
    if (*((unsigned int *)t10) != *((unsigned int *)t11))
        goto LAB7;

LAB8:    memset(t12, 0, 8);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t13) != 0)
        goto LAB11;

LAB12:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (!(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB13;

LAB14:    memcpy(t40, t12, 8);

LAB15:    t68 = (t40 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t40);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(21, ng0);
    t4 = xsi_vlog_time(t74, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 1480U);
    t6 = *((char **)t5);
    t5 = (t1 + 1640U);
    t7 = *((char **)t5);
    t5 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t5, (char)118, t74, 64, (char)118, t6, 8, (char)118, t7, 1);

LAB28:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t9) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB11:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB12;

LAB13:    t25 = (t1 + 1640U);
    t26 = *((char **)t25);
    t25 = (t1 + 3000);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    if (*((unsigned int *)t26) != *((unsigned int *)t28))
        goto LAB17;

LAB16:    t30 = (t26 + 4);
    t31 = (t28 + 4);
    if (*((unsigned int *)t30) != *((unsigned int *)t31))
        goto LAB17;

LAB18:    memset(t32, 0, 8);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t33) != 0)
        goto LAB21;

LAB22:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB15;

LAB17:    *((unsigned int *)t29) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t32) = 1;
    goto LAB22;

LAB21:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB22;

LAB23:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t12);
    t59 = (t58 & t57);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t32);
    t63 = (t62 & t61);
    t64 = (~(t59));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    goto LAB25;

LAB26:    xsi_set_current_line(17, ng0);

LAB29:    xsi_set_current_line(18, ng0);
    t75 = xsi_vlog_time(t74, 1000.0000000000000, 1000.0000000000000);
    t76 = (t1 + 1480U);
    t77 = *((char **)t76);
    t76 = (t1 + 1640U);
    t78 = *((char **)t76);
    t76 = (t1 + 2840);
    t79 = (t76 + 56U);
    t80 = *((char **)t79);
    t81 = (t1 + 3000);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 6, t84, (char)118, t74, 64, (char)118, t77, 8, (char)118, t78, 1, (char)118, t80, 8, (char)118, t83, 1);
    xsi_set_current_line(19, ng0);
    t4 = (t1 + 2680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2680);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB28;

}

static void Initial_12_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(12, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2040);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_13_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3968);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 2040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2040);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_25_2(char *t0)
{
    char t22[8];
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

LAB0:    t1 = (t0 + 4408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);

LAB4:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4728);
    *((int *)t2) = 1;
    t3 = (t0 + 4440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4216);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4216);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB9:    t9 = (t0 + 4312);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB11:    if (t17 != 0)
        goto LAB12;

LAB7:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB8:    t18 = (t0 + 4312);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4216);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4744);
    *((int *)t2) = 1;
    t3 = (t0 + 4440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB10:;
LAB12:    t9 = (t0 + 4408U);
    *((char **)t9) = &&LAB9;
    goto LAB1;

LAB13:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4216);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4216);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB17:    t9 = (t0 + 4312);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB19:    if (t17 != 0)
        goto LAB20;

LAB15:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB16:    t18 = (t0 + 4312);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4216);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4760);
    *((int *)t2) = 1;
    t3 = (t0 + 4440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB18:;
LAB20:    t9 = (t0 + 4408U);
    *((char **)t9) = &&LAB17;
    goto LAB1;

LAB21:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4216);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4216);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB25:    t9 = (t0 + 4312);
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

LAB24:    t18 = (t0 + 4312);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4216);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4776);
    *((int *)t2) = 1;
    t3 = (t0 + 4440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB26:;
LAB28:    t9 = (t0 + 4408U);
    *((char **)t9) = &&LAB25;
    goto LAB1;

LAB29:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4216);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4216);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB33:    t9 = (t0 + 4312);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB35:    if (t17 != 0)
        goto LAB36;

LAB31:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB32:    t18 = (t0 + 4312);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4216);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4792);
    *((int *)t2) = 1;
    t3 = (t0 + 4440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB34:;
LAB36:    t9 = (t0 + 4408U);
    *((char **)t9) = &&LAB33;
    goto LAB1;

LAB37:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4216);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4216);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB41:    t9 = (t0 + 4312);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB43:    if (t17 != 0)
        goto LAB44;

LAB39:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB40:    t18 = (t0 + 4312);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4216);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4808);
    *((int *)t2) = 1;
    t3 = (t0 + 4440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB42:;
LAB44:    t9 = (t0 + 4408U);
    *((char **)t9) = &&LAB41;
    goto LAB1;

LAB45:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4216);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4216);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB49:    t9 = (t0 + 4312);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB51:    if (t17 != 0)
        goto LAB52;

LAB47:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB48:    t18 = (t0 + 4312);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4216);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4824);
    *((int *)t2) = 1;
    t3 = (t0 + 4440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB50:;
LAB52:    t9 = (t0 + 4408U);
    *((char **)t9) = &&LAB49;
    goto LAB1;

LAB53:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4216);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4216);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);

LAB57:    t9 = (t0 + 4312);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB59:    if (t17 != 0)
        goto LAB60;

LAB55:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB56:    t18 = (t0 + 4312);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4216);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)119, t4, 32);

LAB63:    xsi_set_current_line(42, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB58:;
LAB60:    t9 = (t0 + 4408U);
    *((char **)t9) = &&LAB57;
    goto LAB1;

LAB61:    xsi_set_current_line(40, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    goto LAB63;

}


extern void work_m_03145033781476824581_1401686817_init()
{
	static char *pe[] = {(void *)Initial_12_0,(void *)Always_13_1,(void *)Initial_25_2};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_03145033781476824581_1401686817", "isim/tb_accumulator_isim_beh.exe.sim/work/m_03145033781476824581_1401686817.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
