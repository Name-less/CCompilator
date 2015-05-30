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
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);

LAB6:    t2 = (t0 + 2952);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 2952);
    *((int *)t6) = 0;
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 4897);
    t5 = 1;
    if (8U == 8U)
        goto LAB17;

LAB18:    t5 = 0;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t12 = (t0 + 1032U);
    t13 = *((char **)t12);
    t12 = (t0 + 4905);
    t8 = 1;
    if (8U == 8U)
        goto LAB23;

LAB24:    t8 = 0;

LAB25:    t3 = t8;

LAB16:    if (t3 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t2 = (t0 + 4916);
    t8 = 1;
    if (8U == 8U)
        goto LAB37;

LAB38:    t8 = 0;

LAB39:    if (t8 == 1)
        goto LAB34;

LAB35:    t12 = (t0 + 1032U);
    t13 = *((char **)t12);
    t12 = (t0 + 4924);
    t9 = 1;
    if (8U == 8U)
        goto LAB43;

LAB44:    t9 = 0;

LAB45:    t5 = t9;

LAB36:    if (t5 == 1)
        goto LAB31;

LAB32:    t18 = (t0 + 1032U);
    t19 = *((char **)t18);
    t18 = (t0 + 4932);
    t25 = 1;
    if (8U == 8U)
        goto LAB49;

LAB50:    t25 = 0;

LAB51:    t3 = t25;

LAB33:    if (t3 != 0)
        goto LAB29;

LAB30:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4940);
    t6 = (t0 + 3032);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 3U);
    xsi_driver_first_trans_fast_port(t6);

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

LAB11:    xsi_set_current_line(53, ng0);
    t18 = (t0 + 4913);
    t20 = (t0 + 3032);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 3U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB12;

LAB14:    t3 = (unsigned char)1;
    goto LAB16;

LAB17:    t10 = 0;

LAB20:    if (t10 < 8U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t7 = (t4 + t10);
    t11 = (t2 + t10);
    if (*((unsigned char *)t7) != *((unsigned char *)t11))
        goto LAB18;

LAB22:    t10 = (t10 + 1);
    goto LAB20;

LAB23:    t15 = 0;

LAB26:    if (t15 < 8U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t16 = (t13 + t15);
    t17 = (t12 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB24;

LAB28:    t15 = (t15 + 1);
    goto LAB26;

LAB29:    xsi_set_current_line(56, ng0);
    t23 = (t0 + 1032U);
    t24 = *((char **)t23);
    t27 = (7 - 2);
    t28 = (t27 * 1U);
    t29 = (0 + t28);
    t23 = (t24 + t29);
    t30 = (t0 + 3032);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t23, 3U);
    xsi_driver_first_trans_fast_port(t30);
    goto LAB12;

LAB31:    t3 = (unsigned char)1;
    goto LAB33;

LAB34:    t5 = (unsigned char)1;
    goto LAB36;

LAB37:    t10 = 0;

LAB40:    if (t10 < 8U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t7 = (t4 + t10);
    t11 = (t2 + t10);
    if (*((unsigned char *)t7) != *((unsigned char *)t11))
        goto LAB38;

LAB42:    t10 = (t10 + 1);
    goto LAB40;

LAB43:    t15 = 0;

LAB46:    if (t15 < 8U)
        goto LAB47;
    else
        goto LAB45;

LAB47:    t16 = (t13 + t15);
    t17 = (t12 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB44;

LAB48:    t15 = (t15 + 1);
    goto LAB46;

LAB49:    t26 = 0;

LAB52:    if (t26 < 8U)
        goto LAB53;
    else
        goto LAB51;

LAB53:    t21 = (t19 + t26);
    t22 = (t18 + t26);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB50;

LAB54:    t26 = (t26 + 1);
    goto LAB52;

}


extern void work_a_3846578653_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3846578653_3212880686_p_0};
	xsi_register_didat("work_a_3846578653_3212880686", "isim/test_processeur_isim_beh.exe.sim/work/a_3846578653_3212880686.didat");
	xsi_register_executes(pe);
}
