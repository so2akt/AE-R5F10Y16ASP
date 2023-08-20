/************************************************************************/
/* Header file generated from device file:                              */
/*    DR5F10Y16.DVF                                                     */
/*    V1.03a (2021/06/11)                                               */
/*    Copyright(C) 2021 Renesas                                         */
/* Tool Version: 4.0.5                                                  */
/* Date Generated: 2021/03/09                                           */
/************************************************************************/

#ifndef __INTRINSIC_FUNCTIONS
#define __INTRINSIC_FUNCTIONS

#define DI() asm("di")
#define EI() asm("ei")
#define HALT() asm("halt")
#define NOP() asm("nop")
#define STOP() asm("stop")

#endif

#ifndef __IOREG_BIT_STRUCTURES
#define __IOREG_BIT_STRUCTURES
typedef struct {
	unsigned char no0 :1;
	unsigned char no1 :1;
	unsigned char no2 :1;
	unsigned char no3 :1;
	unsigned char no4 :1;
	unsigned char no5 :1;
	unsigned char no6 :1;
	unsigned char no7 :1;
} __BITS8;

typedef struct {
	unsigned short no0 :1;
	unsigned short no1 :1;
	unsigned short no2 :1;
	unsigned short no3 :1;
	unsigned short no4 :1;
	unsigned short no5 :1;
	unsigned short no6 :1;
	unsigned short no7 :1;
	unsigned short no8 :1;
	unsigned short no9 :1;
	unsigned short no10 :1;
	unsigned short no11 :1;
	unsigned short no12 :1;
	unsigned short no13 :1;
	unsigned short no14 :1;
	unsigned short no15 :1;
} __BITS16;

#endif

#ifndef IODEFINE_H
#define IODEFINE_H

/*
 IO Registers
 */
union un_p0 {
	unsigned char p0;
	__BITS8 BIT;
};
union un_p4 {
	unsigned char p4;
	__BITS8 BIT;
};
union un_p12 {
	unsigned char p12;
	__BITS8 BIT;
};
union un_p13 {
	unsigned char p13;
	__BITS8 BIT;
};
union un_pm0 {
	unsigned char pm0;
	__BITS8 BIT;
};
union un_pm4 {
	unsigned char pm4;
	__BITS8 BIT;
};
union un_adm0 {
	unsigned char adm0;
	__BITS8 BIT;
};
union un_ads {
	unsigned char ads;
	__BITS8 BIT;
};
union un_krctl {
	unsigned char krctl;
	__BITS8 BIT;
};
union un_krm0 {
	unsigned char krm0;
	__BITS8 BIT;
};
union un_egp0 {
	unsigned char egp0;
	__BITS8 BIT;
};
union un_egn0 {
	unsigned char egn0;
	__BITS8 BIT;
};
union un_cks0 {
	unsigned char cks0;
	__BITS8 BIT;
};
union un_if0l {
	unsigned char if0l;
	__BITS8 BIT;
};
union un_if0h {
	unsigned char if0h;
	__BITS8 BIT;
};
union un_mk0l {
	unsigned char mk0l;
	__BITS8 BIT;
};
union un_mk0h {
	unsigned char mk0h;
	__BITS8 BIT;
};
union un_pr00l {
	unsigned char pr00l;
	__BITS8 BIT;
};
union un_pr00h {
	unsigned char pr00h;
	__BITS8 BIT;
};
union un_pr10l {
	unsigned char pr10l;
	__BITS8 BIT;
};
union un_pr10h {
	unsigned char pr10h;
	__BITS8 BIT;
};
union un_pmc {
	unsigned char pmc;
	__BITS8 BIT;
};

