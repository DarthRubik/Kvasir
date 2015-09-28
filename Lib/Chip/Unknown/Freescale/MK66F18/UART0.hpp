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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UARTSWAI; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> T8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> R8; 
    }
    namespace UART0_d{
        using Addr = Register::Address<0x4006a007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RT; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> BRFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MAEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MAEN1; 
    }
    namespace UART0_c5{
        using Addr = Register::Address<0x4006a00b,0xffffff5f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TDMAS; 
    }
    namespace UART0_ed{
        using Addr = Register::Address<0x4006a00c,0xffffff3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PARITYE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOISY; 
    }
    namespace UART0_modem{
        using Addr = Register::Address<0x4006a00d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRTSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXRTSE; 
    }
    namespace UART0_ir{
        using Addr = Register::Address<0x4006a00e,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TNP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IREN; 
    }
    namespace UART0_pfifo{
        using Addr = Register::Address<0x4006a010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RXFIFOSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TXFIFOSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
    }
    namespace UART0_cfifo{
        using Addr = Register::Address<0x4006a011,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXFLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFLUSH; 
    }
    namespace UART0_sfifo{
        using Addr = Register::Address<0x4006a012,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXEMPT; 
    }
    namespace UART0_twfifo{
        using Addr = Register::Address<0x4006a013,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXWATER; 
    }
    namespace UART0_tcfifo{
        using Addr = Register::Address<0x4006a014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXCOUNT; 
    }
    namespace UART0_rwfifo{
        using Addr = Register::Address<0x4006a015,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXWATER; 
    }
    namespace UART0_rcfifo{
        using Addr = Register::Address<0x4006a016,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXCOUNT; 
    }
    namespace UART0_c7816{
        using Addr = Register::Address<0x4006a018,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISO_7816E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ANACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ONACK; 
    }
    namespace UART0_ie7816{
        using Addr = Register::Address<0x4006a019,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GTVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INITDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BWTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CWTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WTE; 
    }
    namespace UART0_is7816{
        using Addr = Register::Address<0x4006a01a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GTV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INITD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WT; 
    }
    namespace UART0_wp7816{
        using Addr = Register::Address<0x4006a01b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WTX; 
    }
    namespace UART0_wn7816{
        using Addr = Register::Address<0x4006a01c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GTN; 
    }
    namespace UART0_wf7816{
        using Addr = Register::Address<0x4006a01d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GTFD; 
    }
    namespace UART0_et7816{
        using Addr = Register::Address<0x4006a01e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RXTHRESHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TXTHRESHOLD; 
    }
    namespace UART0_tl7816{
        using Addr = Register::Address<0x4006a01f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TLEN; 
    }
    namespace UART0_ap7816a_t0{
        using Addr = Register::Address<0x4006a03a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADTI_H; 
    }
    namespace UART0_ap7816b_t0{
        using Addr = Register::Address<0x4006a03b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADTI_L; 
    }
    namespace UART0_wp7816a_t1{
        using Addr = Register::Address<0x4006a03c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BWI_H; 
    }
    namespace UART0_wp7816a_t0{
        using Addr = Register::Address<0x4006a03c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WI_H; 
    }
    namespace UART0_wp7816b_t1{
        using Addr = Register::Address<0x4006a03d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BWI_L; 
    }
    namespace UART0_wp7816b_t0{
        using Addr = Register::Address<0x4006a03d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WI_L; 
    }
    namespace UART0_wgp7816_t1{
        using Addr = Register::Address<0x4006a03e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BGI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CWI1; 
    }
    namespace UART0_wp7816c_t1{
        using Addr = Register::Address<0x4006a03f,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CWI2; 
    }
}
