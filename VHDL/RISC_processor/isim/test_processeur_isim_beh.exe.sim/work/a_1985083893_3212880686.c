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
static const char *ng0 = "C:/Users/Anthony/Documents/GitHub/CCompilator/VHDL/RISC_processor/inst_pointer_IP.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1985083893_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(47, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3496);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3400);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1985083893_3212880686_p_1(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;

LAB0:    t1 = (t0 + 3080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);

LAB6:    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 3416);
    *((int *)t6) = 0;
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t8 = (t5 == (unsigned char)2);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 5692U);
    t7 = (t0 + 5727);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 7;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (7 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t6, t2, t7, t11);
    t3 = t9;

LAB16:    if (t3 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t5 = (t3 == (unsigned char)2);
    if (t5 != 0)
        goto LAB17;

LAB18:
LAB12:    goto LAB2;

LAB5:    t4 = (t0 + 1312U);
    t5 = xsi_signal_has_event(t4);
    if (t5 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB10;

LAB11:    xsi_set_current_line(57, ng0);
    t13 = (t0 + 5735);
    t17 = (t0 + 3560);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t13, 8U);
    xsi_driver_first_trans_fast(t17);
    goto LAB12;

LAB14:    t3 = (unsigned char)1;
    goto LAB16;

LAB17:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 5692U);
    t7 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t11, t6, t2, 1);
    t10 = (t11 + 12U);
    t15 = *((unsigned int *)t10);
    t22 = (1U * t15);
    t8 = (8U != t22);
    if (t8 == 1)
        goto LAB19;

LAB20:    t12 = (t0 + 3560);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB12;

LAB19:    xsi_size_not_matching(8U, t22, 0);
    goto LAB20;

}


extern void work_a_1985083893_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1985083893_3212880686_p_0,(void *)work_a_1985083893_3212880686_p_1};
	xsi_register_didat("work_a_1985083893_3212880686", "isim/test_processeur_isim_beh.exe.sim/work/a_1985083893_3212880686.didat");
	xsi_register_executes(pe);
}
