#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40001800,0xfffffc70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CKD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
    }
    namespace Nonesmcr{
        using Addr = Register::Address<0x40001808,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMS; 
    }
    namespace Nonedier{
        using Addr = Register::Address<0x4000180c,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIE; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40001810,0xfffff9b8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC2OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIF; 
    }
    namespace Noneegr{
        using Addr = Register::Address<0x40001814,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UG; 
    }
    namespace Noneccmr1_output{
        using Addr = Register::Address<0x40001818,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC2M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC2FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC1M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC1FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccmr1_input{
        using Addr = Register::Address<0x40001818,0xffff0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC2PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> IC1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC1PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccer{
        using Addr = Register::Address<0x40001820,0xffffff44>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CC2NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CC2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC1NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CC1E; 
    }
    namespace Nonecnt{
        using Addr = Register::Address<0x40001824,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace Nonepsc{
        using Addr = Register::Address<0x40001828,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSC; 
    }
    namespace Nonearr{
        using Addr = Register::Address<0x4000182c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ARR; 
    }
    namespace Noneccr1{
        using Addr = Register::Address<0x40001834,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR1; 
    }
    namespace Noneccr2{
        using Addr = Register::Address<0x40001838,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR2; 
    }
}
