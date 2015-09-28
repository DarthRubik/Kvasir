#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SIM_sopt1{
        using Addr = Register::Address<0x40047000,0xfff0ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> OSC32KOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> OSC32KSEL; 
    }
    namespace SIM_sopt2{
        using Addr = Register::Address<0x40048004,0xf0ffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTCCLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> CLKOUTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TPMSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> LPUART0SRC; 
    }
    namespace SIM_sopt4{
        using Addr = Register::Address<0x4004800c,0xfcfbffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TPM1CH0SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TPM0CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TPM1CLKSEL; 
    }
    namespace SIM_sopt5{
        using Addr = Register::Address<0x40048010,0xfffefffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPUART0TXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LPUART0RXSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LPUART0ODE; 
    }
    namespace SIM_sopt7{
        using Addr = Register::Address<0x40048018,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADC0TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC0PRETRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADC0ALTTRGEN; 
    }
    namespace SIM_sdid{
        using Addr = Register::Address<0x40048024,0x00000070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,7)> DIEID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> REVID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> SRAMSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> SERIESID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> SUBFAMID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FAMID; 
    }
    namespace SIM_scgc4{
        using Addr = Register::Address<0x40048034,0xffa7ffbf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SPI0; 
    }
    namespace SIM_scgc5{
        using Addr = Register::Address<0x40048038,0xffeff9fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPTMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PORTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PORTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LPUART0; 
    }
    namespace SIM_scgc6{
        using Addr = Register::Address<0x4004803c,0xd4fffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TPM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TPM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ADC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RTC; 
    }
    namespace SIM_clkdiv1{
        using Addr = Register::Address<0x40048044,0x0ff8ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> OUTDIV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> OUTDIV1; 
    }
    namespace SIM_fcfg1{
        using Addr = Register::Address<0x4004804c,0xf0fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLASHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLASHDOZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PFSIZE; 
    }
    namespace SIM_fcfg2{
        using Addr = Register::Address<0x40048050,0x80ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> MAXADDR0; 
    }
    namespace SIM_uidmh{
        using Addr = Register::Address<0x40048058,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> UID; 
    }
    namespace SIM_uidml{
        using Addr = Register::Address<0x4004805c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_uidl{
        using Addr = Register::Address<0x40048060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UID; 
    }
    namespace SIM_copc{
        using Addr = Register::Address<0x40048100,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COPCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> COPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> COPSTPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COPDBGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> COPCLKSEL; 
    }
    namespace SIM_srvcop{
        using Addr = Register::Address<0x40048104,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SRVCOP; 
    }
}
