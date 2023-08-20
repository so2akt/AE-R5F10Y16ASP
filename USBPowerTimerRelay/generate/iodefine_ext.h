/************************************************************************/
/* Header file generated from device file:                              */
/*    DR5F10Y16.DVF                                                     */
/*    V1.03 (2016/10/04)                                                */
/*    Copyright(C) 2016 Renesas                                         */
/* Tool Version: 4.0.0                                                  */
/* Date Generated: 2020/01/17                                           */
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

#ifndef IODEFINE_EXT_H
#define IODEFINE_EXT_H

/*
 IO Registers
 */
union un_adm2 {
	unsigned char adm2;
	__BITS8 BIT;
};
union un_pu0 {
	unsigned char pu0;
	__BITS8 BIT;
};
union un_pu4 {
	unsigned char pu4;
	__BITS8 BIT;
};
union un_pu12 {
	unsigned char pu12;
	__BITS8 BIT;
};
union un_pom0 {
	unsigned char pom0;
	__BITS8 BIT;
};
union un_pmc0 {
	unsigned char pmc0;
	__BITS8 BIT;
};
union un_nfen0 {
	unsigned char nfen0;
	__BITS8 BIT;
};
union un_nfen1 {
	unsigned char nfen1;
	__BITS8 BIT;
};
union un_isc {
	unsigned char isc;
	__BITS8 BIT;
};
union un_per0 {
	unsigned char per0;
	__BITS8 BIT;
};
union un_se0 {
	unsigned char se0;
	__BITS8 BIT;
};
union un_ss0 {
	unsigned char ss0;
	__BITS8 BIT;
};
union un_st0 {
	unsigned char st0;
	__BITS8 BIT;
};
union un_soe0 {
	unsigned char soe0;
	__BITS8 BIT;
};
union un_te0 {
	unsigned char te0;
	__BITS8 BIT;
};
union un_teh0 {
	unsigned char teh0;
	__BITS8 BIT;
};
union un_ts0 {
	unsigned char ts0;
	__BITS8 BIT;
};
union un_tsh0 {
	unsigned char tsh0;
	__BITS8 BIT;
};
union un_tt0 {
	unsigned char tt0;
	__BITS8 BIT;
};
union un_tth0 {
	unsigned char tth0;
	__BITS8 BIT;
};
union un_toe0 {
	unsigned char toe0;
	__BITS8 BIT;
};