#define P0 (*(volatile union un_p0 *)0xFFF00).p0
#define P0_bit (*(volatile union un_p0 *)0xFFF00).BIT
#define P4 (*(volatile union un_p4 *)0xFFF04).p4
#define P4_bit (*(volatile union un_p4 *)0xFFF04).BIT
#define P12 (*(volatile union un_p12 *)0xFFF0C).p12
#define P12_bit (*(volatile union un_p12 *)0xFFF0C).BIT
#define P13 (*(volatile union un_p13 *)0xFFF0D).p13
#define P13_bit (*(volatile union un_p13 *)0xFFF0D).BIT
#define SDR00L (*(volatile unsigned char *)0xFFF10)
#define SIO00 (*(volatile unsigned char *)0xFFF10)
#define TXD0 (*(volatile unsigned char *)0xFFF10)
#define SDR00H (*(volatile unsigned char *)0xFFF11)
#define RXD0 (*(volatile unsigned char *)0xFFF12)
#define SDR01L (*(volatile unsigned char *)0xFFF12)
#define SDR01H (*(volatile unsigned char *)0xFFF13)
#define TDR00L (*(volatile unsigned char *)0xFFF18)
#define TDR00H (*(volatile unsigned char *)0xFFF19)
#define TDR01L (*(volatile unsigned char *)0xFFF1A)
#define TDR01H (*(volatile unsigned char *)0xFFF1B)
#define ADCRL (*(volatile unsigned char *)0xFFF1E)
#define ADCRH (*(volatile unsigned char *)0xFFF1F)
#define PM0 (*(volatile union un_pm0 *)0xFFF20).pm0
#define PM0_bit (*(volatile union un_pm0 *)0xFFF20).BIT
#define PM4 (*(volatile union un_pm4 *)0xFFF24).pm4
#define PM4_bit (*(volatile union un_pm4 *)0xFFF24).BIT
#define ADM0 (*(volatile union un_adm0 *)0xFFF30).adm0
#define ADM0_bit (*(volatile union un_adm0 *)0xFFF30).BIT
#define ADS (*(volatile union un_ads *)0xFFF31).ads
#define ADS_bit (*(volatile union un_ads *)0xFFF31).BIT
#define KRCTL (*(volatile union un_krctl *)0xFFF34).krctl
#define KRCTL_bit (*(volatile union un_krctl *)0xFFF34).BIT
#define KRF (*(volatile unsigned char *)0xFFF35)
#define KRM0 (*(volatile union un_krm0 *)0xFFF37).krm0
#define KRM0_bit (*(volatile union un_krm0 *)0xFFF37).BIT
#define EGP0 (*(volatile union un_egp0 *)0xFFF38).egp0
#define EGP0_bit (*(volatile union un_egp0 *)0xFFF38).BIT
#define EGN0 (*(volatile union un_egn0 *)0xFFF39).egn0
#define EGN0_bit (*(volatile union un_egn0 *)0xFFF39).BIT
#define CKS0 (*(volatile union un_cks0 *)0xFFFA5).cks0
#define CKS0_bit (*(volatile union un_cks0 *)0xFFFA5).BIT
#define RESF (*(volatile unsigned char *)0xFFFA8)
#define WDTE (*(volatile unsigned char *)0xFFFAB)
#define IF0L (*(volatile union un_if0l *)0xFFFE0).if0l
#define IF0L_bit (*(volatile union un_if0l *)0xFFFE0).BIT
#define IF0H (*(volatile union un_if0h *)0xFFFE1).if0h
#define IF0H_bit (*(volatile union un_if0h *)0xFFFE1).BIT
#define MK0L (*(volatile union un_mk0l *)0xFFFE4).mk0l
#define MK0L_bit (*(volatile union un_mk0l *)0xFFFE4).BIT
#define MK0H (*(volatile union un_mk0h *)0xFFFE5).mk0h
#define MK0H_bit (*(volatile union un_mk0h *)0xFFFE5).BIT
#define PR00L (*(volatile union un_pr00l *)0xFFFE8).pr00l
#define PR00L_bit (*(volatile union un_pr00l *)0xFFFE8).BIT
#define PR00H (*(volatile union un_pr00h *)0xFFFE9).pr00h
#define PR00H_bit (*(volatile union un_pr00h *)0xFFFE9).BIT
#define PR10L (*(volatile union un_pr10l *)0xFFFEC).pr10l
#define PR10L_bit (*(volatile union un_pr10l *)0xFFFEC).BIT
#define PR10H (*(volatile union un_pr10h *)0xFFFED).pr10h
#define PR10H_bit (*(volatile union un_pr10h *)0xFFFED).BIT
#define PMC (*(volatile union un_pmc *)0xFFFFE).pmc
#define PMC_bit (*(volatile union un_pmc *)0xFFFFE).BIT

