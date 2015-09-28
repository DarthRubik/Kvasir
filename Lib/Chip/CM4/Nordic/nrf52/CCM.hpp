#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_ksgen{
        using Addr = Register::Address<0x4000f000,0xffffffff>;
    }
    namespace Nonetasks_crypt{
        using Addr = Register::Address<0x4000f004,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x4000f008,0xffffffff>;
    }
    namespace Noneevents_endksgen{
        using Addr = Register::Address<0x4000f100,0xffffffff>;
    }
    namespace Noneevents_endcrypt{
        using Addr = Register::Address<0x4000f104,0xffffffff>;
    }
    namespace Noneevents_error{
        using Addr = Register::Address<0x4000f108,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x4000f200,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENDKSGEN_CRYPT; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4000f304,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENDKSGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDCRYPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERROR; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x4000f308,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENDKSGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENDCRYPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERROR; 
    }
    namespace Nonemicstatus{
        using Addr = Register::Address<0x4000f400,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MICSTATUS; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x4000f500,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ENABLE; 
    }
    namespace Nonemode{
        using Addr = Register::Address<0x4000f504,0xfefefffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DATARATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> LENGTH; 
    }
    namespace Nonecnfptr{
        using Addr = Register::Address<0x4000f508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CNFPTR; 
    }
    namespace Noneinptr{
        using Addr = Register::Address<0x4000f50c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> INPTR; 
    }
    namespace Noneoutptr{
        using Addr = Register::Address<0x4000f510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OUTPTR; 
    }
    namespace Nonescratchptr{
        using Addr = Register::Address<0x4000f514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SCRATCHPTR; 
    }
}
