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
        using Addr = Register::Address<0x40021004,0xf8c03800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> ADCPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PLLXTPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> PLLMUL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MCO; 
    }
    namespace Nonecir{
        using Addr = Register::Address<0x40021008,0xff40c040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLLRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HSI14RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLLRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> HSI14RDYE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PLLRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> HSI14RDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSSC; 
    }
    namespace Noneapb2rstr{
        using Addr = Register::Address<0x4002100c,0xffb8a5fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIM1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM15RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIM16RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIM17RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBGMCURST; 
    }
    namespace Noneapb1rstr{
        using Addr = Register::Address<0x40021010,0x8f9db6ec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIM14RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DACRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CECRST; 
    }
    namespace Noneahbenr{
        using Addr = Register::Address<0x40021014,0xfea1ffaa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRAMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLITFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IOPAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IOPBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IOPCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IOPDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> IOPFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TSCEN; 
    }
    namespace Noneapb2enr{
        using Addr = Register::Address<0x40021018,0xffb8a5fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCFGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIM1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIM15EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIM16EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIM17EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DBGMCUEN; 
    }
    namespace Noneapb1enr{
        using Addr = Register::Address<0x4002101c,0x8f9db6ec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIM6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIM14EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SPI2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C2EN; 
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
        using Addr = Register::Address<0x40021028,0xfea1ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IOPARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IOPBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IOPCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IOPDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> IOPFRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TSCRST; 
    }
    namespace Nonecfgr2{
        using Addr = Register::Address<0x4002102c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PREDIV; 
    }
    namespace Nonecfgr3{
        using Addr = Register::Address<0x40021030,0xfffffeac>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> USART1SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> I2C1SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CECSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADCSW; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40021034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HSI14ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HSI14RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSI14DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> HSI14TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> HSI14CAL; 
    }
}
