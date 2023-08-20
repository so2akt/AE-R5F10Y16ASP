/************************************************************************/
/* Header file generated from device file:                              */
/*    DR5F10Y16.DVF                                                     */
/*    V1.03 (2016/10/04)                                                */
/*    Copyright(C) 2016 Renesas                                         */
/* Tool Version: 4.0.0                                                  */
/* Date Generated: 2020/01/17                                           */
/************************************************************************/
#ifndef INTERRUPT_HANDLERS_H
#define INTERRUPT_HANDLERS_H

/*
 * INT_WDTI (0x4)
 */
void INT_WDTI(void) __attribute__ ((interrupt));

/*
 * INT_P0 (0x6)
 */
void INT_P0(void) __attribute__ ((interrupt));

/*
 * INT_P1 (0x8)
 */
void INT_P1(void) __attribute__ ((interrupt));

/*
 * INT_CSI00/INT_IIC00/INT_ST0 (0xA)
 */
void INT_ST0(void) __attribute__ ((interrupt));
//void INT_CSI00(void) __attribute__ ((interrupt));
//void INT_IIC00(void) __attribute__ ((interrupt));

/*
 * INT_SR0 (0xC)
 */
void INT_SR0(void) __attribute__ ((interrupt));

/*
 * INT_SRE0 (0xE)
 */
void INT_SRE0(void) __attribute__ ((interrupt));

/*
 * INT_TM01H (0x10)
 */
void INT_TM01H(void) __attribute__ ((interrupt));

/*
 * INT_TM00 (0x12)
 */
void INT_TM00(void) __attribute__ ((interrupt));

/*
 * INT_TM01 (0x14)
 */
void INT_TM01(void) __attribute__ ((interrupt));

/*
 * INT_AD (0x16)
 */
void INT_AD(void) __attribute__ ((interrupt));

/*
 * INT_KR (0x18)
 */
void INT_KR(void) __attribute__ ((interrupt));

/*
 * INT_BRK_I (0x7E)
 */
void INT_BRK_I(void) __attribute__ ((interrupt));

//Hardware Vectors
//PowerON_Reset (0x0)
void PowerON_Reset(void) __attribute__ ((interrupt));
#endif
