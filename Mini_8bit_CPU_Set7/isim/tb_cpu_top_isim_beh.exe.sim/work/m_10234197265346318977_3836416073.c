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
static const char *ng0 = "/home/ise/VLSI-Lab/Mini_8bit_CPU_Set7/cpu_tb.v";
static const char *ng1 = "FAIL t=%0t Q=%h Z=%b PC=%h expected Q=%h Z=%b PC=%h";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS t=%0t Q=%h Z=%b PC=%h";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {243U, 0U};
static unsigned int ng7[] = {48U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {33U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {16U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {64U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {6U, 0U};
static int ng16[] = {0, 0};
static const char *ng17 = "cpu_top: ALL TESTS PASSED";
static const char *ng18 = "cpu_top: %0d ERRORS";



static int sp_check(char *t1, char *t2)
{
    char t8[8];
    char t11[8];
    char t28[8];
    char t31[8];
    char t39[8];
    char t67[8];
    char t84[8];
    char t87[8];
    char t95[8];
    char t129[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
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
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;

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
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(17, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(18, ng0);
    t4 = (t1 + 1480U);
    t5 = *((char **)t4);
    t4 = (t1 + 2680);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB9;

LAB8:    t9 = (t5 + 4);
    t10 = (t7 + 4);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB9;

LAB10:    memset(t11, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t12) != 0)
        goto LAB13;

LAB14:    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (!(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    memcpy(t39, t11, 8);

LAB17:    memset(t67, 0, 8);
    t68 = (t39 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t39);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t68) != 0)
        goto LAB30;

LAB31:    t75 = (t67 + 4);
    t76 = *((unsigned int *)t67);
    t77 = (!(t76));
    t78 = *((unsigned int *)t75);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB32;

LAB33:    memcpy(t95, t67, 8);

LAB34:    t123 = (t95 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t95);
    t127 = (t126 & t125);
    t128 = (t127 != 0);
    if (t128 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(23, ng0);
    t4 = xsi_vlog_time(t129, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 1480U);
    t6 = *((char **)t5);
    t5 = (t1 + 1640U);
    t7 = *((char **)t5);
    t5 = (t1 + 1800U);
    t9 = *((char **)t5);
    t5 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 5, t5, (char)118, t129, 64, (char)118, t6, 8, (char)118, t7, 1, (char)118, t9, 4);

LAB47:    goto LAB4;

LAB9:    *((unsigned int *)t8) = 1;
    goto LAB10;

LAB11:    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB13:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB15:    t24 = (t1 + 1640U);
    t25 = *((char **)t24);
    t24 = (t1 + 2840);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    if (*((unsigned int *)t25) != *((unsigned int *)t27))
        goto LAB19;

LAB18:    t29 = (t25 + 4);
    t30 = (t27 + 4);
    if (*((unsigned int *)t29) != *((unsigned int *)t30))
        goto LAB19;

LAB20:    memset(t31, 0, 8);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t32) != 0)
        goto LAB23;

LAB24:    t40 = *((unsigned int *)t11);
    t41 = *((unsigned int *)t31);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = (t11 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB17;

LAB19:    *((unsigned int *)t28) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t31) = 1;
    goto LAB24;

LAB23:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB24;

LAB25:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t11 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    t57 = *((unsigned int *)t11);
    t58 = (t57 & t56);
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t31);
    t62 = (t61 & t60);
    t63 = (~(t58));
    t64 = (~(t62));
    t65 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t65 & t63);
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    goto LAB27;

LAB28:    *((unsigned int *)t67) = 1;
    goto LAB31;

LAB30:    t74 = (t67 + 4);
    *((unsigned int *)t67) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB31;

LAB32:    t80 = (t1 + 1800U);
    t81 = *((char **)t80);
    t80 = (t1 + 3000);
    t82 = (t80 + 56U);
    t83 = *((char **)t82);
    memset(t84, 0, 8);
    if (*((unsigned int *)t81) != *((unsigned int *)t83))
        goto LAB36;

LAB35:    t85 = (t81 + 4);
    t86 = (t83 + 4);
    if (*((unsigned int *)t85) != *((unsigned int *)t86))
        goto LAB36;

LAB37:    memset(t87, 0, 8);
    t88 = (t84 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t84);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t88) != 0)
        goto LAB40;

LAB41:    t96 = *((unsigned int *)t67);
    t97 = *((unsigned int *)t87);
    t98 = (t96 | t97);
    *((unsigned int *)t95) = t98;
    t99 = (t67 + 4);
    t100 = (t87 + 4);
    t101 = (t95 + 4);
    t102 = *((unsigned int *)t99);
    t103 = *((unsigned int *)t100);
    t104 = (t102 | t103);
    *((unsigned int *)t101) = t104;
    t105 = *((unsigned int *)t101);
    t106 = (t105 != 0);
    if (t106 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB34;

LAB36:    *((unsigned int *)t84) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t87) = 1;
    goto LAB41;

LAB40:    t94 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB41;

