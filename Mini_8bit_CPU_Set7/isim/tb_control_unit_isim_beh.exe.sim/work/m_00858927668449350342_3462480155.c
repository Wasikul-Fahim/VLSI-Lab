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
static const char *ng0 = "/home/ise/VLSI-Lab/Mini_8bit_CPU_Set7/tb_control_unit.v";
static const char *ng1 = "FAIL opcode=%h acc_write=%b alu_op=%b (expected %b %b)";
static int ng2[] = {1, 0};
static const char *ng3 = "PASS opcode=%h acc_write=%b alu_op=%b";
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {9U, 0U};
static int ng11[] = {0, 0};
static int ng12[] = {16, 0};
static int ng13[] = {2, 0};
static int ng14[] = {4, 0};
static int ng15[] = {6, 0};
static int ng16[] = {9, 0};
static unsigned int ng17[] = {7U, 0U};
static const char *ng18 = "control_unit: ALL TESTS PASSED";
static const char *ng19 = "control_unit: %0d ERRORS";



static int sp_check(char *t1, char *t2)
{
    char t9[8];
    char t11[8];
    char t28[8];
    char t31[8];
    char t39[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
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
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
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
    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t5 = (t1 + 2520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2040);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
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
    t4 = (t1 + 2680);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB8;

LAB7:    t8 = (t5 + 4);
    t10 = (t7 + 4);
    if (*((unsigned int *)t8) != *((unsigned int *)t10))
        goto LAB8;

LAB9:    memset(t11, 0, 8);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) != 0)
        goto LAB12;

LAB13:    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (!(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB14;

LAB15:    memcpy(t39, t11, 8);

LAB16:    t67 = (t39 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t39);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(18, ng0);
    t4 = (t1 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1480U);
    t8 = *((char **)t7);
    t7 = (t1 + 1640U);
    t10 = *((char **)t7);
    t7 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t7, (char)118, t6, 4, (char)118, t8, 1, (char)118, t10, 3);

LAB29:    goto LAB4;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB12:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB13;

LAB14:    t24 = (t1 + 1640U);
    t25 = *((char **)t24);
    t24 = (t1 + 2840);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    if (*((unsigned int *)t25) != *((unsigned int *)t27))
        goto LAB18;

LAB17:    t29 = (t25 + 4);
    t30 = (t27 + 4);
    if (*((unsigned int *)t29) != *((unsigned int *)t30))
        goto LAB18;

LAB19:    memset(t31, 0, 8);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t32) != 0)
        goto LAB22;

LAB23:    t40 = *((unsigned int *)t11);
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
        goto LAB24;

LAB25:
LAB26:    goto LAB16;

LAB18:    *((unsigned int *)t28) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t31) = 1;
    goto LAB23;

LAB22:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB23;

LAB24:    t51 = *((unsigned int *)t39);
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
    goto LAB26;

LAB27:    xsi_set_current_line(13, ng0);

LAB30:    xsi_set_current_line(14, ng0);
    t73 = (t1 + 2520);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t1 + 1480U);
    t77 = *((char **)t76);
    t76 = (t1 + 1640U);
    t78 = *((char **)t76);
    t76 = (t1 + 2680);
    t79 = (t76 + 56U);
    t80 = *((char **)t79);
    t81 = (t1 + 2840);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 6, t84, (char)118, t75, 4, (char)118, t77, 1, (char)118, t78, 3, (char)118, t80, 1, (char)118, t83, 3);
    xsi_set_current_line(16, ng0);
    t4 = (t1 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2200);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB29;

}

static void Initial_23_0(char *t0)
{
    char t24[8];
    char t30[8];
    char t31[8];
    char t40[8];
    char t41[8];
    char t47[8];
    char t75[8];
    char t91[8];
    char t92[8];
    char t100[8];
    char t132[8];
    char t148[8];
    char t149[8];
    char t157[8];
    char t189[8];
    char t205[8];
    char t206[8];
    char t214[8];
    char t252[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
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
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    int t181;
    int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    char *t228;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    int t238;
    int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    char *t253;
    char *t254;
    char *t255;
    char *t256;
    char *t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    char *t264;
    char *t265;
    char *t266;
    char *t267;
    char *t268;
    char *t269;
    char *t270;
    char *t271;
    char *t272;
    char *t273;
    char *t274;
    char *t275;
    char *t276;
    char *t277;
    char *t278;
    char *t279;
    int t280;
    char *t281;
    char *t282;
    char *t283;
    char *t284;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);

LAB4:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng5)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);

