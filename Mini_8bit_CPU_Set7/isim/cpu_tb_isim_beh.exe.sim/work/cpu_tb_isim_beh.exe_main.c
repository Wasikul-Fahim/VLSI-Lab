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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_13913137079546480140_3381898454_init();
    work_m_03210319876511688867_3133866115_init();
    work_m_14141043853523285494_1351276808_init();
    work_m_17512050487990923133_2725559894_init();
    work_m_02112723991335388646_1756712915_init();
    work_m_15621517328291702494_0924832676_init();
    work_m_07338045027662865593_1912994691_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_07338045027662865593_1912994691");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
