#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AXBS_prs0{
        using Addr = Register::Address<0x40004000,0xff888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> M1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> M2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> M4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> M5; 
    }
    namespace AXBS_prs1{
        using Addr = Register::Address<0x40004100,0xff888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> M1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> M2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> M4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> M5; 
    }
    namespace AXBS_prs2{
        using Addr = Register::Address<0x40004200,0xff888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> M1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> M2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> M4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> M5; 
    }
    namespace AXBS_prs3{
        using Addr = Register::Address<0x40004300,0xff888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> M0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> M1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> M2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> M3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> M4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> M5; 
    }
    namespace AXBS_crs0{
        using Addr = Register::Address<0x40004010,0x3ffffcc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> HLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO; 
    }
    namespace AXBS_crs1{
        using Addr = Register::Address<0x40004110,0x3ffffcc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> HLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO; 
    }
    namespace AXBS_crs2{
        using Addr = Register::Address<0x40004210,0x3ffffcc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> HLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO; 
    }
    namespace AXBS_crs3{
        using Addr = Register::Address<0x40004310,0x3ffffcc8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PARK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> HLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO; 
    }
    namespace AXBS_mgpcr0{
        using Addr = Register::Address<0x40004800,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AULB; 
    }
    namespace AXBS_mgpcr1{
        using Addr = Register::Address<0x40004900,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AULB; 
    }
    namespace AXBS_mgpcr2{
        using Addr = Register::Address<0x40004a00,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AULB; 
    }
    namespace AXBS_mgpcr3{
        using Addr = Register::Address<0x40004b00,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AULB; 
    }
}
