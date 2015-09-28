#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneeth_mode{
        using Addr = Register::Address<0x40066000,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IFMODE; 
    }
    namespace Noneeth_clkg{
        using Addr = Register::Address<0x40066008,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MACEN; 
    }
}