LAB7:    t11 = (t0 + 3656);
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

LAB6:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);

LAB13:    t11 = (t0 + 3656);
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

LAB12:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng6)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);

LAB19:    t11 = (t0 + 3656);
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

LAB18:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng9)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);

LAB25:    t11 = (t0 + 3656);
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

LAB24:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng7)));
    t5 = (t0 + 3560);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 4);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);

LAB31:    t11 = (t0 + 3656);
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

LAB30:    t20 = (t0 + 3656);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 3560);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(30, ng0);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB35:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t24, 0, 8);
    xsi_vlog_signed_less(t24, 32, t4, 32, t5, 32);
    t6 = (t24 + 4);
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t24, 0, 8);
    xsi_vlog_signed_equal(t24, 32, t4, 32, t5, 32);
    t6 = (t24 + 4);
    t25 = *((unsigned int *)t6);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t0, (char)119, t4, 32);

LAB105:    xsi_set_current_line(35, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t11 = (t0 + 3752U);
    *((char **)t11) = &&LAB31;
    goto LAB1;

LAB36:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 2360);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_signed_not_equal(t30, 32, t9, 32, t10, 32);
    memset(t31, 0, 8);
    t11 = (t30 + 4);
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t11) != 0)
        goto LAB40;

LAB41:    t13 = (t31 + 4);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t13);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB42;

LAB43:    memcpy(t47, t31, 8);

LAB44:    memset(t75, 0, 8);
    t76 = (t47 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t47);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t76) != 0)
        goto LAB54;

LAB55:    t83 = (t75 + 4);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB56;

LAB57:    memcpy(t100, t75, 8);

LAB58:    memset(t132, 0, 8);
    t133 = (t100 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t100);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t133) != 0)
        goto LAB68;

LAB69:    t140 = (t132 + 4);
    t141 = *((unsigned int *)t132);
    t142 = *((unsigned int *)t140);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB70;

LAB71:    memcpy(t157, t132, 8);

LAB72:    memset(t189, 0, 8);
    t190 = (t157 + 4);
    t191 = *((unsigned int *)t190);
    t192 = (~(t191));
    t193 = *((unsigned int *)t157);
    t194 = (t193 & t192);
    t195 = (t194 & 1U);
    if (t195 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t190) != 0)
        goto LAB82;

LAB83:    t197 = (t189 + 4);
    t198 = *((unsigned int *)t189);
    t199 = *((unsigned int *)t197);
    t200 = (t198 || t199);
    if (t200 > 0)
        goto LAB84;

LAB85:    memcpy(t214, t189, 8);

LAB86:    t246 = (t214 + 4);
    t247 = *((unsigned int *)t246);
    t248 = (~(t247));
    t249 = *((unsigned int *)t214);
    t250 = (t249 & t248);
    t251 = (t250 != 0);
    if (t251 > 0)
        goto LAB94;

LAB95:
LAB96:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t4, 32, t5, 32);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t24, 0, 0, 32);
    goto LAB35;

LAB38:    *((unsigned int *)t31) = 1;
    goto LAB41;

LAB40:    t12 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB41;

LAB42:    t14 = (t0 + 2360);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng13)));
    memset(t40, 0, 8);
    xsi_vlog_signed_not_equal(t40, 32, t16, 32, t17, 32);
    memset(t41, 0, 8);
    t18 = (t40 + 4);
    t42 = *((unsigned int *)t18);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t18) != 0)
        goto LAB47;

LAB48:    t48 = *((unsigned int *)t31);
    t49 = *((unsigned int *)t41);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t21 = (t31 + 4);
    t22 = (t41 + 4);
    t23 = (t47 + 4);
    t51 = *((unsigned int *)t21);
    t52 = *((unsigned int *)t22);
    t53 = (t51 | t52);
    *((unsigned int *)t23) = t53;
    t54 = *((unsigned int *)t23);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB45:    *((unsigned int *)t41) = 1;
    goto LAB48;

LAB47:    t20 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB48;

LAB49:    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t23);
    *((unsigned int *)t47) = (t56 | t57);
    t58 = (t31 + 4);
    t59 = (t41 + 4);
    t60 = *((unsigned int *)t31);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t41);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t19 = (t61 & t63);
    t68 = (t65 & t67);
    t69 = (~(t19));
    t70 = (~(t68));
    t71 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t71 & t69);
    t72 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t72 & t70);
    t73 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t73 & t69);
    t74 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t74 & t70);
    goto LAB51;

