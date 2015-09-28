#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40013000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BIDIMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BIDIOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCNEXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXONLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LSBFIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> BR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPHA; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40013004,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXNEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SSOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXDMAEN; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40013008,0xffffff0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXNE; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x4001300c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DR; 
    }
    namespace Nonecrcpr{
        using Addr = Register::Address<0x40013010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRCPOLY; 
    }
    namespace Nonerxcrcr{
        using Addr = Register::Address<0x40013014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RxCRC; 
    }
    namespace Nonetxcrcr{
        using Addr = Register::Address<0x40013018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TxCRC; 
    }
}
