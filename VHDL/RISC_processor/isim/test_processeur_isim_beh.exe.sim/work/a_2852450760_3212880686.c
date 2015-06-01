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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;

LAB0:    t1 = (t0 + 4312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = xsi_get_transient_memory(128U);
    memset(t2, 0, 128U);
    t3 = t2;
    t4 = (t0 + 9771);
    t6 = (8U != 0);
    if (t6 == 1)
        goto LAB4;

LAB5:    t8 = (t0 + 9779);
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t12 = (8U * t11);
    t13 = (t3 + t12);
    memcpy(t13, t8, 8U);
    t14 = (t0 + 9787);
    t16 = (1 - 0);
    t17 = (t16 * 1);
    t18 = (8U * t17);
    t19 = (t3 + t18);
    memcpy(t19, t14, 8U);
    t20 = (t0 + 5768);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t2, 128U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(75, ng0);

LAB8:    t2 = (t0 + 5624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB4:    t7 = (128U / 8U);
    xsi_mem_set_data(t3, t4, 8U, t7);
    goto LAB5;

LAB6:    t4 = (t0 + 5624);
    *((int *)t4) = 0;
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t25 = (t6 == (unsigned char)2);
    if (t25 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t25 = (t6 == (unsigned char)2);
    if (t25 != 0)
        goto LAB18;

LAB19:
LAB14:    goto LAB2;

LAB7:    t3 = (t0 + 1952U);
    t25 = xsi_signal_has_event(t3);
    if (t25 == 1)
        goto LAB10;

LAB11:    t6 = (unsigned char)0;

LAB12:    if (t6 == 1)
        goto LAB6;
    else
        goto LAB8;

LAB9:    goto LAB7;

LAB10:    t4 = (t0 + 1992U);
    t5 = *((char **)t4);
    t26 = *((unsigned char *)t5);
    t27 = (t26 == (unsigned char)3);
    t6 = t27;
    goto LAB12;

LAB13:    xsi_set_current_line(77, ng0);
    t2 = xsi_get_transient_memory(128U);
    memset(t2, 0, 128U);
    t4 = t2;
    t5 = (t0 + 9795);
    t26 = (8U != 0);
    if (t26 == 1)
        goto LAB16;

LAB17:    t9 = (t0 + 5768);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    memcpy(t19, t2, 128U);
    xsi_driver_first_trans_fast(t9);
    goto LAB14;

LAB16:    t7 = (128U / 8U);
    xsi_mem_set_data(t4, t5, 8U, t7);
    goto LAB17;

LAB18:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 9456U);
    t10 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t2);
    t16 = (t10 - 0);
    t7 = (t16 * 1);
    t11 = (8U * t7);
    t12 = (0U + t11);
    t8 = (t0 + 5768);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_delta(t8, t12, 8U, 0LL);
    goto LAB14;

}

static void work_a_2852450760_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned char t42;
    char *t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    char *t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;

LAB0:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:    t13 = (t0 + 1512U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 1)
        goto LAB10;

LAB11:    t12 = (unsigned char)0;

LAB12:    if (t12 == 1)
        goto LAB7;

LAB8:    t11 = (unsigned char)0;

LAB9:    if (t11 != 0)
        goto LAB5;

LAB6:    t33 = (t0 + 1352U);
    t34 = *((char **)t33);
    t33 = (t0 + 9456U);
    t35 = (t0 + 1032U);
    t36 = *((char **)t35);
    t35 = (t0 + 9424U);
    t37 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t34, t33, t36, t35);
    if (t37 == 1)
        goto LAB21;

LAB22:    t38 = (t0 + 1352U);
    t39 = *((char **)t38);
    t38 = (t0 + 9456U);
    t40 = (t0 + 1192U);
    t41 = *((char **)t40);
    t40 = (t0 + 9440U);
    t42 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t39, t38, t41, t40);
    t32 = t42;

LAB23:    if (t32 == 1)
        goto LAB18;

LAB19:    t31 = (unsigned char)0;

LAB20:    if (t31 == 1)
        goto LAB15;

LAB16:    t30 = (unsigned char)0;

LAB17:    if (t30 != 0)
        goto LAB13;

LAB14:
LAB2:    t63 = (t0 + 5640);
    *((int *)t63) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 9803);
    t6 = (t0 + 5832);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB5:    t21 = (t0 + 1672U);
    t25 = *((char **)t21);
    t21 = (t0 + 5832);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t25, 8U);
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

