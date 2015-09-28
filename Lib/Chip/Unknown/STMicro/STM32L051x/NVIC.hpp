#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneiser{
        using Addr = Register::Address<0xe000e100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETENA; 
    }
    namespace Noneicer{
        using Addr = Register::Address<0xe000e180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRENA; 
    }
    namespace Noneispr{
        using Addr = Register::Address<0xe000e200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETPEND; 
    }
    namespace Noneicpr{
        using Addr = Register::Address<0xe000e280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRPEND; 
    }
    namespace Noneipr0{
        using Addr = Register::Address<0xe000e400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_3; 
    }
    namespace Noneipr1{
        using Addr = Register::Address<0xe000e404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_7; 
    }
    namespace Noneipr2{
        using Addr = Register::Address<0xe000e408,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_11; 
    }
    namespace Noneipr3{
        using Addr = Register::Address<0xe000e40c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_15; 
    }
    namespace Noneipr4{
        using Addr = Register::Address<0xe000e410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_19; 
    }
    namespace Noneipr5{
        using Addr = Register::Address<0xe000e414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_23; 
    }
    namespace Noneipr6{
        using Addr = Register::Address<0xe000e418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_27; 
    }
    namespace Noneipr7{
        using Addr = Register::Address<0xe000e41c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRI_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRI_29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PRI_30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRI_31; 
    }
}
