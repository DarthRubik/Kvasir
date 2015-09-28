#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SHDWC_cr{
        using Addr = Register::Address<0xfffffe10,0x00fffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SHDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> KEY; 
    }
    namespace SHDWC_mr{
        using Addr = Register::Address<0xfffffe14,0xfffdff0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WKMODE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CPTWK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RTCWKEN; 
    }
    namespace SHDWC_sr{
        using Addr = Register::Address<0xfffffe18,0xfffdfffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RTCWK; 
    }
}
