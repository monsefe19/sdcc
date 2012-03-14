/*
 * pic18f67j50.c - device specific definitions
 *
 * This file is part of the GNU PIC library for SDCC,
 * originally devised by Vangelis Rokas <vrokas AT otenet.gr>
 *
 * It has been automatically generated by inc2h-pic16.pl,
 * (c) 2007 by Raphael Neider <rneider AT web.de>
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * tbut explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#include <pic18f67j50.h>


__sfr __at (0xF40) PMSTAT;

__sfr __at (0xF40) PMSTATL;
volatile __PMSTATLbits_t __at (0xF40) PMSTATLbits;

__sfr __at (0xF41) PMSTATH;
volatile __PMSTATHbits_t __at (0xF41) PMSTATHbits;

__sfr __at (0xF42) PMEL;
volatile __PMELbits_t __at (0xF42) PMELbits;

__sfr __at (0xF42) PMEN;

__sfr __at (0xF43) PMEH;
volatile __PMEHbits_t __at (0xF43) PMEHbits;

__sfr __at (0xF44) PMDIN2;

__sfr __at (0xF44) PMDIN2L;

__sfr __at (0xF45) PMDIN2H;

__sfr __at (0xF46) PMDOUT2;

__sfr __at (0xF46) PMDOUT2L;

__sfr __at (0xF47) PMDOUT2H;

__sfr __at (0xF48) PMMODE;

__sfr __at (0xF48) PMMODEL;
volatile __PMMODELbits_t __at (0xF48) PMMODELbits;

__sfr __at (0xF49) PMMODEH;
volatile __PMMODEHbits_t __at (0xF49) PMMODEHbits;

__sfr __at (0xF4A) PMCON;

__sfr __at (0xF4A) PMCONL;
volatile __PMCONLbits_t __at (0xF4A) PMCONLbits;

__sfr __at (0xF4B) PMCONH;
volatile __PMCONHbits_t __at (0xF4B) PMCONHbits;

__sfr __at (0xF4C) UEP0;
volatile __UEP0bits_t __at (0xF4C) UEP0bits;

__sfr __at (0xF4D) UEP1;
volatile __UEP1bits_t __at (0xF4D) UEP1bits;

__sfr __at (0xF4E) UEP2;
volatile __UEP2bits_t __at (0xF4E) UEP2bits;

__sfr __at (0xF4F) UEP3;
volatile __UEP3bits_t __at (0xF4F) UEP3bits;

__sfr __at (0xF50) UEP4;
volatile __UEP4bits_t __at (0xF50) UEP4bits;

__sfr __at (0xF51) UEP5;
volatile __UEP5bits_t __at (0xF51) UEP5bits;

__sfr __at (0xF52) UEP6;
volatile __UEP6bits_t __at (0xF52) UEP6bits;

__sfr __at (0xF53) UEP7;
volatile __UEP7bits_t __at (0xF53) UEP7bits;

__sfr __at (0xF54) UEP8;
volatile __UEP8bits_t __at (0xF54) UEP8bits;

__sfr __at (0xF55) UEP9;
volatile __UEP9bits_t __at (0xF55) UEP9bits;

__sfr __at (0xF56) UEP10;
volatile __UEP10bits_t __at (0xF56) UEP10bits;

__sfr __at (0xF57) UEP11;
volatile __UEP11bits_t __at (0xF57) UEP11bits;

__sfr __at (0xF58) UEP12;
volatile __UEP12bits_t __at (0xF58) UEP12bits;

__sfr __at (0xF59) UEP13;
volatile __UEP13bits_t __at (0xF59) UEP13bits;

__sfr __at (0xF5A) UEP14;
volatile __UEP14bits_t __at (0xF5A) UEP14bits;

__sfr __at (0xF5B) UEP15;
volatile __UEP15bits_t __at (0xF5B) UEP15bits;

__sfr __at (0xF5C) UIE;
volatile __UIEbits_t __at (0xF5C) UIEbits;

__sfr __at (0xF5D) UEIE;
volatile __UEIEbits_t __at (0xF5D) UEIEbits;

__sfr __at (0xF5E) UADDR;
volatile __UADDRbits_t __at (0xF5E) UADDRbits;

__sfr __at (0xF5F) UCFG;
volatile __UCFGbits_t __at (0xF5F) UCFGbits;

__sfr __at (0xF60) UFRM;

__sfr __at (0xF60) UFRML;
volatile __UFRMLbits_t __at (0xF60) UFRMLbits;

__sfr __at (0xF61) UFRMH;
volatile __UFRMHbits_t __at (0xF61) UFRMHbits;

__sfr __at (0xF62) UIR;
volatile __UIRbits_t __at (0xF62) UIRbits;

__sfr __at (0xF63) UEIR;
volatile __UEIRbits_t __at (0xF63) UEIRbits;

__sfr __at (0xF64) USTAT;
volatile __USTATbits_t __at (0xF64) USTATbits;

__sfr __at (0xF65) UCON;
volatile __UCONbits_t __at (0xF65) UCONbits;

__sfr __at (0xF66) PMDIN1;

__sfr __at (0xF66) PMDIN1L;

__sfr __at (0xF67) PMDIN1H;

__sfr __at (0xF68) PMADDR;

__sfr __at (0xF68) PMADDRL;

__sfr __at (0xF68) PMDOUT1;

__sfr __at (0xF68) PMDOUT1L;

__sfr __at (0xF69) PMADDRH;
volatile __PMADDRHbits_t __at (0xF69) PMADDRHbits;

__sfr __at (0xF69) PMDOUT1H;

__sfr __at (0xF6A) CMSTAT;
volatile __CMSTATbits_t __at (0xF6A) CMSTATbits;

__sfr __at (0xF6A) CMSTATUS;
volatile __CMSTATUSbits_t __at (0xF6A) CMSTATUSbits;

__sfr __at (0xF6B) SSP2CON2;
volatile __SSP2CON2bits_t __at (0xF6B) SSP2CON2bits;

__sfr __at (0xF6C) SSP2CON1;
volatile __SSP2CON1bits_t __at (0xF6C) SSP2CON1bits;

__sfr __at (0xF6D) SSP2STAT;
volatile __SSP2STATbits_t __at (0xF6D) SSP2STATbits;

__sfr __at (0xF6E) SSP2ADD;

__sfr __at (0xF6E) SSP2MSK;
volatile __SSP2MSKbits_t __at (0xF6E) SSP2MSKbits;

__sfr __at (0xF6F) SSP2BUF;

__sfr __at (0xF70) CCP5CON;
volatile __CCP5CONbits_t __at (0xF70) CCP5CONbits;

__sfr __at (0xF71) CCPR5;

__sfr __at (0xF71) CCPR5L;

__sfr __at (0xF72) CCPR5H;

__sfr __at (0xF73) CCP4CON;
volatile __CCP4CONbits_t __at (0xF73) CCP4CONbits;

__sfr __at (0xF74) CCPR4;

__sfr __at (0xF74) CCPR4L;

__sfr __at (0xF75) CCPR4H;

__sfr __at (0xF76) T4CON;
volatile __T4CONbits_t __at (0xF76) T4CONbits;

__sfr __at (0xF77) CVRCON;
volatile __CVRCONbits_t __at (0xF77) CVRCONbits;

__sfr __at (0xF77) PR4;

__sfr __at (0xF78) TMR4;

__sfr __at (0xF79) T3CON;
volatile __T3CONbits_t __at (0xF79) T3CONbits;

__sfr __at (0xF7A) TMR3L;

__sfr __at (0xF7B) TMR3H;

__sfr __at (0xF7C) BAUDCON2;
volatile __BAUDCON2bits_t __at (0xF7C) BAUDCON2bits;

__sfr __at (0xF7D) SPBRGH2;

__sfr __at (0xF7E) BAUDCON;
volatile __BAUDCONbits_t __at (0xF7E) BAUDCONbits;

__sfr __at (0xF7E) BAUDCON1;
volatile __BAUDCON1bits_t __at (0xF7E) BAUDCON1bits;

__sfr __at (0xF7F) SPBRGH;

__sfr __at (0xF7F) SPBRGH1;

__sfr __at (0xF80) PORTA;
volatile __PORTAbits_t __at (0xF80) PORTAbits;

__sfr __at (0xF81) PORTB;
volatile __PORTBbits_t __at (0xF81) PORTBbits;

__sfr __at (0xF82) PORTC;
volatile __PORTCbits_t __at (0xF82) PORTCbits;

__sfr __at (0xF83) PORTD;
volatile __PORTDbits_t __at (0xF83) PORTDbits;

__sfr __at (0xF84) PORTE;
volatile __PORTEbits_t __at (0xF84) PORTEbits;

__sfr __at (0xF85) PORTF;
volatile __PORTFbits_t __at (0xF85) PORTFbits;

__sfr __at (0xF86) PORTG;
volatile __PORTGbits_t __at (0xF86) PORTGbits;

__sfr __at (0xF89) LATA;
volatile __LATAbits_t __at (0xF89) LATAbits;

__sfr __at (0xF8A) LATB;
volatile __LATBbits_t __at (0xF8A) LATBbits;

__sfr __at (0xF8B) LATC;
volatile __LATCbits_t __at (0xF8B) LATCbits;

__sfr __at (0xF8C) LATD;
volatile __LATDbits_t __at (0xF8C) LATDbits;

__sfr __at (0xF8D) LATE;
volatile __LATEbits_t __at (0xF8D) LATEbits;

__sfr __at (0xF8E) LATF;
volatile __LATFbits_t __at (0xF8E) LATFbits;

__sfr __at (0xF8F) LATG;
volatile __LATGbits_t __at (0xF8F) LATGbits;

__sfr __at (0xF92) DDRA;
volatile __DDRAbits_t __at (0xF92) DDRAbits;

__sfr __at (0xF92) TRISA;
volatile __TRISAbits_t __at (0xF92) TRISAbits;

__sfr __at (0xF93) DDRB;
volatile __DDRBbits_t __at (0xF93) DDRBbits;

__sfr __at (0xF93) TRISB;
volatile __TRISBbits_t __at (0xF93) TRISBbits;

__sfr __at (0xF94) DDRC;
volatile __DDRCbits_t __at (0xF94) DDRCbits;

__sfr __at (0xF94) TRISC;
volatile __TRISCbits_t __at (0xF94) TRISCbits;

__sfr __at (0xF95) DDRD;
volatile __DDRDbits_t __at (0xF95) DDRDbits;

__sfr __at (0xF95) TRISD;
volatile __TRISDbits_t __at (0xF95) TRISDbits;

__sfr __at (0xF96) DDRE;
volatile __DDREbits_t __at (0xF96) DDREbits;

__sfr __at (0xF96) TRISE;
volatile __TRISEbits_t __at (0xF96) TRISEbits;

__sfr __at (0xF97) DDRF;
volatile __DDRFbits_t __at (0xF97) DDRFbits;

__sfr __at (0xF97) TRISF;
volatile __TRISFbits_t __at (0xF97) TRISFbits;

__sfr __at (0xF98) DDRG;
volatile __DDRGbits_t __at (0xF98) DDRGbits;

__sfr __at (0xF98) TRISG;
volatile __TRISGbits_t __at (0xF98) TRISGbits;

__sfr __at (0xF9B) OSCTUNE;
volatile __OSCTUNEbits_t __at (0xF9B) OSCTUNEbits;

__sfr __at (0xF9C) RCSTA2;
volatile __RCSTA2bits_t __at (0xF9C) RCSTA2bits;

__sfr __at (0xF9D) PIE1;
volatile __PIE1bits_t __at (0xF9D) PIE1bits;

__sfr __at (0xF9E) PIR1;
volatile __PIR1bits_t __at (0xF9E) PIR1bits;

__sfr __at (0xF9F) IPR1;
volatile __IPR1bits_t __at (0xF9F) IPR1bits;

__sfr __at (0xFA0) PIE2;
volatile __PIE2bits_t __at (0xFA0) PIE2bits;

__sfr __at (0xFA1) PIR2;
volatile __PIR2bits_t __at (0xFA1) PIR2bits;

__sfr __at (0xFA2) IPR2;
volatile __IPR2bits_t __at (0xFA2) IPR2bits;

__sfr __at (0xFA3) PIE3;
volatile __PIE3bits_t __at (0xFA3) PIE3bits;

__sfr __at (0xFA4) PIR3;
volatile __PIR3bits_t __at (0xFA4) PIR3bits;

__sfr __at (0xFA5) IPR3;
volatile __IPR3bits_t __at (0xFA5) IPR3bits;

__sfr __at (0xFA6) EECON1;
volatile __EECON1bits_t __at (0xFA6) EECON1bits;

__sfr __at (0xFA7) EECON2;

__sfr __at (0xFA8) TXSTA2;
volatile __TXSTA2bits_t __at (0xFA8) TXSTA2bits;

__sfr __at (0xFA9) TXREG2;

__sfr __at (0xFAA) RCREG2;

__sfr __at (0xFAB) SPBRG2;

__sfr __at (0xFAC) RCSTA;
volatile __RCSTAbits_t __at (0xFAC) RCSTAbits;

__sfr __at (0xFAC) RCSTA1;
volatile __RCSTA1bits_t __at (0xFAC) RCSTA1bits;

__sfr __at (0xFAD) TXSTA;
volatile __TXSTAbits_t __at (0xFAD) TXSTAbits;

__sfr __at (0xFAD) TXSTA1;
volatile __TXSTA1bits_t __at (0xFAD) TXSTA1bits;

__sfr __at (0xFAE) TXREG;

__sfr __at (0xFAE) TXREG1;

__sfr __at (0xFAF) RCREG;

__sfr __at (0xFAF) RCREG1;

__sfr __at (0xFB0) SPBRG;

__sfr __at (0xFB0) SPBRG1;

__sfr __at (0xFB1) CCP3CON;
volatile __CCP3CONbits_t __at (0xFB1) CCP3CONbits;

__sfr __at (0xFB1) ECCP3CON;
volatile __ECCP3CONbits_t __at (0xFB1) ECCP3CONbits;

__sfr __at (0xFB2) CCPR3;

__sfr __at (0xFB2) CCPR3L;

__sfr __at (0xFB3) CCPR3H;

__sfr __at (0xFB4) ECCP3DEL;
volatile __ECCP3DELbits_t __at (0xFB4) ECCP3DELbits;

__sfr __at (0xFB5) ECCP3AS;
volatile __ECCP3ASbits_t __at (0xFB5) ECCP3ASbits;

__sfr __at (0xFB6) CCP2CON;
volatile __CCP2CONbits_t __at (0xFB6) CCP2CONbits;

__sfr __at (0xFB6) ECCP2CON;
volatile __ECCP2CONbits_t __at (0xFB6) ECCP2CONbits;

__sfr __at (0xFB7) CCPR2;

__sfr __at (0xFB7) CCPR2L;

__sfr __at (0xFB8) CCPR2H;

__sfr __at (0xFB9) ECCP2DEL;
volatile __ECCP2DELbits_t __at (0xFB9) ECCP2DELbits;

__sfr __at (0xFBA) ECCP2AS;
volatile __ECCP2ASbits_t __at (0xFBA) ECCP2ASbits;

__sfr __at (0xFBB) CCP1CON;
volatile __CCP1CONbits_t __at (0xFBB) CCP1CONbits;

__sfr __at (0xFBB) ECCP1CON;
volatile __ECCP1CONbits_t __at (0xFBB) ECCP1CONbits;

__sfr __at (0xFBC) CCPR1;

__sfr __at (0xFBC) CCPR1L;

__sfr __at (0xFBD) CCPR1H;

__sfr __at (0xFBE) ECCP1DEL;
volatile __ECCP1DELbits_t __at (0xFBE) ECCP1DELbits;

__sfr __at (0xFBF) ECCP1AS;
volatile __ECCP1ASbits_t __at (0xFBF) ECCP1ASbits;

__sfr __at (0xFC0) WDTCON;
volatile __WDTCONbits_t __at (0xFC0) WDTCONbits;

__sfr __at (0xFC1) ADCON1;
volatile __ADCON1bits_t __at (0xFC1) ADCON1bits;

__sfr __at (0xFC1) ANCON0;
volatile __ANCON0bits_t __at (0xFC1) ANCON0bits;

__sfr __at (0xFC2) ADCON0;
volatile __ADCON0bits_t __at (0xFC2) ADCON0bits;

__sfr __at (0xFC2) ANCON1;
volatile __ANCON1bits_t __at (0xFC2) ANCON1bits;

__sfr __at (0xFC3) ADRES;

__sfr __at (0xFC3) ADRESL;

__sfr __at (0xFC4) ADRESH;

__sfr __at (0xFC5) SSP1CON2;
volatile __SSP1CON2bits_t __at (0xFC5) SSP1CON2bits;

__sfr __at (0xFC5) SSPCON2;
volatile __SSPCON2bits_t __at (0xFC5) SSPCON2bits;

__sfr __at (0xFC6) SSP1CON1;
volatile __SSP1CON1bits_t __at (0xFC6) SSP1CON1bits;

__sfr __at (0xFC6) SSPCON1;
volatile __SSPCON1bits_t __at (0xFC6) SSPCON1bits;

__sfr __at (0xFC7) SSP1STAT;
volatile __SSP1STATbits_t __at (0xFC7) SSP1STATbits;

__sfr __at (0xFC7) SSPSTAT;
volatile __SSPSTATbits_t __at (0xFC7) SSPSTATbits;

__sfr __at (0xFC8) SSP1ADD;

__sfr __at (0xFC8) SSP1MSK;

__sfr __at (0xFC8) SSPADD;

__sfr __at (0xFC9) SSP1BUF;

__sfr __at (0xFC9) SSPBUF;

__sfr __at (0xFCA) T2CON;
volatile __T2CONbits_t __at (0xFCA) T2CONbits;

__sfr __at (0xFCB) PR2;

__sfr __at (0xFCC) PADCFG1;
volatile __PADCFG1bits_t __at (0xFCC) PADCFG1bits;

__sfr __at (0xFCC) TMR2;

__sfr __at (0xFCD) ODCON3;
volatile __ODCON3bits_t __at (0xFCD) ODCON3bits;

__sfr __at (0xFCD) T1CON;
volatile __T1CONbits_t __at (0xFCD) T1CONbits;

__sfr __at (0xFCE) ODCON2;
volatile __ODCON2bits_t __at (0xFCE) ODCON2bits;

__sfr __at (0xFCE) TMR1L;

__sfr __at (0xFCF) ODCON1;
volatile __ODCON1bits_t __at (0xFCF) ODCON1bits;

__sfr __at (0xFCF) TMR1H;

__sfr __at (0xFD0) RCON;
volatile __RCONbits_t __at (0xFD0) RCONbits;

__sfr __at (0xFD1) CM2CON;
volatile __CM2CONbits_t __at (0xFD1) CM2CONbits;

__sfr __at (0xFD1) CM2CON1;
volatile __CM2CON1bits_t __at (0xFD1) CM2CON1bits;

__sfr __at (0xFD2) CM1CON;
volatile __CM1CONbits_t __at (0xFD2) CM1CONbits;

__sfr __at (0xFD2) CM1CON1;
volatile __CM1CON1bits_t __at (0xFD2) CM1CON1bits;

__sfr __at (0xFD3) OSCCON;
volatile __OSCCONbits_t __at (0xFD3) OSCCONbits;

__sfr __at (0xFD3) REFOCON;
volatile __REFOCONbits_t __at (0xFD3) REFOCONbits;

__sfr __at (0xFD5) T0CON;
volatile __T0CONbits_t __at (0xFD5) T0CONbits;

__sfr __at (0xFD6) TMR0L;

__sfr __at (0xFD7) TMR0H;

__sfr __at (0xFD8) STATUS;
volatile __STATUSbits_t __at (0xFD8) STATUSbits;

__sfr __at (0xFD9) FSR2L;

__sfr __at (0xFDA) FSR2H;

__sfr __at (0xFDB) PLUSW2;

__sfr __at (0xFDC) PREINC2;

__sfr __at (0xFDD) POSTDEC2;

__sfr __at (0xFDE) POSTINC2;

__sfr __at (0xFDF) INDF2;

__sfr __at (0xFE0) BSR;

__sfr __at (0xFE1) FSR1L;

__sfr __at (0xFE2) FSR1H;

__sfr __at (0xFE3) PLUSW1;

__sfr __at (0xFE4) PREINC1;

__sfr __at (0xFE5) POSTDEC1;

__sfr __at (0xFE6) POSTINC1;

__sfr __at (0xFE7) INDF1;

__sfr __at (0xFE8) WREG;

__sfr __at (0xFE9) FSR0L;

__sfr __at (0xFEA) FSR0H;

__sfr __at (0xFEB) PLUSW0;

__sfr __at (0xFEC) PREINC0;

__sfr __at (0xFED) POSTDEC0;

__sfr __at (0xFEE) POSTINC0;

__sfr __at (0xFEF) INDF0;

__sfr __at (0xFF0) INTCON3;
volatile __INTCON3bits_t __at (0xFF0) INTCON3bits;

__sfr __at (0xFF1) INTCON2;
volatile __INTCON2bits_t __at (0xFF1) INTCON2bits;

__sfr __at (0xFF2) INTCON;
volatile __INTCONbits_t __at (0xFF2) INTCONbits;

__sfr __at (0xFF3) PROD;

__sfr __at (0xFF3) PRODL;

__sfr __at (0xFF4) PRODH;

__sfr __at (0xFF5) TABLAT;

__sfr __at (0xFF6) TBLPTR;

__sfr __at (0xFF6) TBLPTRL;

__sfr __at (0xFF7) TBLPTRH;

__sfr __at (0xFF8) TBLPTRU;

__sfr __at (0xFF9) PC;

__sfr __at (0xFF9) PCL;

__sfr __at (0xFFA) PCLATH;

__sfr __at (0xFFB) PCLATU;

__sfr __at (0xFFC) STKPTR;
volatile __STKPTRbits_t __at (0xFFC) STKPTRbits;

__sfr __at (0xFFD) TOS;

__sfr __at (0xFFD) TOSL;

__sfr __at (0xFFE) TOSH;

__sfr __at (0xFFF) TOSU;


