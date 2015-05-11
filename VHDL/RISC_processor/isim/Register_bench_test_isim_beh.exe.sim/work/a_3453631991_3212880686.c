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

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/laloy/CCompilator/VHDL/RISC_processor/DI.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);


static void work_a_3453631991_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;

LAB0:    t1 = (t0 + 2252U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = xsi_get_transient_memory(128U);
    memset(t2, 0, 128U);
    t3 = t2;
    t4 = (t0 + 5631);
    t6 = (8U != 0);
    if (t6 == 1)
        goto LAB4;

LAB5:    t8 = (t0 + 5639);
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t12 = (8U * t11);
    t13 = (t3 + t12);
    memcpy(t13, t8, 8U);
    t14 = (t0 + 5647);
    t16 = (1 - 0);
    t17 = (t16 * 1);
    t18 = (8U * t17);
    t19 = (t3 + t18);
    memcpy(t19, t14, 8U);
    t20 = (t0 + 5655);
    t22 = (2 - 0);
    t23 = (t22 * 1);
    t24 = (8U * t23);
    t25 = (t3 + t24);
    memcpy(t25, t20, 8U);
    t26 = (t0 + 3052);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 32U);
    t30 = *((char **)t29);
    memcpy(t30, t2, 128U);
    xsi_driver_first_trans_fast(t26);
    xsi_set_current_line(70, ng0);

LAB8:    t2 = (t0 + 2976);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB4:    t7 = (128U / 8U);
    xsi_mem_set_data(t3, t4, 8U, t7);
    goto LAB5;

LAB6:    t4 = (t0 + 2976);
    *((int *)t4) = 0;
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1052U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t31 = (t6 == (unsigned char)2);
    if (t31 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t31 = (t6 == (unsigned char)3);
    if (t31 != 0)
        goto LAB18;

LAB19:
LAB14:    goto LAB2;

LAB7:    t3 = (t0 + 1120U);
    t31 = xsi_signal_has_event(t3);
    if (t31 == 1)
        goto LAB10;

LAB11:    t6 = (unsigned char)0;

LAB12:    if (t6 == 1)
        goto LAB6;
    else
        goto LAB8;

LAB9:    goto LAB7;

LAB10:    t4 = (t0 + 1144U);
    t5 = *((char **)t4);
    t32 = *((unsigned char *)t5);
    t33 = (t32 == (unsigned char)3);
    t6 = t33;
    goto LAB12;

LAB13:    xsi_set_current_line(72, ng0);
    t2 = xsi_get_transient_memory(128U);
    memset(t2, 0, 128U);
    t4 = t2;
    t5 = (t0 + 5663);
    t32 = (8U != 0);
    if (t32 == 1)
        goto LAB16;

LAB17:    t9 = (t0 + 3052);
    t13 = (t9 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t19 = *((char **)t15);
    memcpy(t19, t2, 128U);
    xsi_driver_first_trans_fast(t9);
    goto LAB14;

LAB16:    t7 = (128U / 8U);
    xsi_mem_set_data(t4, t5, 8U, t7);
    goto LAB17;

LAB18:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t2 = (t0 + 5328U);
    t10 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t5, t2);
    t16 = (t10 - 0);
    t7 = (t16 * 1);
    t11 = (8U * t7);
    t12 = (0U + t11);
    t8 = (t0 + 3052);
    t9 = (t8 + 32U);
    t13 = *((char **)t9);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_delta(t8, t12, 8U, 0LL);
    goto LAB14;

}

static void work_a_3453631991_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 776U);
    t19 = *((char **)t18);
    t18 = (t0 + 5328U);
    t20 = (t0 + 592U);
    t21 = *((char **)t20);
    t20 = (t0 + 5296U);
    t22 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t19, t18, t21, t20);
    if (t22 == 1)
        goto LAB13;

LAB14:    t23 = (t0 + 776U);
    t24 = *((char **)t23);
    t23 = (t0 + 5328U);
    t25 = (t0 + 684U);
    t26 = *((char **)t25);
    t25 = (t0 + 5312U);
    t27 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t24, t23, t26, t25);
    t17 = t27;

LAB15:    if (t17 == 1)
        goto LAB10;

LAB11:    t16 = (unsigned char)0;

LAB12:    if (t16 != 0)
        goto LAB8;