LAB52:    *((unsigned int *)t75) = 1;
    goto LAB55;

LAB54:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB55;

LAB56:    t87 = (t0 + 2360);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = ((char*)((ng14)));
    memset(t91, 0, 8);
    xsi_vlog_signed_not_equal(t91, 32, t89, 32, t90, 32);
    memset(t92, 0, 8);
    t93 = (t91 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t91);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t93) != 0)
        goto LAB61;

LAB62:    t101 = *((unsigned int *)t75);
    t102 = *((unsigned int *)t92);
    t103 = (t101 & t102);
    *((unsigned int *)t100) = t103;
    t104 = (t75 + 4);
    t105 = (t92 + 4);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB58;

LAB59:    *((unsigned int *)t92) = 1;
    goto LAB62;

LAB61:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB62;

LAB63:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    t114 = (t75 + 4);
    t115 = (t92 + 4);
    t116 = *((unsigned int *)t75);
    t117 = (~(t116));
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t92);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (~(t122));
    t124 = (t117 & t119);
    t125 = (t121 & t123);
    t126 = (~(t124));
    t127 = (~(t125));
    t128 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t128 & t126);
    t129 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t129 & t127);
    t130 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t130 & t126);
    t131 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t131 & t127);
    goto LAB65;

LAB66:    *((unsigned int *)t132) = 1;
    goto LAB69;

LAB68:    t139 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB69;

LAB70:    t144 = (t0 + 2360);
    t145 = (t144 + 56U);
    t146 = *((char **)t145);
    t147 = ((char*)((ng15)));
    memset(t148, 0, 8);
    xsi_vlog_signed_not_equal(t148, 32, t146, 32, t147, 32);
    memset(t149, 0, 8);
    t150 = (t148 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t148);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t150) != 0)
        goto LAB75;

LAB76:    t158 = *((unsigned int *)t132);
    t159 = *((unsigned int *)t149);
    t160 = (t158 & t159);
    *((unsigned int *)t157) = t160;
    t161 = (t132 + 4);
    t162 = (t149 + 4);
    t163 = (t157 + 4);
    t164 = *((unsigned int *)t161);
    t165 = *((unsigned int *)t162);
    t166 = (t164 | t165);
    *((unsigned int *)t163) = t166;
    t167 = *((unsigned int *)t163);
    t168 = (t167 != 0);
    if (t168 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB72;

LAB73:    *((unsigned int *)t149) = 1;
    goto LAB76;

LAB75:    t156 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB76;

LAB77:    t169 = *((unsigned int *)t157);
    t170 = *((unsigned int *)t163);
    *((unsigned int *)t157) = (t169 | t170);
    t171 = (t132 + 4);
    t172 = (t149 + 4);
    t173 = *((unsigned int *)t132);
    t174 = (~(t173));
    t175 = *((unsigned int *)t171);
    t176 = (~(t175));
    t177 = *((unsigned int *)t149);
    t178 = (~(t177));
    t179 = *((unsigned int *)t172);
    t180 = (~(t179));
    t181 = (t174 & t176);
    t182 = (t178 & t180);
    t183 = (~(t181));
    t184 = (~(t182));
    t185 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t185 & t183);
    t186 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t186 & t184);
    t187 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t187 & t183);
    t188 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t188 & t184);
    goto LAB79;

LAB80:    *((unsigned int *)t189) = 1;
    goto LAB83;

LAB82:    t196 = (t189 + 4);
    *((unsigned int *)t189) = 1;
    *((unsigned int *)t196) = 1;
    goto LAB83;

LAB84:    t201 = (t0 + 2360);
    t202 = (t201 + 56U);
    t203 = *((char **)t202);
    t204 = ((char*)((ng16)));
    memset(t205, 0, 8);
    xsi_vlog_signed_not_equal(t205, 32, t203, 32, t204, 32);
    memset(t206, 0, 8);
    t207 = (t205 + 4);
    t208 = *((unsigned int *)t207);
    t209 = (~(t208));
    t210 = *((unsigned int *)t205);
    t211 = (t210 & t209);
    t212 = (t211 & 1U);
    if (t212 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t207) != 0)
        goto LAB89;

