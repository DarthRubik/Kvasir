#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CMT_cgh1{
        using Addr = Register::Address<0x40062000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PH; 
    }
    namespace CMT_cgl1{
        using Addr = Register::Address<0x40062001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PL; 
    }
    namespace CMT_cgh2{
        using Addr = Register::Address<0x40062002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SH; 
    }
    namespace CMT_cgl2{
        using Addr = Register::Address<0x40062003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SL; 
    }
    namespace CMT_oc{
        using Addr = Register::Address<0x40062004,0xffffff1f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IROPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMTPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IROL; 
    }
    namespace CMT_msc{
        using Addr = Register::Address<0x40062005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXSPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> CMTDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOCF; 
    }
    namespace CMT_cmd1{
        using Addr = Register::Address<0x40062006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MB; 
    }
    namespace CMT_cmd2{
        using Addr = Register::Address<0x40062007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MB; 
    }
    namespace CMT_cmd3{
        using Addr = Register::Address<0x40062008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SB; 
    }
    namespace CMT_cmd4{
        using Addr = Register::Address<0x40062009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SB; 
    }
    namespace CMT_pps{
        using Addr = Register::Address<0x4006200a,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PPSDIV; 
    }
    namespace CMT_dma{
        using Addr = Register::Address<0x4006200b,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA; 
    }
}
