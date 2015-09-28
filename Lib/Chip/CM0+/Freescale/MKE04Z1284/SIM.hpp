#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SIM_srsid{
        using Addr = Register::Address<0x40048000,0x0000d119>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDOG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LOCKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MDMAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SACKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> RevID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> SUBFAMID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> FAMID; 
    }
    namespace SIM_sopt0{
        using Addr = Register::Address<0x40048004,0x000020d1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SWDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RXDFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RTCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ACIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXDCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FTMSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXDME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> BUSREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CLKOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> ADHWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DLYACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DELAY; 
    }
    namespace SIM_sopt1{
        using Addr = Register::Address<0x40048008,0xffffffc4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I2C04WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> I2C0OINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACPWTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> UARTPWTS; 
    }
    namespace SIM_pinsel0{
        using Addr = Register::Address<0x4004800c,0x00fff008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> IRQPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTCPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> I2C0PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPI0PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UART0PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FTM0PS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FTM0PS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FTM1PS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FTM1PS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> FTM0CLKPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> FTM1CLKPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FTM2CLKPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PWTCLKPS; 
    }
    namespace SIM_pinsel1{
        using Addr = Register::Address<0x40048010,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FTM2PS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> FTM2PS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> FTM2PS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> FTM2PS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FTM2PS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FTM2PS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> I2C1PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SPI1PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART1PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UART2PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWTIN0PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWTIN1PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MSCANPS; 
    }
    namespace SIM_scgc{
        using Addr = Register::Address<0x40048014,0x14804b0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FTM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FTM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FTM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FLASH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> I2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> UART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> UART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> KBI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> KBI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> IRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ACMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ACMP1; 
    }
    namespace SIM_uuidl{
        using Addr = Register::Address<0x40048018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ID; 
    }
    namespace SIM_uuidml{
        using Addr = Register::Address<0x4004801c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ID; 
    }
    namespace SIM_uuidmh{
        using Addr = Register::Address<0x40048020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ID; 
    }
    namespace SIM_clkdiv{
        using Addr = Register::Address<0x40048024,0xceefffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUTDIV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> OUTDIV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> OUTDIV1; 
    }
}
