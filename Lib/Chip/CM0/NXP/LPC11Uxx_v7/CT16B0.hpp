#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneir{
        using Addr = Register::Address<0x4000c000,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MR0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MR1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MR2INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MR3INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CR0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CR1INT; 
    }
    namespace Nonetcr{
        using Addr = Register::Address<0x4000c004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRST; 
    }
    namespace Nonetc{
        using Addr = Register::Address<0x4000c008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TC; 
    }
    namespace Nonepr{
        using Addr = Register::Address<0x4000c00c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PCVAL; 
    }
    namespace Nonepc{
        using Addr = Register::Address<0x4000c010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PC; 
    }
    namespace Nonemcr{
        using Addr = Register::Address<0x4000c014,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MR0I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MR0R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MR0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MR1I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MR1R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MR1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MR2I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MR2R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MR2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MR3I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MR3R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MR3S; 
    }
    namespace Nonemr0{
        using Addr = Register::Address<0x4000c018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCH; 
    }
    namespace Nonemr1{
        using Addr = Register::Address<0x4000c01c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCH; 
    }
    namespace Nonemr2{
        using Addr = Register::Address<0x4000c020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCH; 
    }
    namespace Nonemr3{
        using Addr = Register::Address<0x4000c024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MATCH; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x4000c028,0xfffffe38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAP0RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAP0FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAP0I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAP1RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAP1FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAP1I; 
    }
    namespace Nonecr0{
        using Addr = Register::Address<0x4000c02c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAP; 
    }
    namespace Nonecr1{
        using Addr = Register::Address<0x4000c034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAP; 
    }
    namespace Noneemr{
        using Addr = Register::Address<0x4000c03c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EM3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EMC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> EMC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EMC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EMC3; 
    }
    namespace Nonectcr{
        using Addr = Register::Address<0x4000c070,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> SELCC; 
    }
    namespace Nonepwmc{
        using Addr = Register::Address<0x4000c074,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWMEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWMEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWMEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMEN3; 
    }
}
