#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace LLWU_pe1{
        using Addr = Register::Address<0x4007c000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WUPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> WUPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> WUPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> WUPE3; 
    }
    namespace LLWU_pe2{
        using Addr = Register::Address<0x4007c001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WUPE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> WUPE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> WUPE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> WUPE7; 
    }
    namespace LLWU_pe3{
        using Addr = Register::Address<0x4007c002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WUPE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> WUPE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> WUPE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> WUPE11; 
    }
    namespace LLWU_pe4{
        using Addr = Register::Address<0x4007c003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WUPE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> WUPE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> WUPE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> WUPE15; 
    }
    namespace LLWU_me{
        using Addr = Register::Address<0x4007c004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUME0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WUME1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WUME2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WUME3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUME4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WUME5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WUME6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WUME7; 
    }
    namespace LLWU_f1{
        using Addr = Register::Address<0x4007c005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WUF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WUF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WUF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WUF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WUF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WUF7; 
    }
    namespace LLWU_f2{
        using Addr = Register::Address<0x4007c006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUF8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WUF9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WUF10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WUF11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUF12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WUF13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WUF14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WUF15; 
    }
    namespace LLWU_f3{
        using Addr = Register::Address<0x4007c007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MWUF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MWUF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MWUF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MWUF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MWUF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MWUF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MWUF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MWUF7; 
    }
    namespace LLWU_cs{
        using Addr = Register::Address<0x4007c008,0xffffff7c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FLTEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACKISO; 
    }
}