LAB7:    t21 = (t0 + 1832U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t11 = t24;
    goto LAB9;

LAB10:    t13 = (t0 + 1352U);
    t17 = *((char **)t13);
    t13 = (t0 + 9456U);
    t18 = (t0 + 1032U);
    t19 = *((char **)t18);
    t18 = (t0 + 9424U);
    t20 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t17, t13, t19, t18);
    t12 = t20;
    goto LAB12;

LAB13:    t43 = (t0 + 2472U);
    t50 = *((char **)t43);
    t43 = (t0 + 1032U);
    t51 = *((char **)t43);
    t43 = (t0 + 9424U);
    t52 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t51, t43);
    t53 = (t52 - 0);
    t54 = (t53 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t52);
    t55 = (8U * t54);
    t56 = (0 + t55);
    t57 = (t50 + t56);
    t58 = (t0 + 5832);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memcpy(t62, t57, 8U);
    xsi_driver_first_trans_fast(t58);
    goto LAB2;

LAB15:    t43 = (t0 + 1832U);
    t47 = *((char **)t43);
    t48 = *((unsigned char *)t47);
    t49 = (t48 == (unsigned char)3);
    t30 = t49;
    goto LAB17;

LAB18:    t43 = (t0 + 1512U);
    t44 = *((char **)t43);
    t45 = *((unsigned char *)t44);
    t46 = (t45 == (unsigned char)3);
    t31 = t46;
    goto LAB20;

LAB21:    t32 = (unsigned char)1;
    goto LAB23;

}

static void work_a_2852450760_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned char t42;
    char *t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    char *t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;

LAB0:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:    t13 = (t0 + 1512U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 1)
        goto LAB10;

LAB11:    t12 = (unsigned char)0;

LAB12:    if (t12 == 1)
        goto LAB7;

LAB8:    t11 = (unsigned char)0;

LAB9:    if (t11 != 0)
        goto LAB5;

LAB6:    t33 = (t0 + 1352U);
    t34 = *((char **)t33);
    t33 = (t0 + 9456U);
    t35 = (t0 + 1032U);
    t36 = *((char **)t35);
    t35 = (t0 + 9424U);
    t37 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t34, t33, t36, t35);
    if (t37 == 1)
        goto LAB21;

LAB22:    t38 = (t0 + 1352U);
    t39 = *((char **)t38);
    t38 = (t0 + 9456U);
    t40 = (t0 + 1192U);
    t41 = *((char **)t40);
    t40 = (t0 + 9440U);
    t42 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t39, t38, t41, t40);
    t32 = t42;

LAB23:    if (t32 == 1)
        goto LAB18;

LAB19:    t31 = (unsigned char)0;

LAB20:    if (t31 == 1)
        goto LAB15;

LAB16:    t30 = (unsigned char)0;

LAB17:    if (t30 != 0)
        goto LAB13;

LAB14:
LAB2:    t63 = (t0 + 5656);
    *((int *)t63) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 9811);
    t6 = (t0 + 5896);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB5:    t21 = (t0 + 1672U);
    t25 = *((char **)t21);
    t21 = (t0 + 5896);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t25, 8U);
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

LAB7:    t21 = (t0 + 1832U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t11 = t24;
    goto LAB9;

LAB10:    t13 = (t0 + 1352U);
    t17 = *((char **)t13);
    t13 = (t0 + 9456U);
    t18 = (t0 + 1192U);
    t19 = *((char **)t18);
    t18 = (t0 + 9440U);
    t20 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t17, t13, t19, t18);
    t12 = t20;
    goto LAB12;

LAB13:    t43 = (t0 + 2472U);
    t50 = *((char **)t43);
    t43 = (t0 + 1192U);
    t51 = *((char **)t43);
    t43 = (t0 + 9440U);
    t52 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t51, t43);
    t53 = (t52 - 0);
    t54 = (t53 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t52);
    t55 = (8U * t54);
    t56 = (0 + t55);
    t57 = (t50 + t56);
    t58 = (t0 + 5896);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memcpy(t62, t57, 8U);
    xsi_driver_first_trans_fast(t58);
    goto LAB2;

LAB15:    t43 = (t0 + 1832U);
    t47 = *((char **)t43);
    t48 = *((unsigned char *)t47);
    t49 = (t48 == (unsigned char)3);
    t30 = t49;
    goto LAB17;

LAB18:    t43 = (t0 + 1512U);
    t44 = *((char **)t43);
    t45 = *((unsigned char *)t44);
    t46 = (t45 == (unsigned char)3);
    t31 = t46;
    goto LAB20;

LAB21:    t32 = (unsigned char)1;
    goto LAB23;

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

LAB0:    xsi_set_current_line(95, ng0);

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

LAB0:    xsi_set_current_line(96, ng0);

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
