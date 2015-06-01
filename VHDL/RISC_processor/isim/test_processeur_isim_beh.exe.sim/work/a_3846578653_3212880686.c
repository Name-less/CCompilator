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
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned char t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;

LAB0:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 1032U);
    t7 = *((char **)t3);
    t3 = (t0 + 4881);
    t9 = 1;
    if (8U == 8U)
        goto LAB11;

LAB12:    t9 = 0;

LAB13:    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 1032U);
    t14 = *((char **)t13);
    t13 = (t0 + 4889);
    t16 = 1;
    if (8U == 8U)
        goto LAB17;

LAB18:    t16 = 0;

LAB19:    t1 = t16;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t29 = (t0 + 1032U);
    t30 = *((char **)t29);
    t29 = (t0 + 4900);
    t32 = 1;
    if (8U == 8U)
        goto LAB31;

LAB32:    t32 = 0;

LAB33:    if (t32 == 1)
        goto LAB28;

LAB29:    t36 = (t0 + 1032U);
    t37 = *((char **)t36);
    t36 = (t0 + 4908);
    t39 = 1;
    if (8U == 8U)
        goto LAB37;

LAB38:    t39 = 0;

LAB39:    t28 = t39;

LAB30:    if (t28 == 1)
        goto LAB25;

LAB26:    t43 = (t0 + 1032U);
    t44 = *((char **)t43);
    t43 = (t0 + 4916);
    t46 = 1;
    if (8U == 8U)
        goto LAB43;

LAB44:    t46 = 0;

LAB45:    t27 = t46;

LAB27:    if (t27 != 0)
        goto LAB23;

LAB24:
LAB49:    t60 = (t0 + 4924);
    t62 = (t0 + 3032);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memcpy(t66, t60, 3U);
    xsi_driver_first_trans_fast_port(t62);

LAB2:    t67 = (t0 + 2952);
    *((int *)t67) = 1;

LAB1:    return;
LAB3:    t20 = (t0 + 4897);
    t22 = (t0 + 3032);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 3U);
    xsi_driver_first_trans_fast_port(t22);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t10 = 0;

LAB14:    if (t10 < 8U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t11 = (t7 + t10);
    t12 = (t3 + t10);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB12;

LAB16:    t10 = (t10 + 1);
    goto LAB14;

LAB17:    t17 = 0;

LAB20:    if (t17 < 8U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t18 = (t14 + t17);
    t19 = (t13 + t17);
    if (*((unsigned char *)t18) != *((unsigned char *)t19))
        goto LAB18;

LAB22:    t17 = (t17 + 1);
    goto LAB20;

LAB23:    t50 = (t0 + 1032U);
    t51 = *((char **)t50);
    t52 = (7 - 2);
    t53 = (t52 * 1U);
    t54 = (0 + t53);
    t50 = (t51 + t54);
    t55 = (t0 + 3032);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memcpy(t59, t50, 3U);
    xsi_driver_first_trans_fast_port(t55);
    goto LAB2;

LAB25:    t27 = (unsigned char)1;
    goto LAB27;

LAB28:    t28 = (unsigned char)1;
    goto LAB30;

LAB31:    t33 = 0;

LAB34:    if (t33 < 8U)
        goto LAB35;
    else
        goto LAB33;

LAB35:    t34 = (t30 + t33);
    t35 = (t29 + t33);
    if (*((unsigned char *)t34) != *((unsigned char *)t35))
        goto LAB32;

LAB36:    t33 = (t33 + 1);
    goto LAB34;

LAB37:    t40 = 0;

LAB40:    if (t40 < 8U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t41 = (t37 + t40);
    t42 = (t36 + t40);
    if (*((unsigned char *)t41) != *((unsigned char *)t42))
        goto LAB38;

LAB42:    t40 = (t40 + 1);
    goto LAB40;

LAB43:    t47 = 0;

LAB46:    if (t47 < 8U)
        goto LAB47;
    else
        goto LAB45;

LAB47:    t48 = (t44 + t47);
    t49 = (t43 + t47);
    if (*((unsigned char *)t48) != *((unsigned char *)t49))
        goto LAB44;

LAB48:    t47 = (t47 + 1);
    goto LAB46;

LAB50:    goto LAB2;

}


extern void work_a_3846578653_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3846578653_3212880686_p_0};
	xsi_register_didat("work_a_3846578653_3212880686", "isim/test_processeur_isim_beh.exe.sim/work/a_3846578653_3212880686.didat");
	xsi_register_executes(pe);
}
