#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebcr1{
        using Addr = Register::Address<0xa0000000,0xfff70480>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CBURSTRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ASYNCWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAITCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WAITPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BURSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FACCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MBKEN; 
    }
    namespace Nonebtr1{
        using Addr = Register::Address<0xa0000004,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BUSTURN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebcr2{
        using Addr = Register::Address<0xa0000008,0xfff70080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CBURSTRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ASYNCWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAITCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WRAPMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WAITPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BURSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FACCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MBKEN; 
    }
    namespace Nonebtr2{
        using Addr = Register::Address<0xa000000c,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BUSTURN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebcr3{
        using Addr = Register::Address<0xa0000010,0xfff70080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CBURSTRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ASYNCWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAITCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WRAPMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WAITPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BURSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FACCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MBKEN; 
    }
    namespace Nonebtr3{
        using Addr = Register::Address<0xa0000014,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BUSTURN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebcr4{
        using Addr = Register::Address<0xa0000018,0xfff70080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CBURSTRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ASYNCWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAITCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WRAPMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WAITPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BURSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FACCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MBKEN; 
    }
    namespace Nonebtr4{
        using Addr = Register::Address<0xa000001c,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BUSTURN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonepcr2{
        using Addr = Register::Address<0xa0000060,0xfff00181>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> ECCPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13)> TAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9)> TCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ECCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PBKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWAITEN; 
    }
    namespace Nonesr2{
        using Addr = Register::Address<0xa0000064,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ILS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRS; 
    }
    namespace Nonepmem2{
        using Addr = Register::Address<0xa0000068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> MEMHIZx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MEMHOLDx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MEMWAITx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MEMSETx; 
    }
    namespace Nonepatt2{
        using Addr = Register::Address<0xa000006c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ATTHIZx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ATTHOLDx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ATTWAITx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ATTSETx; 
    }
    namespace Noneeccr2{
        using Addr = Register::Address<0xa0000074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECCx; 
    }
    namespace Nonepcr3{
        using Addr = Register::Address<0xa0000080,0xfff00181>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> ECCPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13)> TAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9)> TCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ECCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PBKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWAITEN; 
    }
    namespace Nonesr3{
        using Addr = Register::Address<0xa0000084,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ILS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRS; 
    }
    namespace Nonepmem3{
        using Addr = Register::Address<0xa0000088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> MEMHIZx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MEMHOLDx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MEMWAITx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MEMSETx; 
    }
    namespace Nonepatt3{
        using Addr = Register::Address<0xa000008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ATTHIZx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ATTHOLDx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ATTWAITx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ATTSETx; 
    }
    namespace Noneeccr3{
        using Addr = Register::Address<0xa0000094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECCx; 
    }
    namespace Nonepcr4{
        using Addr = Register::Address<0xa00000a0,0xfff00181>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> ECCPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13)> TAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9)> TCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ECCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PBKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWAITEN; 
    }
    namespace Nonesr4{
        using Addr = Register::Address<0xa00000a4,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ILS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRS; 
    }
    namespace Nonepmem4{
        using Addr = Register::Address<0xa00000a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> MEMHIZx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MEMHOLDx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MEMWAITx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MEMSETx; 
    }
    namespace Nonepatt4{
        using Addr = Register::Address<0xa00000ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ATTHIZx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ATTHOLDx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ATTWAITx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ATTSETx; 
    }
    namespace Nonepio4{
        using Addr = Register::Address<0xa00000b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IOHIZx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IOHOLDx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IOWAITx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IOSETx; 
    }
    namespace Nonebwtr1{
        using Addr = Register::Address<0xa0000104,0xc00f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebwtr2{
        using Addr = Register::Address<0xa000010c,0xc00f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebwtr3{
        using Addr = Register::Address<0xa0000114,0xc00f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebwtr4{
        using Addr = Register::Address<0xa000011c,0xc00f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
}