LAB9:
LAB2:    t45 = (t0 + 2984);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t10 = (t0 + 960U);
    t11 = *((char **)t10);
    t10 = (t0 + 3088);
    t12 = (t10 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t2 = (t0 + 5328U);
    t7 = (t0 + 592U);
    t8 = *((char **)t7);
    t7 = (t0 + 5296U);
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t6, t2, t8, t7);
    t1 = t9;
    goto LAB7;

LAB8:    t28 = (t0 + 1420U);
    t32 = *((char **)t28);
    t28 = (t0 + 592U);
    t33 = *((char **)t28);
    t28 = (t0 + 5296U);
    t34 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t33, t28);
    t35 = (t34 - 0);
    t36 = (t35 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t34);
    t37 = (8U * t36);
    t38 = (0 + t37);
    t39 = (t32 + t38);
    t40 = (t0 + 3088);
    t41 = (t40 + 32U);
    t42 = *((char **)t41);
    t43 = (t42 + 32U);
    t44 = *((char **)t43);
    memcpy(t44, t39, 8U);
    xsi_driver_first_trans_fast(t40);
    goto LAB2;

LAB10:    t28 = (t0 + 868U);
    t29 = *((char **)t28);
    t30 = *((unsigned char *)t29);
    t31 = (t30 == (unsigned char)2);
    t16 = t31;
    goto LAB12;

LAB13:    t17 = (unsigned char)1;
    goto LAB15;

}

static void work_a_3453631991_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 776U);
    t19 = *((char **)t18);
    t18 = (t0 + 5328U);
    t20 = (t0 + 592U);
    t21 = *((char **)t20);
    t20 = (t0 + 5296U);
    t22 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t19, t18, t21, t20);
    if (t22 == 1)
        goto LAB13;

LAB14:    t23 = (t0 + 776U);
    t24 = *((char **)t23);
    t23 = (t0 + 5328U);
    t25 = (t0 + 684U);
    t26 = *((char **)t25);
    t25 = (t0 + 5312U);
    t27 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t24, t23, t26, t25);
    t17 = t27;

LAB15:    if (t17 == 1)
        goto LAB10;

LAB11:    t16 = (unsigned char)0;

LAB12:    if (t16 != 0)
        goto LAB8;

LAB9:
LAB2:    t45 = (t0 + 2992);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t10 = (t0 + 960U);
    t11 = *((char **)t10);
    t10 = (t0 + 3124);
    t12 = (t10 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t2 = (t0 + 5328U);
    t7 = (t0 + 684U);
    t8 = *((char **)t7);
    t7 = (t0 + 5312U);
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t6, t2, t8, t7);
    t1 = t9;
    goto LAB7;

LAB8:    t28 = (t0 + 1420U);
    t32 = *((char **)t28);
    t28 = (t0 + 684U);
    t33 = *((char **)t28);
    t28 = (t0 + 5312U);
    t34 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t33, t28);
    t35 = (t34 - 0);
    t36 = (t35 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t34);
    t37 = (8U * t36);
    t38 = (0 + t37);
    t39 = (t32 + t38);
    t40 = (t0 + 3124);
    t41 = (t40 + 32U);
    t42 = *((char **)t41);
    t43 = (t42 + 32U);
    t44 = *((char **)t43);
    memcpy(t44, t39, 8U);
    xsi_driver_first_trans_fast(t40);
    goto LAB2;

LAB10:    t28 = (t0 + 868U);
    t29 = *((char **)t28);
    t30 = *((unsigned char *)t29);
    t31 = (t30 == (unsigned char)2);
    t16 = t31;
    goto LAB12;

LAB13:    t17 = (unsigned char)1;
    goto LAB15;

}

static void work_a_3453631991_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(92, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3160);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3000);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3453631991_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(93, ng0);

LAB3:    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 3196);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3008);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3453631991_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3453631991_3212880686_p_0,(void *)work_a_3453631991_3212880686_p_1,(void *)work_a_3453631991_3212880686_p_2,(void *)work_a_3453631991_3212880686_p_3,(void *)work_a_3453631991_3212880686_p_4};
	xsi_register_didat("work_a_3453631991_3212880686", "isim/Register_bench_test_isim_beh.exe.sim/work/a_3453631991_3212880686.didat");
	xsi_register_executes(pe);
}
