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
static const char *ng0 = "C:/Users/Anthony/Documents/GitHub/CCompilator/VHDL/RISC_processor/lc.vhd";



static void work_a_3846578653_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB6:    t2 = (t0 + 3112);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 3112);
    *((int *)t6) = 0;
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t8 = *((unsigned char *)t4);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t2 = (t0 + 5134);
    t10 = 1;
    if (8U == 8U)
        goto LAB20;

LAB21:    t10 = 0;

LAB22:    t5 = t10;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t14 = (t0 + 1032U);
    t15 = *((char **)t14);
    t14 = (t0 + 5142);
    t17 = 1;
    if (8U == 8U)
        goto LAB26;

LAB27:    t17 = 0;

LAB28:    t3 = t17;

LAB16:    if (t3 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 5153);
    t8 = 1;
    if (8U == 8U)
        goto LAB40;

LAB41:    t8 = 0;

LAB42:    if (t8 == 1)
        goto LAB37;

LAB38:    t13 = (t0 + 1032U);
    t14 = *((char **)t13);
    t13 = (t0 + 5161);
    t9 = 1;
    if (8U == 8U)
        goto LAB46;

LAB47:    t9 = 0;

LAB48:    t5 = t9;

LAB39:    if (t5 == 1)
        goto LAB34;

LAB35:    t20 = (t0 + 1032U);
    t21 = *((char **)t20);
    t20 = (t0 + 5169);
    t10 = 1;
    if (8U == 8U)
        goto LAB52;

LAB53:    t10 = 0;

LAB54:    t3 = t10;

LAB36:    if (t3 != 0)
        goto LAB32;

LAB33:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5177);
    t6 = (t0 + 3192);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 3U);
    xsi_driver_first_trans_fast_port(t6);

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

LAB11:    xsi_set_current_line(54, ng0);
    t21 = (t0 + 5150);
    t23 = (t0 + 3192);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t21, 3U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB12;

LAB14:    t3 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t11 = 0;

LAB23:    if (t11 < 8U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t12 = (t6 + t11);
    t13 = (t2 + t11);
    if (*((unsigned char *)t12) != *((unsigned char *)t13))
        goto LAB21;

LAB25:    t11 = (t11 + 1);
    goto LAB23;

LAB26:    t18 = 0;

LAB29:    if (t18 < 8U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t19 = (t15 + t18);
    t20 = (t14 + t18);
    if (*((unsigned char *)t19) != *((unsigned char *)t20))
        goto LAB27;

LAB31:    t18 = (t18 + 1);
    goto LAB29;

LAB32:    xsi_set_current_line(57, ng0);
    t25 = (t0 + 1032U);
    t26 = *((char **)t25);
    t29 = (7 - 2);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t25 = (t26 + t31);
    t27 = (t0 + 3192);
    t32 = (t27 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t25, 3U);
    xsi_driver_first_trans_fast_port(t27);
    goto LAB12;

LAB34:    t3 = (unsigned char)1;
    goto LAB36;

LAB37:    t5 = (unsigned char)1;
    goto LAB39;

LAB40:    t11 = 0;

LAB43:    if (t11 < 8U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t7 = (t4 + t11);
    t12 = (t2 + t11);
    if (*((unsigned char *)t7) != *((unsigned char *)t12))
        goto LAB41;

LAB45:    t11 = (t11 + 1);
    goto LAB43;

LAB46:    t18 = 0;

LAB49:    if (t18 < 8U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t16 = (t14 + t18);
    t19 = (t13 + t18);
    if (*((unsigned char *)t16) != *((unsigned char *)t19))
        goto LAB47;

LAB51:    t18 = (t18 + 1);
    goto LAB49;

LAB52:    t28 = 0;

LAB55:    if (t28 < 8U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t23 = (t21 + t28);
    t24 = (t20 + t28);
    if (*((unsigned char *)t23) != *((unsigned char *)t24))
        goto LAB53;

LAB57:    t28 = (t28 + 1);
    goto LAB55;

}


extern void work_a_3846578653_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3846578653_3212880686_p_0};
	xsi_register_didat("work_a_3846578653_3212880686", "isim/test_processeur_isim_beh.exe.sim/work/a_3846578653_3212880686.didat");
	xsi_register_executes(pe);
}