LAB90:    t215 = *((unsigned int *)t189);
    t216 = *((unsigned int *)t206);
    t217 = (t215 & t216);
    *((unsigned int *)t214) = t217;
    t218 = (t189 + 4);
    t219 = (t206 + 4);
    t220 = (t214 + 4);
    t221 = *((unsigned int *)t218);
    t222 = *((unsigned int *)t219);
    t223 = (t221 | t222);
    *((unsigned int *)t220) = t223;
    t224 = *((unsigned int *)t220);
    t225 = (t224 != 0);
    if (t225 == 1)
        goto LAB91;

LAB92:
LAB93:    goto LAB86;

LAB87:    *((unsigned int *)t206) = 1;
    goto LAB90;

LAB89:    t213 = (t206 + 4);
    *((unsigned int *)t206) = 1;
    *((unsigned int *)t213) = 1;
    goto LAB90;

LAB91:    t226 = *((unsigned int *)t214);
    t227 = *((unsigned int *)t220);
    *((unsigned int *)t214) = (t226 | t227);
    t228 = (t189 + 4);
    t229 = (t206 + 4);
    t230 = *((unsigned int *)t189);
    t231 = (~(t230));
    t232 = *((unsigned int *)t228);
    t233 = (~(t232));
    t234 = *((unsigned int *)t206);
    t235 = (~(t234));
    t236 = *((unsigned int *)t229);
    t237 = (~(t236));
    t238 = (t231 & t233);
    t239 = (t235 & t237);
    t240 = (~(t238));
    t241 = (~(t239));
    t242 = *((unsigned int *)t220);
    *((unsigned int *)t220) = (t242 & t240);
    t243 = *((unsigned int *)t220);
    *((unsigned int *)t220) = (t243 & t241);
    t244 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t244 & t240);
    t245 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t245 & t241);
    goto LAB93;

LAB94:    xsi_set_current_line(32, ng0);
    t253 = (t0 + 2360);
    t254 = (t253 + 56U);
    t255 = *((char **)t254);
    memset(t252, 0, 8);
    t256 = (t252 + 4);
    t257 = (t255 + 4);
    t258 = *((unsigned int *)t255);
    t259 = (t258 >> 0);
    *((unsigned int *)t252) = t259;
    t260 = *((unsigned int *)t257);
    t261 = (t260 >> 0);
    *((unsigned int *)t256) = t261;
    t262 = *((unsigned int *)t252);
    *((unsigned int *)t252) = (t262 & 15U);
    t263 = *((unsigned int *)t256);
    *((unsigned int *)t256) = (t263 & 15U);
    t264 = ((char*)((ng5)));
    t265 = ((char*)((ng17)));
    t266 = (t0 + 3560);
    t267 = (t0 + 848);
    t268 = xsi_create_subprogram_invocation(t266, 0, t0, t267, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t267, t268);
    t269 = (t0 + 2520);
    xsi_vlogvar_assign_value(t269, t252, 0, 0, 4);
    t270 = (t0 + 2680);
    xsi_vlogvar_assign_value(t270, t264, 0, 0, 1);
    t271 = (t0 + 2840);
    xsi_vlogvar_assign_value(t271, t265, 0, 0, 3);

LAB99:    t272 = (t0 + 3656);
    t273 = *((char **)t272);
    t274 = (t273 + 80U);
    t275 = *((char **)t274);
    t276 = (t275 + 272U);
    t277 = *((char **)t276);
    t278 = (t277 + 0U);
    t279 = *((char **)t278);
    t280 = ((int  (*)(char *, char *))t279)(t0, t273);

LAB101:    if (t280 != 0)
        goto LAB102;

LAB97:    t273 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t273);

LAB98:    t281 = (t0 + 3656);
    t282 = *((char **)t281);
    t281 = (t0 + 848);
    t283 = (t0 + 3560);
    t284 = 0;
    xsi_delete_subprogram_invocation(t281, t282, t0, t283, t284);
    goto LAB96;

LAB100:;
LAB102:    t272 = (t0 + 3752U);
    *((char **)t272) = &&LAB99;
    goto LAB1;

LAB103:    xsi_set_current_line(33, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    goto LAB105;

}


extern void work_m_00858927668449350342_3462480155_init()
{
	static char *pe[] = {(void *)Initial_23_0};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_00858927668449350342_3462480155", "isim/tb_control_unit_isim_beh.exe.sim/work/m_00858927668449350342_3462480155.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