LAB42:    t107 = *((unsigned int *)t95);
    t108 = *((unsigned int *)t101);
    *((unsigned int *)t95) = (t107 | t108);
    t109 = (t67 + 4);
    t110 = (t87 + 4);
    t111 = *((unsigned int *)t109);
    t112 = (~(t111));
    t113 = *((unsigned int *)t67);
    t114 = (t113 & t112);
    t115 = *((unsigned int *)t110);
    t116 = (~(t115));
    t117 = *((unsigned int *)t87);
    t118 = (t117 & t116);
    t119 = (~(t114));
    t120 = (~(t118));
    t121 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t121 & t119);
    t122 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t122 & t120);
    goto LAB44;

LAB45:    xsi_set_current_line(18, ng0);

LAB48:    xsi_set_current_line(19, ng0);
    t130 = xsi_vlog_time(t129, 1000.0000000000000, 1000.0000000000000);
    t131 = (t1 + 1480U);
    t132 = *((char **)t131);
    t131 = (t1 + 1640U);
    t133 = *((char **)t131);
    t131 = (t1 + 1800U);
    t134 = *((char **)t131);
    t131 = (t1 + 2680);
    t135 = (t131 + 56U);
    t136 = *((char **)t135);
    t137 = (t1 + 2840);
    t138 = (t137 + 56U);
    t139 = *((char **)t138);
    t140 = (t1 + 3000);
    t141 = (t140 + 56U);
    t142 = *((char **)t141);
    t143 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 8, t143, (char)118, t129, 64, (char)118, t132, 8, (char)118, t133, 1, (char)118, t134, 4, (char)118, t136, 8, (char)118, t139, 1, (char)118, t142, 4);
    xsi_set_current_line(21, ng0);
    t4 = (t1 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 2520);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB47;

}

static void Initial_11_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(11, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2200);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_12_1(char *t0)
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

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3968);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 2200);
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
    t24 = (t0 + 2200);
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

static void Initial_27_2(char *t0)
{
    char t24[8];
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
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    t1 = (t0 + 4408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);

LAB4:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng4)));
    t5 = (t0 + 4216);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 8);
    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 4);

LAB7:    t11 = (t0 + 4312);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB9:    if (t19 != 0)
        goto LAB10;

LAB5:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB6:    t20 = (t0 + 4312);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4216);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng5)));
    t5 = (t0 + 4216);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 8);
    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 4);

LAB13:    t11 = (t0 + 4312);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB15:    if (t19 != 0)
        goto LAB16;

LAB11:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB12:    t20 = (t0 + 4312);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4216);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng8)));
    t5 = (t0 + 4216);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 8);
    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 4);

LAB19:    t11 = (t0 + 4312);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB21:    if (t19 != 0)
        goto LAB22;

LAB17:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB18:    t20 = (t0 + 4312);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4216);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng10)));
    t5 = (t0 + 4216);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 8);
    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 4);

LAB25:    t11 = (t0 + 4312);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB27:    if (t19 != 0)
        goto LAB28;

LAB23:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB24:    t20 = (t0 + 4312);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4216);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng12)));
    t5 = (t0 + 4216);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 8);
    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 4);

LAB31:    t11 = (t0 + 4312);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB33:    if (t19 != 0)
        goto LAB34;

LAB29:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB30:    t20 = (t0 + 4312);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4216);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng13)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng14)));
    t5 = (t0 + 4216);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 8);
    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 4);

LAB37:    t11 = (t0 + 4312);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB39:    if (t19 != 0)
        goto LAB40;

LAB35:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB36:    t20 = (t0 + 4312);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4216);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng15)));
    t5 = (t0 + 4216);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 8);
    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 4);

LAB43:    t11 = (t0 + 4312);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB45:    if (t19 != 0)
        goto LAB46;

LAB41:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB42:    t20 = (t0 + 4312);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4216);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t24, 0, 8);
    xsi_vlog_signed_equal(t24, 32, t4, 32, t5, 32);
    t6 = (t24 + 4);
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng18, 2, t0, (char)119, t4, 32);

LAB49:    xsi_set_current_line(39, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t11 = (t0 + 4408U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t11 = (t0 + 4408U);
    *((char **)t11) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t11 = (t0 + 4408U);
    *((char **)t11) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t11 = (t0 + 4408U);
    *((char **)t11) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t11 = (t0 + 4408U);
    *((char **)t11) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t11 = (t0 + 4408U);
    *((char **)t11) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t11 = (t0 + 4408U);
    *((char **)t11) = &&LAB43;
    goto LAB1;

LAB47:    xsi_set_current_line(37, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    goto LAB49;

}


extern void work_m_10234197265346318977_3836416073_init()
{
	static char *pe[] = {(void *)Initial_11_0,(void *)Always_12_1,(void *)Initial_27_2};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_10234197265346318977_3836416073", "isim/tb_cpu_top_isim_beh.exe.sim/work/m_10234197265346318977_3836416073.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
