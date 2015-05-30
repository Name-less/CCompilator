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
static const char *ng0 = "C:/Users/Anthony/Documents/GitHub/CCompilator/VHDL/RISC_processor/DI.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2852450760_3212880686_p_0(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;

LAB0:    t1 = (t0 + 4312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = xsi_get_transient_memory(128U);
    memset(t2, 0, 128U);
    t3 = t2;
    t4 = (t0 + 9771);
    t6 = (8U != 0);
    if (t6 == 1)
        goto LAB4;

LAB5:    t8 = (t0 + 5768);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 128U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(76, ng0);

LAB8:    t2 = (t0 + 5624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB4:    t7 = (128U / 8U);
    xsi_mem_set_data(t3, t4, 8U, t7);
    goto LAB5;

LAB6:    t4 = (t0 + 5624);
    *((int *)t4) = 0;
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t13 = (t6 == (unsigned char)2);
    if (t13 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB18;

LAB19:
LAB14:    goto LAB2;

LAB7:    t3 = (t0 + 1952U);
    t13 = xsi_signal_has_event(t3);
    if (t13 == 1)
        goto LAB10;

LAB11:    t6 = (unsigned char)0;

LAB12:    if (t6 == 1)
        goto LAB6;
    else
        goto LAB8;

LAB9:    goto LAB7;

LAB10:    t4 = (t0 + 1992U);
    t5 = *((char **)t4);
    t14 = *((unsigned char *)t5);
    t15 = (t14 == (unsigned char)3);
    t6 = t15;
    goto LAB12;

LAB13:    xsi_set_current_line(78, ng0);
    t2 = xsi_get_transient_memory(128U);
    memset(t2, 0, 128U);
    t4 = t2;
    t5 = (t0 + 9779);
    t14 = (8U != 0);
    if (t14 == 1)
        goto LAB16;

LAB17:    t9 = (t0 + 5768);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t2, 128U);
    xsi_driver_first_trans_fast(t9);
    goto LAB14;

LAB16:    t7 = (128U / 8U);
    xsi_mem_set_data(t4, t5, 8U, t7);
    goto LAB17;

LAB18:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 9456U);
    t17 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t2);
    t18 = (t17 - 0);
    t7 = (t18 * 1);
    t19 = (8U * t7);
    t20 = (0U + t19);
    t8 = (t0 + 5768);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_delta(t8, t20, 8U, 0LL);
    goto LAB14;

}

static void work_a_2852450760_3212880686_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    unsigned char t38;
    unsigned char t39;
    char *t40;
    char *t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t23 = (t0 + 1352U);
    t24 = *((char **)t23);
    t23 = (t0 + 9456U);
    t25 = (t0 + 1032U);
    t26 = *((char **)t25);
    t25 = (t0 + 9424U);
    t27 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t24, t23, t26, t25);
    if (t27 == 1)
        goto LAB19;

LAB20:    t28 = (t0 + 1352U);
    t29 = *((char **)t28);
    t28 = (t0 + 9456U);
    t30 = (t0 + 1192U);
    t31 = *((char **)t30);
    t30 = (t0 + 9440U);
    t32 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t29, t28, t31, t30);
    t22 = t32;

LAB21:    if (t22 == 1)
        goto LAB16;

LAB17:    t21 = (unsigned char)0;

LAB18:    if (t21 == 1)
        goto LAB13;

LAB14:    t20 = (unsigned char)0;

LAB15:    if (t20 != 0)
        goto LAB11;

LAB12:
LAB2:    t53 = (t0 + 5640);
    *((int *)t53) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 1672U);
    t15 = *((char **)t11);
    t11 = (t0 + 5832);
    t16 = (t11 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 8U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB5:    t11 = (t0 + 1832U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    t3 = (t0 + 1352U);
    t7 = *((char **)t3);
    t3 = (t0 + 9456U);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t8 = (t0 + 9424U);
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t3, t9, t8);
    t2 = t10;
    goto LAB10;

LAB11:    t33 = (t0 + 2472U);
    t40 = *((char **)t33);
    t33 = (t0 + 1032U);
    t41 = *((char **)t33);
    t33 = (t0 + 9424U);
    t42 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t41, t33);
    t43 = (t42 - 0);
    t44 = (t43 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t42);
    t45 = (8U * t44);
    t46 = (0 + t45);
    t47 = (t40 + t46);
    t48 = (t0 + 5832);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memcpy(t52, t47, 8U);
    xsi_driver_first_trans_fast(t48);
    goto LAB2;

