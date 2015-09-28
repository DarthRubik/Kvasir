#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace UART3_bdh{
        using Addr = Register::Address<0x4006d000,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEDGIE; 
    }
    namespace UART3_bdl{
        using Addr = Register::Address<0x4006d001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SBR; 
    }
    namespace UART3_c1{
        using Addr = Register::Address<0x4006d002,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ILT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOOPS; 
    }
    namespace UART3_c2{
        using Addr = Register::Address<0x4006d003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TIE; 
    }
    namespace UART3_s1{
        using Addr = Register::Address<0x4006d004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TDRE; 
    }
    namespace UART3_s2{
        using Addr = Register::Address<0x4006d005,0xffffff82>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BRK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RWUID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEDGIF; 
    }
    namespace UART3_c3{
        using Addr = Register::Address<0x4006d006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> T8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> R8; 
    }
    namespace UART3_d{
        using Addr = Register::Address<0x4006d007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RT; 
    }
    namespace UART3_ma1{
        using Addr = Register::Address<0x4006d008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MA; 
    }
    namespace UART3_ma2{
        using Addr = Register::Address<0x4006d009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MA; 
    }
    namespace UART3_c4{
        using Addr = Register::Address<0x4006d00a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> BRFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MAEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MAEN1; 
    }
    namespace UART3_c5{
        using Addr = Register::Address<0x4006d00b,0xffffff5f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TDMAS; 
    }
    namespace UART3_ed{
        using Addr = Register::Address<0x4006d00c,0xffffff3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PARITYE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOISY; 
    }
    namespace UART3_modem{
        using Addr = Register::Address<0x4006d00d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRTSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXRTSE; 
    }
    namespace UART3_pfifo{
        using Addr = Register::Address<0x4006d010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RXFIFOSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TXFIFOSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
    }
    namespace UART3_cfifo{
        using Addr = Register::Address<0x4006d011,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXFLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFLUSH; 
    }
    namespace UART3_sfifo{
        using Addr = Register::Address<0x4006d012,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXEMPT; 
    }
    namespace UART3_twfifo{
        using Addr = Register::Address<0x4006d013,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXWATER; 
    }
    namespace UART3_tcfifo{
        using Addr = Register::Address<0x4006d014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXCOUNT; 
    }
    namespace UART3_rwfifo{
        using Addr = Register::Address<0x4006d015,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXWATER; 
    }
    namespace UART3_rcfifo{
        using Addr = Register::Address<0x4006d016,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXCOUNT; 
    }
    namespace UART3_c7816{
        using Addr = Register::Address<0x4006d018,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISO_7816E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ANACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ONACK; 
    }
    namespace UART3_ie7816{
        using Addr = Register::Address<0x4006d019,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GTVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INITDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BWTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CWTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WTE; 
    }
    namespace UART3_is7816{
        using Addr = Register::Address<0x4006d01a,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GTV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INITD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WT; 
    }
    namespace UART3_wp7816t0{
        using Addr = Register::Address<0x4006d01b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WI; 
    }
    namespace UART3_wp7816t1{
        using Addr = Register::Address<0x4006d01b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BWI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CWI; 
    }
    namespace UART3_wn7816{
        using Addr = Register::Address<0x4006d01c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GTN; 
    }
    namespace UART3_wf7816{
        using Addr = Register::Address<0x4006d01d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GTFD; 
    }
    namespace UART3_et7816{
        using Addr = Register::Address<0x4006d01e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RXTHRESHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TXTHRESHOLD; 
    }
    namespace UART3_tl7816{
        using Addr = Register::Address<0x4006d01f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TLEN; 
    }
}
