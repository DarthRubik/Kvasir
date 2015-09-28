#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneclk{
        using Addr = Register::Address<0x40050000,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ADCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADSH; 
    }
    namespace Nonemod0{
        using Addr = Register::Address<0x40050004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HPADS; 
    }
    namespace Nonemod1{
        using Addr = Register::Address<0x40050008,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADHWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADHWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HPADHWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HPADHWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RCUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2AD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DACON; 
    }
    namespace Nonemod2{
        using Addr = Register::Address<0x4005000c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HPADCH; 
    }
    namespace Nonemod3{
        using Addr = Register::Address<0x40050010,0xffffff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REPEAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> ITM; 
    }
    namespace Nonemod4{
        using Addr = Register::Address<0x40050014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SCANSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SCANAREA; 
    }
    namespace Nonemod5{
        using Addr = Register::Address<0x40050018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HPADBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HPEOCF; 
    }
    namespace Nonemod6{
        using Addr = Register::Address<0x4005001c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADRST; 
    }
    namespace Nonecmpcr0{
        using Addr = Register::Address<0x40050024,0xfffff040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AINS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADBIG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMPCOND0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMP0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CMPCMT0; 
    }
    namespace Nonecmpcr1{
        using Addr = Register::Address<0x40050028,0xfffff040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AINS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADBIG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMPCOND1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMP1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CMPCMT1; 
    }
    namespace Nonecmp0{
        using Addr = Register::Address<0x4005002c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> AD0CMP; 
    }
    namespace Nonecmp1{
        using Addr = Register::Address<0x40050030,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> AD1CMP; 
    }
    namespace Nonereg00{
        using Addr = Register::Address<0x40050034,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg01{
        using Addr = Register::Address<0x40050038,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg02{
        using Addr = Register::Address<0x4005003c,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg03{
        using Addr = Register::Address<0x40050040,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg04{
        using Addr = Register::Address<0x40050044,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg05{
        using Addr = Register::Address<0x40050048,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg06{
        using Addr = Register::Address<0x4005004c,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg07{
        using Addr = Register::Address<0x40050050,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg08{
        using Addr = Register::Address<0x40050054,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg09{
        using Addr = Register::Address<0x40050058,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg10{
        using Addr = Register::Address<0x4005005c,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg11{
        using Addr = Register::Address<0x40050060,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg12{
        using Addr = Register::Address<0x40050064,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg13{
        using Addr = Register::Address<0x40050068,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg14{
        using Addr = Register::Address<0x4005006c,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Nonereg15{
        using Addr = Register::Address<0x40050070,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADR_MIR; 
    }
    namespace Noneregsp{
        using Addr = Register::Address<0x40050074,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADSPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADSPRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRSPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADSPRF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADOVRSPF_MIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> ADSPR_MIR; 
    }
}