LAB13:    t33 = (t0 + 1832U);
    t37 = *((char **)t33);
    t38 = *((unsigned char *)t37);
    t39 = (t38 == (unsigned char)3);
    t20 = t39;
    goto LAB15;

LAB16:    t33 = (t0 + 1512U);
    t34 = *((char **)t33);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)2);
    t21 = t36;
    goto LAB18;

LAB19:    t22 = (unsigned char)1;
    goto LAB21;

}

static void work_a_2852450760_3212880686_p_2(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    unsigned char t38;
    unsigned char t39;
    char *t40;
    char *t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t23 = (t0 + 1352U);
    t24 = *((char **)t23);
    t23 = (t0 + 9456U);
    t25 = (t0 + 1032U);
    t26 = *((char **)t25);
    t25 = (t0 + 9424U);
    t27 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t24, t23, t26, t25);
    if (t27 == 1)
        goto LAB19;

LAB20:    t28 = (t0 + 1352U);
    t29 = *((char **)t28);
    t28 = (t0 + 9456U);
    t30 = (t0 + 1192U);
    t31 = *((char **)t30);
    t30 = (t0 + 9440U);
    t32 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t29, t28, t31, t30);
    t22 = t32;

LAB21:    if (t22 == 1)
        goto LAB16;

LAB17:    t21 = (unsigned char)0;

LAB18:    if (t21 == 1)
        goto LAB13;

LAB14:    t20 = (unsigned char)0;

LAB15:    if (t20 != 0)
        goto LAB11;

LAB12:
LAB2:    t53 = (t0 + 5656);
    *((int *)t53) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 1672U);
    t15 = *((char **)t11);
    t11 = (t0 + 5896);
    t16 = (t11 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 8U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB5:    t11 = (t0 + 1832U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB8:    t3 = (t0 + 1352U);
    t7 = *((char **)t3);
    t3 = (t0 + 9456U);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t8 = (t0 + 9440U);
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t3, t9, t8);
    t2 = t10;
    goto LAB10;

LAB11:    t33 = (t0 + 2472U);
    t40 = *((char **)t33);
    t33 = (t0 + 1192U);
    t41 = *((char **)t33);
    t33 = (t0 + 9440U);
    t42 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t41, t33);
    t43 = (t42 - 0);
    t44 = (t43 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t42);
    t45 = (8U * t44);
    t46 = (0 + t45);
    t47 = (t40 + t46);
    t48 = (t0 + 5896);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memcpy(t52, t47, 8U);
    xsi_driver_first_trans_fast(t48);
    goto LAB2;

LAB13:    t33 = (t0 + 1832U);
    t37 = *((char **)t33);
    t38 = *((unsigned char *)t37);
    t39 = (t38 == (unsigned char)3);
    t20 = t39;
    goto LAB15;

LAB16:    t33 = (t0 + 1512U);
    t34 = *((char **)t33);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)2);
    t21 = t36;
    goto LAB18;

LAB19:    t22 = (unsigned char)1;
    goto LAB21;

}

static void work_a_2852450760_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(92, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5672);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2852450760_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(93, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 6024);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5688);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2852450760_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2852450760_3212880686_p_0,(void *)work_a_2852450760_3212880686_p_1,(void *)work_a_2852450760_3212880686_p_2,(void *)work_a_2852450760_3212880686_p_3,(void *)work_a_2852450760_3212880686_p_4};
	xsi_register_didat("work_a_2852450760_3212880686", "isim/test_processeur_isim_beh.exe.sim/work/a_2852450760_3212880686.didat");
	xsi_register_executes(pe);
}
