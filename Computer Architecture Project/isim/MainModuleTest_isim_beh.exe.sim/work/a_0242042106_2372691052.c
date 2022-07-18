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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Dropbox/FCIS/2014 - 2015/Computer Architectures/Practical Exam/Practical Exam Template/Template/MainModuleTest.vhd";



static void work_a_0242042106_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned int t11;

LAB0:    t1 = (t0 + 2352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2160);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4936);
    t5 = (t0 + 2736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 12U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(76, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2160);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4948);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 4953);
    t10 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t10 = 0;

LAB16:    if (t10 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(80, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 2160);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t8 = (t0 + 4957);
    xsi_report(t8, 6U, (unsigned char)2);
    goto LAB13;

LAB14:    t11 = 0;

LAB17:    if (t11 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB15;

LAB19:    t11 = (t11 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4963);
    t5 = (t0 + 2736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 12U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(84, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2160);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4975);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 4980);
    t10 = 1;
    if (4U == 4U)
        goto LAB30;

LAB31:    t10 = 0;

LAB32:    if (t10 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(88, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 2160);
    xsi_process_wait(t2, t3);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t8 = (t0 + 4984);
    xsi_report(t8, 6U, (unsigned char)2);
    goto LAB29;

LAB30:    t11 = 0;

LAB33:    if (t11 < 4U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB31;

LAB35:    t11 = (t11 + 1);
    goto LAB33;

LAB36:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4990);
    t5 = (t0 + 2736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 12U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(92, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2160);
    xsi_process_wait(t2, t3);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5002);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 5007);
    t10 = 1;
    if (4U == 4U)
        goto LAB46;

LAB47:    t10 = 0;

LAB48:    if (t10 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(96, ng0);
    t3 = (1 * 1000LL);
    t2 = (t0 + 2160);
    xsi_process_wait(t2, t3);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t8 = (t0 + 5011);
    xsi_report(t8, 6U, (unsigned char)2);
    goto LAB45;

LAB46:    t11 = 0;

LAB49:    if (t11 < 4U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB47;

LAB51:    t11 = (t11 + 1);
    goto LAB49;

LAB52:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5017);
    xsi_report(t2, 13U, 0);
    xsi_set_current_line(100, ng0);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    goto LAB2;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

}


extern void work_a_0242042106_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0242042106_2372691052_p_0};
	xsi_register_didat("work_a_0242042106_2372691052", "isim/MainModuleTest_isim_beh.exe.sim/work/a_0242042106_2372691052.didat");
	xsi_register_executes(pe);
}
