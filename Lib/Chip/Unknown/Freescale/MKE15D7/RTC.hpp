#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RTC_sc{
        using Addr = Register::Address<0x4002d000,0xffff380f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RTIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> RTCPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> RTCLKS; 
    }
    namespace RTC_mod{
        using Addr = Register::Address<0x4002d004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace RTC_cnt{
        using Addr = Register::Address<0x4002d008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
}
