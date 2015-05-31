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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Anthony/Documents/GitHub/CCompilator/VHDL/RISC_processor/LI.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2802903546_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(55, ng0);

LAB3:    t1 = xsi_get_transient_memory(640U);
    memset(t1, 0, 640U);
    t2 = t1;
    t3 = (t0 + 7238);
    t5 = (32U != 0);
    if (t5 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 7270);
    t9 = (0 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (t2 + t11);
    memcpy(t12, t7, 32U);
    t13 = (t0 + 3840);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 640U);
    xsi_driver_first_trans_fast(t13);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t6 = (640U / 32U);
    xsi_mem_set_data(t2, t3, 32U, t6);
    goto LAB6;

}

static void work_a_2802903546_3212880686_p_1(char *t0)
{
    char t21[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);

LAB6:    t2 = (t0 + 3760);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 3760);
    *((int *)t6) = 0;
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t5 = (t3 == (unsigned char)2);
    if (t5 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t2 = (t0 + 6504U);
    t7 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t21, t6, t2, 1);
    t10 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t7, t21);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 19, 1, t10);
    t13 = (32U * t12);
    t14 = (0 + t13);
    t15 = (t4 + t14);
    t16 = (t0 + 3904);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t15, 32U);
    xsi_driver_first_trans_fast_port(t16);

LAB12:    goto LAB2;

LAB5:    t4 = (t0 + 1472U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB11:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t2 = (t0 + 6504U);
    t10 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t7, t2);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 19, 1, t10);
    t13 = (32U * t12);
    t14 = (0 + t13);
    t15 = (t6 + t14);
    t16 = (t0 + 3904);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t15, 32U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB12;

}


extern void work_a_2802903546_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2802903546_3212880686_p_0,(void *)work_a_2802903546_3212880686_p_1};
	xsi_register_didat("work_a_2802903546_3212880686", "isim/test_processeur_isim_beh.exe.sim/work/a_2802903546_3212880686.didat");
	xsi_register_executes(pe);
}
