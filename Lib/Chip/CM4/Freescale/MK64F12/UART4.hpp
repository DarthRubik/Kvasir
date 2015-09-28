#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace UART4_bdh{
        using Addr = Register::Address<0x400ea000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SBNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEDGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LBKDIE; 
    }
    namespace UART4_bdl{
        using Addr = Register::Address<0x400ea001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SBR; 
    }
    namespace UART4_c1{
        using Addr = Register::Address<0x400ea002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ILT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UARTSWAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOOPS; 
    }
    namespace UART4_c2{
        using Addr = Register::Address<0x400ea003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TIE; 
    }
    namespace UART4_s1{
        using Addr = Register::Address<0x400ea004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TDRE; 
    }
    namespace UART4_s2{
        using Addr = Register::Address<0x400ea005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LBKDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BRK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RWUID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEDGIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LBKDIF; 
    }
    namespace UART4_c3{
        using Addr = Register::Address<0x400ea006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> T8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> R8; 
    }
    namespace UART4_d{
        using Addr = Register::Address<0x400ea007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RT; 
    }
    namespace UART4_ma1{
        using Addr = Register::Address<0x400ea008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MA; 
    }
    namespace UART4_ma2{
        using Addr = Register::Address<0x400ea009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MA; 
    }
    namespace UART4_c4{
        using Addr = Register::Address<0x400ea00a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> BRFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MAEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MAEN1; 
    }
    namespace UART4_c5{
        using Addr = Register::Address<0x400ea00b,0xffffff07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LBKDDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TCDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TDMAS; 
    }
    namespace UART4_ed{
        using Addr = Register::Address<0x400ea00c,0xffffff3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PARITYE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOISY; 
    }
    namespace UART4_modem{
        using Addr = Register::Address<0x400ea00d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRTSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXRTSE; 
    }
    namespace UART4_ir{
        using Addr = Register::Address<0x400ea00e,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TNP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IREN; 
    }
    namespace UART4_pfifo{
        using Addr = Register::Address<0x400ea010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RXFIFOSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TXFIFOSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
    }
    namespace UART4_cfifo{
        using Addr = Register::Address<0x400ea011,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXFLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFLUSH; 
    }
    namespace UART4_sfifo{
        using Addr = Register::Address<0x400ea012,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXEMPT; 
    }
    namespace UART4_twfifo{
        using Addr = Register::Address<0x400ea013,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXWATER; 
    }
    namespace UART4_tcfifo{
        using Addr = Register::Address<0x400ea014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXCOUNT; 
    }
    namespace UART4_rwfifo{
        using Addr = Register::Address<0x400ea015,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXWATER; 
    }
    namespace UART4_rcfifo{
        using Addr = Register::Address<0x400ea016,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXCOUNT; 
    }
}
