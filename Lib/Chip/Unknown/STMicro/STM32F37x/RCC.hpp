#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40021000,0xfcf00004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HSION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> HSITRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> HSICAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> HSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CSSON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PLLRDY; 
    }
    namespace Nonecfgr{
        using Addr = Register::Address<0x40021004,0x00800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PPRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> PPRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> ADCPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PLLXTPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> PLLMUL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> USBPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,27)> SDPRE; 
    }
    namespace Nonecir{
        using Addr = Register::Address<0x40021008,0xff60e060>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLLRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLLRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PLLRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSSC; 
    }
    namespace Noneapb2rstr{
        using Addr = Register::Address<0x4002100c,0xf8f0adfe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM15RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIM16RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIM17RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIM19RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SDAD1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SDAD2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SDAD3RST; 
    }
    namespace Noneapb1rstr{
        using Addr = Register::Address<0x40021010,0x89193400>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM5RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM7RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIM12RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TIM13RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIM14RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TIM18RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SPI3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USART3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CANRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DAC3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DACRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CECRST; 
    }
    namespace Noneahbenr{
        using Addr = Register::Address<0x40021014,0xfe81ffa8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMA2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRAMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLITFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IOPAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IOPBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IOPCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IOPDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IOPEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> IOPFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TSCEN; 
    }
    namespace Noneapb2enr{
        using Addr = Register::Address<0x40021018,0xf8b0a5fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIM1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM15EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIM16EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIM17EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIM19EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBGMCUEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SDAD1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SDAD2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SDAD3EN; 
    }
    namespace Noneapb1enr{
        using Addr = Register::Address<0x4002101c,0x89193400>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIM4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIM5EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIM7EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIM12EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TIM13EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIM14EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TIM18EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SPI3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USART3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CANEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DAC3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CECEN; 
    }
    namespace Nonebdcr{
        using Addr = Register::Address<0x40021020,0xfffe7ce0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> LSEDRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RTCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RTCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BDRST; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40021024,0x00fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RMVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> OBLRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PINRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PORRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SFTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPWRRSTF; 
    }
    namespace Noneahbrstr{
        using Addr = Register::Address<0x40021028,0xfe81ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IOPARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IOPBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IOPCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IOPDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IOPERST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> IOPFRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TSCRST; 
    }
    namespace Nonecfgr2{
        using Addr = Register::Address<0x4002102c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PREDIV; 
    }
    namespace Nonecfgr3{
        using Addr = Register::Address<0x40021030,0xfff0ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> USART1SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> I2C1SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> I2C2SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CECSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> USART2SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> USART3SW; 
    }
}