#define ADM2 (*(volatile union un_adm2 *)0xF0010).adm2
#define ADM2_bit (*(volatile union un_adm2 *)0xF0010).BIT
#define PU0 (*(volatile union un_pu0 *)0xF0030).pu0
#define PU0_bit (*(volatile union un_pu0 *)0xF0030).BIT
#define PU4 (*(volatile union un_pu4 *)0xF0034).pu4
#define PU4_bit (*(volatile union un_pu4 *)0xF0034).BIT
#define PU12 (*(volatile union un_pu12 *)0xF003C).pu12
#define PU12_bit (*(volatile union un_pu12 *)0xF003C).BIT
#define POM0 (*(volatile union un_pom0 *)0xF0050).pom0
#define POM0_bit (*(volatile union un_pom0 *)0xF0050).BIT
#define PMC0 (*(volatile union un_pmc0 *)0xF0060).pmc0
#define PMC0_bit (*(volatile union un_pmc0 *)0xF0060).BIT
#define NFEN0 (*(volatile union un_nfen0 *)0xF0070).nfen0
#define NFEN0_bit (*(volatile union un_nfen0 *)0xF0070).BIT
#define NFEN1 (*(volatile union un_nfen1 *)0xF0071).nfen1
#define NFEN1_bit (*(volatile union un_nfen1 *)0xF0071).BIT
#define ISC (*(volatile union un_isc *)0xF0073).isc
#define ISC_bit (*(volatile union un_isc *)0xF0073).BIT
#define PIOR (*(volatile unsigned char *)0xF0077)
#define HOCODIV (*(volatile unsigned char *)0xF00A8)
#define PER0 (*(volatile union un_per0 *)0xF00F0).per0
#define PER0_bit (*(volatile union un_per0 *)0xF00F0).BIT
#define BCDADJ (*(volatile unsigned char *)0xF00FE)
#define SSR00 (*(volatile unsigned char *)0xF0100)
#define SSR01 (*(volatile unsigned char *)0xF0102)
#define SIR00 (*(volatile unsigned char *)0xF0108)
#define SIR01 (*(volatile unsigned char *)0xF010A)
#define SMR00L (*(volatile unsigned char *)0xF0110)
#define SMR00H (*(volatile unsigned char *)0xF0111)
#define SMR01L (*(volatile unsigned char *)0xF0112)
#define SMR01H (*(volatile unsigned char *)0xF0113)
#define SCR00L (*(volatile unsigned char *)0xF0118)
#define SCR00H (*(volatile unsigned char *)0xF0119)
#define SCR01L (*(volatile unsigned char *)0xF011A)
#define SCR01H (*(volatile unsigned char *)0xF011B)
#define SE0 (*(volatile union un_se0 *)0xF0120).se0
#define SE0_bit (*(volatile union un_se0 *)0xF0120).BIT
#define SS0 (*(volatile union un_ss0 *)0xF0122).ss0
#define SS0_bit (*(volatile union un_ss0 *)0xF0122).BIT
#define ST0 (*(volatile union un_st0 *)0xF0124).st0
#define ST0_bit (*(volatile union un_st0 *)0xF0124).BIT
#define SPS0 (*(volatile unsigned char *)0xF0126)
#define SO0 (*(volatile unsigned char *)0xF0128)
#define CKO0 (*(volatile unsigned char *)0xF0129)
#define SOE0 (*(volatile union un_soe0 *)0xF012A).soe0
#define SOE0_bit (*(volatile union un_soe0 *)0xF012A).BIT
#define SOL0 (*(volatile unsigned char *)0xF0134)
#define TCR00L (*(volatile unsigned char *)0xF0180)
#define TCR00H (*(volatile unsigned char *)0xF0181)
#define TCR01L (*(volatile unsigned char *)0xF0182)
#define TCR01H (*(volatile unsigned char *)0xF0183)
#define TMR00L (*(volatile unsigned char *)0xF0190)
#define TMR00H (*(volatile unsigned char *)0xF0191)
#define TMR01L (*(volatile unsigned char *)0xF0192)
#define TMR01H (*(volatile unsigned char *)0xF0193)
#define TSR00 (*(volatile unsigned char *)0xF01A0)
#define TSR01 (*(volatile unsigned char *)0xF01A2)
#define TE0 (*(volatile union un_te0 *)0xF01B0).te0
#define TE0_bit (*(volatile union un_te0 *)0xF01B0).BIT
#define TEH0 (*(volatile union un_teh0 *)0xF01B1).teh0
#define TEH0_bit (*(volatile union un_teh0 *)0xF01B1).BIT
#define TS0 (*(volatile union un_ts0 *)0xF01B2).ts0
#define TS0_bit (*(volatile union un_ts0 *)0xF01B2).BIT
#define TSH0 (*(volatile union un_tsh0 *)0xF01B3).tsh0
#define TSH0_bit (*(volatile union un_tsh0 *)0xF01B3).BIT
#define TT0 (*(volatile union un_tt0 *)0xF01B4).tt0
#define TT0_bit (*(volatile union un_tt0 *)0xF01B4).BIT
#define TTH0 (*(volatile union un_tth0 *)0xF01B5).tth0
#define TTH0_bit (*(volatile union un_tth0 *)0xF01B5).BIT
#define TPS0 (*(volatile unsigned char *)0xF01B6)
#define TO0 (*(volatile unsigned char *)0xF01B8)
#define TOE0 (*(volatile union un_toe0 *)0xF01BA).toe0
#define TOE0_bit (*(volatile union un_toe0 *)0xF01BA).BIT
#define TOL0 (*(volatile unsigned char *)0xF01BC)
#define TOM0 (*(volatile unsigned char *)0xF01BE)

/*
 Sfr bits
 */
#define ADTYP ADM2_bit.no0
#define TAU0EN PER0_bit.no0
#define SAU0EN PER0_bit.no2
#define ADCEN PER0_bit.no5

/*
 Interrupt vector addresses
 */
#endif
