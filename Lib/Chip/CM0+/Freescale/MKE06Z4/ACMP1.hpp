#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ACMP1_cs{
        using Addr = Register::Address<0x40074000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ACMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACOPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACE; 
    }
    namespace ACMP1_c0{
        using Addr = Register::Address<0x40074001,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ACNSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> ACPSEL; 
    }
    namespace ACMP1_c1{
        using Addr = Register::Address<0x40074002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> DACVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DACREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DACEN; 
    }
    namespace ACMP1_c2{
        using Addr = Register::Address<0x40074003,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ACIPE; 
    }
}
