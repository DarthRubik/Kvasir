#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneuart_scr{
        using Addr = Register::Address<0x40038001,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXE; 
    }
    namespace Noneuart_smr{
        using Addr = Register::Address<0x40038000,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOE; 
    }
    namespace Noneuart_ssr{
        using Addr = Register::Address<0x40038005,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TBI; 
    }
    namespace Noneuart_escr{
        using Addr = Register::Address<0x40038004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ESBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> L; 
    }
    namespace Noneuart_rdr{
        using Addr = Register::Address<0x40038008,0xffffffff>;
    }
    namespace Noneuart_tdr{
        using Addr = Register::Address<0x40038008,0xffffffff>;
    }
    namespace Noneuart_bgr{
        using Addr = Register::Address<0x4003800c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> BGR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BGR0; 
    }
    namespace Noneuart_fcr1{
        using Addr = Register::Address<0x40038015,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLSTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSEL; 
    }
    namespace Noneuart_fcr0{
        using Addr = Register::Address<0x40038014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FCL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FCL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FE1; 
    }
    namespace Noneuart_fbyte1{
        using Addr = Register::Address<0x40038018,0xffffffff>;
    }
    namespace Noneuart_fbyte2{
        using Addr = Register::Address<0x40038019,0xffffffff>;
    }
    namespace Nonecsio_scr{
        using Addr = Register::Address<0x40038001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXE; 
    }
    namespace Nonecsio_smr{
        using Addr = Register::Address<0x40038000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SCINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOE; 
    }
    namespace Nonecsio_ssr{
        using Addr = Register::Address<0x40038005,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TBI; 
    }
    namespace Nonecsio_escr{
        using Addr = Register::Address<0x40038004,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> WT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> L; 
    }
    namespace Nonecsio_rdr{
        using Addr = Register::Address<0x40038008,0xffffffff>;
    }
    namespace Nonecsio_tdr{
        using Addr = Register::Address<0x40038008,0xffffffff>;
    }
    namespace Nonecsio_bgr{
        using Addr = Register::Address<0x4003800c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> BGR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BGR0; 
    }
    namespace Nonecsio_fcr1{
        using Addr = Register::Address<0x40038015,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLSTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSEL; 
    }
    namespace Nonecsio_fcr0{
        using Addr = Register::Address<0x40038014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FCL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FCL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FE1; 
    }
    namespace Nonecsio_fbyte1{
        using Addr = Register::Address<0x40038018,0xffffffff>;
    }
    namespace Nonecsio_fbyte2{
        using Addr = Register::Address<0x40038019,0xffffffff>;
    }
    namespace Nonelin_scr{
        using Addr = Register::Address<0x40038001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXE; 
    }
    namespace Nonelin_smr{
        using Addr = Register::Address<0x40038000,0xffffff06>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOE; 
    }
    namespace Nonelin_ssr{
        using Addr = Register::Address<0x40038005,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LBD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TBI; 
    }
    namespace Nonelin_escr{
        using Addr = Register::Address<0x40038004,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ESBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> LBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DEL; 
    }
    namespace Nonelin_rdr{
        using Addr = Register::Address<0x40038008,0xffffffff>;
    }
    namespace Nonelin_tdr{
        using Addr = Register::Address<0x40038008,0xffffffff>;
    }
    namespace Nonelin_bgr{
        using Addr = Register::Address<0x4003800c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> BGR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BGR0; 
    }
    namespace Nonelin_fcr1{
        using Addr = Register::Address<0x40038015,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLSTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSEL; 
    }
    namespace Nonelin_fcr0{
        using Addr = Register::Address<0x40038014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FCL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FCL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FE1; 
    }
    namespace Nonelin_fbyte1{
        using Addr = Register::Address<0x40038018,0xffffffff>;
    }
    namespace Nonelin_fbyte2{
        using Addr = Register::Address<0x40038019,0xffffffff>;
    }
    namespace Nonei2c_ibcr{
        using Addr = Register::Address<0x40038001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACT_SCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CNDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT; 
    }
    namespace Nonei2c_smr{
        using Addr = Register::Address<0x40038000,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIE; 
    }
    namespace Nonei2c_ibsr{
        using Addr = Register::Address<0x40038004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FBT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BB; 
    }
    namespace Nonei2c_ssr{
        using Addr = Register::Address<0x40038005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TBI; 
    }
    namespace Nonei2c_rdr{
        using Addr = Register::Address<0x40038008,0xffffffff>;
    }
    namespace Nonei2c_tdr{
        using Addr = Register::Address<0x40038008,0xffffffff>;
    }
    namespace Nonei2c_ismk{
        using Addr = Register::Address<0x40038011,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> SM; 
    }
    namespace Nonei2c_isba{
        using Addr = Register::Address<0x40038010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> SA; 
    }
    namespace Nonei2c_bgr{
        using Addr = Register::Address<0x4003800c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> BGR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BGR0; 
    }
    namespace Nonei2c_fcr1{
        using Addr = Register::Address<0x40038015,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLSTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSEL; 
    }
    namespace Nonei2c_fcr0{
        using Addr = Register::Address<0x40038014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FCL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FCL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FE1; 
    }
    namespace Nonei2c_fbyte1{
        using Addr = Register::Address<0x40038018,0xffffffff>;
    }
    namespace Nonei2c_fbyte2{
        using Addr = Register::Address<0x40038019,0xffffffff>;
    }
}
