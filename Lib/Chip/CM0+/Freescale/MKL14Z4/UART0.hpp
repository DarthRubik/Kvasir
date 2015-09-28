#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace UART0_bdh{
        using Addr = Register::Address<0x4006a000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SBNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEDGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LBKDIE; 
    }
    namespace UART0_bdl{
        using Addr = Register::Address<0x4006a001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SBR; 
    }
    namespace UART0_c1{
        using Addr = Register::Address<0x4006a002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ILT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DOZEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOOPS; 
    }
    namespace UART0_c2{
        using Addr = Register::Address<0x4006a003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TIE; 
    }
    namespace UART0_s1{
        using Addr = Register::Address<0x4006a004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TDRE; 
    }
    namespace UART0_s2{
        using Addr = Register::Address<0x4006a005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LBKDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BRK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RWUID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEDGIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LBKDIF; 
    }
    namespace UART0_c3{
        using Addr = Register::Address<0x4006a006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> R9T8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> R8T9; 
    }
    namespace UART0_d{
        using Addr = Register::Address<0x4006a007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> R0T0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> R1T1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> R2T2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> R3T3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> R4T4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> R5T5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> R6T6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> R7T7; 
    }
    namespace UART0_ma1{
        using Addr = Register::Address<0x4006a008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MA; 
    }
    namespace UART0_ma2{
        using Addr = Register::Address<0x4006a009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MA; 
    }
    namespace UART0_c4{
        using Addr = Register::Address<0x4006a00a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> OSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MAEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MAEN1; 
    }
    namespace UART0_c5{
        using Addr = Register::Address<0x4006a00b,0xffffff5c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESYNCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BOTHEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TDMAE; 
    }
}
