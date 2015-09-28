#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PDB0_sc{
        using Addr = Register::Address<0x40025000,0xfff00010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LDOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PDBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PDBIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PDBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> PRESCALER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PDBEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LDMOD; 
    }
    namespace PDB0_mod{
        using Addr = Register::Address<0x40025004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace PDB0_cnt{
        using Addr = Register::Address<0x40025008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace PDB0_idly{
        using Addr = Register::Address<0x4002500c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IDLY; 
    }
    namespace PDB0_chc1{
        using Addr = Register::Address<0x40025010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TOS; 
    }
    namespace PDB0_chs{
        using Addr = Register::Address<0x40025014,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CF; 
    }
    namespace PDB0_chdly0{
        using Addr = Register::Address<0x40025018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB0_chdly1{
        using Addr = Register::Address<0x4002501c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB0_chdly2{
        using Addr = Register::Address<0x40025020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB0_chdly3{
        using Addr = Register::Address<0x40025024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY; 
    }
    namespace PDB0_poen{
        using Addr = Register::Address<0x40025190,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> POEN; 
    }
    namespace PDB0_podly{
        using Addr = Register::Address<0x40025194,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DLY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DLY1; 
    }
}
