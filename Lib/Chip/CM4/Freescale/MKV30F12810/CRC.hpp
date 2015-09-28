#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CRC_data{
        using Addr = Register::Address<0x40032000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HU; 
    }
    namespace CRC_datal{
        using Addr = Register::Address<0x40032000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATAL; 
    }
    namespace CRC_datall{
        using Addr = Register::Address<0x40032000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATALL; 
    }
    namespace CRC_datalu{
        using Addr = Register::Address<0x40032001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATALU; 
    }
    namespace CRC_datah{
        using Addr = Register::Address<0x40032002,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATAH; 
    }
    namespace CRC_datahl{
        using Addr = Register::Address<0x40032002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATAHL; 
    }
    namespace CRC_datahu{
        using Addr = Register::Address<0x40032003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATAHU; 
    }
    namespace CRC_gpoly{
        using Addr = Register::Address<0x40032004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> HIGH; 
    }
    namespace CRC_gpolyl{
        using Addr = Register::Address<0x40032004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPOLYL; 
    }
    namespace CRC_gpolyll{
        using Addr = Register::Address<0x40032004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYLL; 
    }
    namespace CRC_gpolylu{
        using Addr = Register::Address<0x40032005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYLU; 
    }
    namespace CRC_gpolyh{
        using Addr = Register::Address<0x40032006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPOLYH; 
    }
    namespace CRC_gpolyhl{
        using Addr = Register::Address<0x40032006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYHL; 
    }
    namespace CRC_gpolyhu{
        using Addr = Register::Address<0x40032007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GPOLYHU; 
    }
    namespace CRC_ctrl{
        using Addr = Register::Address<0x40032008,0x08ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> FXOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TOTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> TOT; 
    }
    namespace CRC_ctrlhu{
        using Addr = Register::Address<0x4003200b,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FXOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TOTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOT; 
    }
}
