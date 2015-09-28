#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedr{
        using Addr = Register::Address<0x40023000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DR; 
    }
    namespace Noneidr{
        using Addr = Register::Address<0x40023004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IDR; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40023008,0xffffff06>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REV_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> REV_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> POLYSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESET; 
    }
    namespace Noneinit{
        using Addr = Register::Address<0x40023010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRC_INIT; 
    }
    namespace Nonepol{
        using Addr = Register::Address<0x40023014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> Polynomialcoefficients; 
    }
}
