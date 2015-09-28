#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SIM_sopt1{
        using Addr = Register::Address<0x40047000,0xfff00fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> RAMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> OSC32KOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> OSC32KSEL; 
    }
    namespace SIM_sopt1cfg{
        using Addr = Register::Address<0x40047004,0xffffffff>;
    }
    namespace SIM_sopt2{
        using Addr = Register::Address<0x40048004,0xf3f8ef0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTCCLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> CLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRACECLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PLLFLLSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USBSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> LPUARTSRC; 
    }
    namespace SIM_sopt4{
        using Addr = Register::Address<0x4004800c,0xc883feec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTM0FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTM0FLT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FTM1FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FTM2FLT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> FTM1CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> FTM2CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FTM2CH1SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM0CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM1CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FTM2CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FTM0TRG0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FTM0TRG1SRC; 
    }
    namespace SIM_sopt5{
        using Addr = Register::Address<0x40048010,0xfff3ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> UART0TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> UART0RXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> UART1TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> UART1RXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LPUART0RXSRC; 
    }
    namespace SIM_sopt7{
        using Addr = Register::Address<0x40048018,0xffff6060>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADC0TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC0PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADC0ALTTRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ADC1TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADC1PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ADC1ALTTRGEN; 
    }
    namespace SIM_sopt8{
        using Addr = Register::Address<0x4004801c,0xff00fff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTM0SYNCBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTM1SYNCBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FTM2SYNCBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FTM0OCH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FTM0OCH1SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FTM0OCH2SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FTM0OCH3SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FTM0OCH4SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> FTM0OCH5SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FTM0OCH6SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FTM0OCH7SRC; 
    }
    namespace SIM_sdid{
        using Addr = Register::Address<0x40048024,0x000f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FAMID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7)> DIEID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> REVID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> SERIESID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> SUBFAMID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FAMILYID; 
    }
    namespace SIM_scgc4{
        using Addr = Register::Address<0x40048034,0xffe3e33d>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> I2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USBOTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VREF; 
    }
    namespace SIM_scgc5{
        using Addr = Register::Address<0x40048038,0xffffc1fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPTMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PORTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PORTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PORTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PORTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PORTE; 
    }
    namespace SIM_scgc6{
        using Addr = Register::Address<0x4004803c,0x503b4b7c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMAMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LPUART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PDB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FTM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FTM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FTM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DAC0; 
    }
    namespace SIM_scgc7{
        using Addr = Register::Address<0x40048040,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMA; 
    }
    namespace SIM_clkdiv1{
        using Addr = Register::Address<0x40048044,0x00f0ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> OUTDIV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> OUTDIV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> OUTDIV1; 
    }
    namespace SIM_clkdiv2{
        using Addr = Register::Address<0x40048048,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBFRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> USBDIV; 
    }
    namespace SIM_fcfg1{
        using Addr = Register::Address<0x4004804c,0xf0fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLASHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLASHDOZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PFSIZE; 
    }
    namespace SIM_fcfg2{
        using Addr = Register::Address<0x40048050,0x8080ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MAXADDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> MAXADDR0; 
    }
    namespace SIM_uidh{
        using Addr = Register::Address<0x40048054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidmh{
        using Addr = Register::Address<0x40048058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidml{
        using Addr = Register::Address<0x4004805c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidl{
        using Addr = Register::Address<0x40048060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
}