/*
 Sfr bits
 */
#define ADCE ADM0_bit.no0
#define ADCS ADM0_bit.no7
#define PCLOE0 CKS0_bit.no7
#define WDTIIF IF0L_bit.no0
#define PIF0 IF0L_bit.no1
#define PIF1 IF0L_bit.no2
#define CSIIF00 IF0L_bit.no3
#define IICIF00 IF0L_bit.no3
#define STIF0 IF0L_bit.no3
#define SRIF0 IF0L_bit.no4
#define SREIF0 IF0L_bit.no5
#define TMIF01H IF0L_bit.no6
#define TMIF00 IF0L_bit.no7
#define TMIF01 IF0H_bit.no0
#define ADIF IF0H_bit.no1
#define KRIF IF0H_bit.no2
#define WDTIMK MK0L_bit.no0
#define PMK0 MK0L_bit.no1
#define PMK1 MK0L_bit.no2
#define CSIMK00 MK0L_bit.no3
#define IICMK00 MK0L_bit.no3
#define STMK0 MK0L_bit.no3
#define SRMK0 MK0L_bit.no4
#define SREMK0 MK0L_bit.no5
#define TMMK01H MK0L_bit.no6
#define TMMK00 MK0L_bit.no7
#define TMMK01 MK0H_bit.no0
#define ADMK MK0H_bit.no1
#define KRMK MK0H_bit.no2
#define WDTIPR0 PR00L_bit.no0
#define PPR00 PR00L_bit.no1
#define PPR01 PR00L_bit.no2
#define CSIPR000 PR00L_bit.no3
#define IICPR000 PR00L_bit.no3
#define STPR00 PR00L_bit.no3
#define SRPR00 PR00L_bit.no4
#define SREPR00 PR00L_bit.no5
#define TMPR001H PR00L_bit.no6
#define TMPR000 PR00L_bit.no7
#define TMPR001 PR00H_bit.no0
#define ADPR0 PR00H_bit.no1
#define KRPR0 PR00H_bit.no2
#define WDTIPR1 PR10L_bit.no0
#define PPR10 PR10L_bit.no1
#define PPR11 PR10L_bit.no2
#define CSIPR100 PR10L_bit.no3
#define IICPR100 PR10L_bit.no3
#define STPR10 PR10L_bit.no3
#define SRPR10 PR10L_bit.no4
#define SREPR10 PR10L_bit.no5
#define TMPR101H PR10L_bit.no6
#define TMPR100 PR10L_bit.no7
#define TMPR101 PR10H_bit.no0
#define ADPR1 PR10H_bit.no1
#define KRPR1 PR10H_bit.no2
#define MAA PMC_bit.no0

/*
 Interrupt vector addresses
 */
#define RST_vect 0x0
#define INTDBG_vect 0x2
#define INTWDTI_vect 0x4
#define INTP0_vect 0x6
#define INTP1_vect 0x8
#define INTCSI00_vect 0xA
#define INTIIC00_vect 0xA
#define INTST0_vect 0xA
#define INTSR0_vect 0xC
#define INTSRE0_vect 0xE
#define INTTM01H_vect 0x10
#define INTTM00_vect 0x12
#define INTTM01_vect 0x14
#define INTAD_vect 0x16
#define INTKR_vect 0x18
#define BRK_I_vect 0x7E
#endif
