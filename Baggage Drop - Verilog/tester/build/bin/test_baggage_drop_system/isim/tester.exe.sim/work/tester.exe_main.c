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
    reference_m_00000000001121380327_1082347310_init();
    reference_m_00000000000936736865_0003763120_init();
    reference_m_00000000002039363129_2930187022_init();
    reference_m_00000000002078861663_0718074847_init();
    uut_m_00000000004151461737_3166864719_init();
    uut_m_00000000004281428186_1428314649_init();
    uut_m_00000000000591346338_3085653881_init();
    uut_m_00000000001934897481_3128675081_init();
    tester_m_00000000004262489423_2613777659_init();
    test_m_00000000000313380017_1985558087_init();


    xsi_register_tops("test_m_00000000000313380017_1985558087");


    return xsi_run_simulation(argc, argv);

}
