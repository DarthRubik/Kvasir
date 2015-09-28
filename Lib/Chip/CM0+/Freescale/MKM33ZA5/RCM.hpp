#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RCM_srs0{
        using Addr = Register::Address<0x4007b000,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WDOG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POR; 
    }
    namespace RCM_srs1{
        using Addr = Register::Address<0x4007b001,0xffffffd1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MDM_AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SACKERR; 
    }
    namespace RCM_rpfc{
        using Addr = Register::Address<0x4007b004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RSTFLTSRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTFLTSS; 
    }
    namespace RCM_rpfw{
        using Addr = Register::Address<0x4007b005,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> RSTFLTSEL; 
    }
}
