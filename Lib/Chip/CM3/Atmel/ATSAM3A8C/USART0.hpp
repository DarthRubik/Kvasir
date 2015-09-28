#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace USART0_cr{
        using Addr = Register::Address<0x40098000,0xffc30003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSTTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSTSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STTBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STPBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> STTTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SENDA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RSTIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RSTNACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RETTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RTSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LINABT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LINWKUP; 
    }
    namespace USART0_cr_spi_mode{
        using Addr = Register::Address<0x40098000,0xfff3fe03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSTTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSTSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RCS; 
    }
    namespace USART0_mr{
        using Addr = Register::Address<0x40098004,0x08000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> USART_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> USCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CHRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> PAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CHMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MODE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CLKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OVER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> INACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DSNACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VAR_SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> INVDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MAX_ITERATION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FILTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MODSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ONEBIT; 
    }
    namespace USART0_mr_spi_mode{
        using Addr = Register::Address<0x40098004,0xffeefe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> USART_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> USCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CHRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WRDBT; 
    }
    namespace USART0_ier{
        using Addr = Register::Address<0x40098008,0xfef7c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANE; 
    }
    namespace USART0_ier_spi_mode{
        using Addr = Register::Address<0x40098008,0xfffff9dc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNRE; 
    }
    namespace USART0_ier_lin_mode{
        using Addr = Register::Address<0x40098008,0xc1ff1c1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LINBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LINTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> LINBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> LINISFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> LINIPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LINCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LINSNRE; 
    }
    namespace USART0_idr{
        using Addr = Register::Address<0x4009800c,0xfef7c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANE; 
    }
    namespace USART0_idr_spi_mode{
        using Addr = Register::Address<0x4009800c,0xfffff9dc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNRE; 
    }
    namespace USART0_idr_lin_mode{
        using Addr = Register::Address<0x4009800c,0xc1ff1c1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LINBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LINTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> LINBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> LINISFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> LINIPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LINCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LINSNRE; 
    }
    namespace USART0_imr{
        using Addr = Register::Address<0x40098010,0xfef7c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANE; 
    }
    namespace USART0_imr_spi_mode{
        using Addr = Register::Address<0x40098010,0xfffff9dc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNRE; 
    }
    namespace USART0_imr_lin_mode{
        using Addr = Register::Address<0x40098010,0xc1ff1c1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LINBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LINTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> LINBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> LINISFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> LINIPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LINCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LINSNRE; 
    }
    namespace USART0_csr{
        using Addr = Register::Address<0x40098014,0xfe77c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXBUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CTSIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MANERR; 
    }
    namespace USART0_csr_spi_mode{
        using Addr = Register::Address<0x40098014,0xfffff9dc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UNRE; 
    }
    namespace USART0_csr_lin_mode{
        using Addr = Register::Address<0x40098014,0xc17f1c1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LINBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LINID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LINTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> LINBLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> LINBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> LINISFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> LINIPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LINCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> LINSNRE; 
    }
    namespace USART0_rhr{
        using Addr = Register::Address<0x40098018,0xffff7e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXCHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXSYNH; 
    }
    namespace USART0_thr{
        using Addr = Register::Address<0x4009801c,0xffff7e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TXCHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TXSYNH; 
    }
    namespace USART0_brgr{
        using Addr = Register::Address<0x40098020,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> FP; 
    }
    namespace USART0_rtor{
        using Addr = Register::Address<0x40098024,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> TO; 
    }
    namespace USART0_ttgr{
        using Addr = Register::Address<0x40098028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TG; 
    }
    namespace USART0_fidi{
        using Addr = Register::Address<0x40098040,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> FI_DI_RATIO; 
    }
    namespace USART0_ner{
        using Addr = Register::Address<0x40098044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NB_ERRORS; 
    }
    namespace USART0_if{
        using Addr = Register::Address<0x4009804c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IRDA_FILTER; 
    }
    namespace USART0_man{
        using Addr = Register::Address<0x40098050,0x8cf0ecf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TX_PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TX_PP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TX_MPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RX_PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> RX_PP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RX_MPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DRIFT; 
    }
    namespace USART0_linmr{
        using Addr = Register::Address<0x40098054,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PARDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHKTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WKUPTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDCM; 
    }
    namespace USART0_linir{
        using Addr = Register::Address<0x40098058,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IDCHR; 
    }
    namespace USART0_wpmr{
        using Addr = Register::Address<0x400980e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace USART0_wpsr{
        using Addr = Register::Address<0x400980e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
    namespace USART0_rpr{
        using Addr = Register::Address<0x40098100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace USART0_rcr{
        using Addr = Register::Address<0x40098104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace USART0_tpr{
        using Addr = Register::Address<0x40098108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXPTR; 
    }
    namespace USART0_tcr{
        using Addr = Register::Address<0x4009810c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXCTR; 
    }
    namespace USART0_rnpr{
        using Addr = Register::Address<0x40098110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace USART0_rncr{
        using Addr = Register::Address<0x40098114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace USART0_tnpr{
        using Addr = Register::Address<0x40098118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXNPTR; 
    }
    namespace USART0_tncr{
        using Addr = Register::Address<0x4009811c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXNCTR; 
    }
    namespace USART0_ptcr{
        using Addr = Register::Address<0x40098120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace USART0_ptsr{
        using Addr = Register::Address<0x40098124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
