#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DMA_cr{
        using Addr = Register::Address<0x40008000,0xfffcf001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EDBG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERCA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERGA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EMLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> GRP0PRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> GRP1PRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ECX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CX; 
    }
    namespace DMA_es{
        using Addr = Register::Address<0x40008004,0x7ffe2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> ERRCHN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ECX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> VLD; 
    }
    namespace DMA_erq{
        using Addr = Register::Address<0x4000800c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERQ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ERQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERQ7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERQ8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERQ9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERQ10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ERQ11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERQ12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERQ13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERQ14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ERQ15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERQ16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERQ17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERQ18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERQ19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERQ20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERQ21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ERQ22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ERQ23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ERQ24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ERQ25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ERQ26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ERQ27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ERQ28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ERQ29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ERQ30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ERQ31; 
    }
    namespace DMA_eei{
        using Addr = Register::Address<0x40008014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EEI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EEI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EEI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EEI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EEI4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EEI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EEI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EEI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EEI8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EEI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EEI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EEI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EEI12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EEI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EEI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EEI15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EEI16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EEI17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EEI18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EEI19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EEI20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EEI21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EEI22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EEI23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EEI24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EEI25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EEI26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EEI27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EEI28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EEI29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EEI30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EEI31; 
    }
    namespace DMA_ceei{
        using Addr = Register::Address<0x40008018,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CEEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_seei{
        using Addr = Register::Address<0x40008019,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SEEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SAEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_cerq{
        using Addr = Register::Address<0x4000801a,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CERQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_serq{
        using Addr = Register::Address<0x4000801b,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SERQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SAER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_cdne{
        using Addr = Register::Address<0x4000801c,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CDNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CADN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_ssrt{
        using Addr = Register::Address<0x4000801d,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SSRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_cerr{
        using Addr = Register::Address<0x4000801e,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_cint{
        using Addr = Register::Address<0x4000801f,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_int{
        using Addr = Register::Address<0x40008024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> INT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> INT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> INT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> INT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INT15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INT16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> INT17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> INT18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> INT19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> INT20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> INT21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> INT22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> INT23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> INT24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> INT25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> INT26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> INT27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> INT28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> INT29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> INT30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> INT31; 
    }
    namespace DMA_err{
        using Addr = Register::Address<0x4000802c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ERR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ERR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ERR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ERR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ERR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ERR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ERR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ERR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ERR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ERR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ERR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ERR31; 
    }
    namespace DMA_hrs{
        using Addr = Register::Address<0x40008034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HRS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HRS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HRS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HRS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HRS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HRS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HRS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HRS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HRS8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HRS9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HRS10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HRS11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HRS12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> HRS13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> HRS14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> HRS15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> HRS16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HRS17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HRS18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HRS19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> HRS20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> HRS21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> HRS22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> HRS23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> HRS24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> HRS25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> HRS26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> HRS27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> HRS28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> HRS29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> HRS30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> HRS31; 
    }
    namespace DMA_dchpri3{
        using Addr = Register::Address<0x40008100,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri2{
        using Addr = Register::Address<0x40008101,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri1{
        using Addr = Register::Address<0x40008102,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri0{
        using Addr = Register::Address<0x40008103,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri7{
        using Addr = Register::Address<0x40008104,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri6{
        using Addr = Register::Address<0x40008105,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri5{
        using Addr = Register::Address<0x40008106,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri4{
        using Addr = Register::Address<0x40008107,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri11{
        using Addr = Register::Address<0x40008108,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri10{
        using Addr = Register::Address<0x40008109,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri9{
        using Addr = Register::Address<0x4000810a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri8{
        using Addr = Register::Address<0x4000810b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri15{
        using Addr = Register::Address<0x4000810c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri14{
        using Addr = Register::Address<0x4000810d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri13{
        using Addr = Register::Address<0x4000810e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri12{
        using Addr = Register::Address<0x4000810f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri19{
        using Addr = Register::Address<0x40008110,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri18{
        using Addr = Register::Address<0x40008111,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri17{
        using Addr = Register::Address<0x40008112,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri16{
        using Addr = Register::Address<0x40008113,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri23{
        using Addr = Register::Address<0x40008114,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri22{
        using Addr = Register::Address<0x40008115,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri21{
        using Addr = Register::Address<0x40008116,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri20{
        using Addr = Register::Address<0x40008117,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri27{
        using Addr = Register::Address<0x40008118,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri26{
        using Addr = Register::Address<0x40008119,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri25{
        using Addr = Register::Address<0x4000811a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri24{
        using Addr = Register::Address<0x4000811b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri31{
        using Addr = Register::Address<0x4000811c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri30{
        using Addr = Register::Address<0x4000811d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri29{
        using Addr = Register::Address<0x4000811e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri28{
        using Addr = Register::Address<0x4000811f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GRPPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_tcd0_saddr{
        using Addr = Register::Address<0x40009000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd1_saddr{
        using Addr = Register::Address<0x40009020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd2_saddr{
        using Addr = Register::Address<0x40009040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd3_saddr{
        using Addr = Register::Address<0x40009060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd4_saddr{
        using Addr = Register::Address<0x40009080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd5_saddr{
        using Addr = Register::Address<0x400090a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd6_saddr{
        using Addr = Register::Address<0x400090c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd7_saddr{
        using Addr = Register::Address<0x400090e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd8_saddr{
        using Addr = Register::Address<0x40009100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd9_saddr{
        using Addr = Register::Address<0x40009120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd10_saddr{
        using Addr = Register::Address<0x40009140,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd11_saddr{
        using Addr = Register::Address<0x40009160,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd12_saddr{
        using Addr = Register::Address<0x40009180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd13_saddr{
        using Addr = Register::Address<0x400091a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd14_saddr{
        using Addr = Register::Address<0x400091c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd15_saddr{
        using Addr = Register::Address<0x400091e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd16_saddr{
        using Addr = Register::Address<0x40009200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd17_saddr{
        using Addr = Register::Address<0x40009220,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd18_saddr{
        using Addr = Register::Address<0x40009240,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd19_saddr{
        using Addr = Register::Address<0x40009260,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd20_saddr{
        using Addr = Register::Address<0x40009280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd21_saddr{
        using Addr = Register::Address<0x400092a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd22_saddr{
        using Addr = Register::Address<0x400092c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd23_saddr{
        using Addr = Register::Address<0x400092e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd24_saddr{
        using Addr = Register::Address<0x40009300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd25_saddr{
        using Addr = Register::Address<0x40009320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd26_saddr{
        using Addr = Register::Address<0x40009340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd27_saddr{
        using Addr = Register::Address<0x40009360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd28_saddr{
        using Addr = Register::Address<0x40009380,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd29_saddr{
        using Addr = Register::Address<0x400093a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd30_saddr{
        using Addr = Register::Address<0x400093c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd31_saddr{
        using Addr = Register::Address<0x400093e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd0_soff{
        using Addr = Register::Address<0x40009004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd1_soff{
        using Addr = Register::Address<0x40009024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd2_soff{
        using Addr = Register::Address<0x40009044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd3_soff{
        using Addr = Register::Address<0x40009064,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd4_soff{
        using Addr = Register::Address<0x40009084,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd5_soff{
        using Addr = Register::Address<0x400090a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd6_soff{
        using Addr = Register::Address<0x400090c4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd7_soff{
        using Addr = Register::Address<0x400090e4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd8_soff{
        using Addr = Register::Address<0x40009104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd9_soff{
        using Addr = Register::Address<0x40009124,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd10_soff{
        using Addr = Register::Address<0x40009144,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd11_soff{
        using Addr = Register::Address<0x40009164,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd12_soff{
        using Addr = Register::Address<0x40009184,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd13_soff{
        using Addr = Register::Address<0x400091a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd14_soff{
        using Addr = Register::Address<0x400091c4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd15_soff{
        using Addr = Register::Address<0x400091e4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd16_soff{
        using Addr = Register::Address<0x40009204,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd17_soff{
        using Addr = Register::Address<0x40009224,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd18_soff{
        using Addr = Register::Address<0x40009244,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd19_soff{
        using Addr = Register::Address<0x40009264,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd20_soff{
        using Addr = Register::Address<0x40009284,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd21_soff{
        using Addr = Register::Address<0x400092a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd22_soff{
        using Addr = Register::Address<0x400092c4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd23_soff{
        using Addr = Register::Address<0x400092e4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd24_soff{
        using Addr = Register::Address<0x40009304,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd25_soff{
        using Addr = Register::Address<0x40009324,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd26_soff{
        using Addr = Register::Address<0x40009344,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd27_soff{
        using Addr = Register::Address<0x40009364,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd28_soff{
        using Addr = Register::Address<0x40009384,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd29_soff{
        using Addr = Register::Address<0x400093a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd30_soff{
        using Addr = Register::Address<0x400093c4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd31_soff{
        using Addr = Register::Address<0x400093e4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd0_attr{
        using Addr = Register::Address<0x40009006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd1_attr{
        using Addr = Register::Address<0x40009026,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd2_attr{
        using Addr = Register::Address<0x40009046,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd3_attr{
        using Addr = Register::Address<0x40009066,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd4_attr{
        using Addr = Register::Address<0x40009086,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd5_attr{
        using Addr = Register::Address<0x400090a6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd6_attr{
        using Addr = Register::Address<0x400090c6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd7_attr{
        using Addr = Register::Address<0x400090e6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd8_attr{
        using Addr = Register::Address<0x40009106,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd9_attr{
        using Addr = Register::Address<0x40009126,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd10_attr{
        using Addr = Register::Address<0x40009146,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd11_attr{
        using Addr = Register::Address<0x40009166,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd12_attr{
        using Addr = Register::Address<0x40009186,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd13_attr{
        using Addr = Register::Address<0x400091a6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd14_attr{
        using Addr = Register::Address<0x400091c6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd15_attr{
        using Addr = Register::Address<0x400091e6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd16_attr{
        using Addr = Register::Address<0x40009206,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd17_attr{
        using Addr = Register::Address<0x40009226,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd18_attr{
        using Addr = Register::Address<0x40009246,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd19_attr{
        using Addr = Register::Address<0x40009266,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd20_attr{
        using Addr = Register::Address<0x40009286,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd21_attr{
        using Addr = Register::Address<0x400092a6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd22_attr{
        using Addr = Register::Address<0x400092c6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd23_attr{
        using Addr = Register::Address<0x400092e6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd24_attr{
        using Addr = Register::Address<0x40009306,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd25_attr{
        using Addr = Register::Address<0x40009326,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd26_attr{
        using Addr = Register::Address<0x40009346,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd27_attr{
        using Addr = Register::Address<0x40009366,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd28_attr{
        using Addr = Register::Address<0x40009386,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd29_attr{
        using Addr = Register::Address<0x400093a6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd30_attr{
        using Addr = Register::Address<0x400093c6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd31_attr{
        using Addr = Register::Address<0x400093e6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd0_nbytes_mloffyes{
        using Addr = Register::Address<0x40009008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd1_nbytes_mloffyes{
        using Addr = Register::Address<0x40009028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd2_nbytes_mloffyes{
        using Addr = Register::Address<0x40009048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd3_nbytes_mloffyes{
        using Addr = Register::Address<0x40009068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd4_nbytes_mloffyes{
        using Addr = Register::Address<0x40009088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd5_nbytes_mloffyes{
        using Addr = Register::Address<0x400090a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd6_nbytes_mloffyes{
        using Addr = Register::Address<0x400090c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd7_nbytes_mloffyes{
        using Addr = Register::Address<0x400090e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd8_nbytes_mloffyes{
        using Addr = Register::Address<0x40009108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd9_nbytes_mloffyes{
        using Addr = Register::Address<0x40009128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd10_nbytes_mloffyes{
        using Addr = Register::Address<0x40009148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd11_nbytes_mloffyes{
        using Addr = Register::Address<0x40009168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd12_nbytes_mloffyes{
        using Addr = Register::Address<0x40009188,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd13_nbytes_mloffyes{
        using Addr = Register::Address<0x400091a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd14_nbytes_mloffyes{
        using Addr = Register::Address<0x400091c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd15_nbytes_mloffyes{
        using Addr = Register::Address<0x400091e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd16_nbytes_mloffyes{
        using Addr = Register::Address<0x40009208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd17_nbytes_mloffyes{
        using Addr = Register::Address<0x40009228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd18_nbytes_mloffyes{
        using Addr = Register::Address<0x40009248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd19_nbytes_mloffyes{
        using Addr = Register::Address<0x40009268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd20_nbytes_mloffyes{
        using Addr = Register::Address<0x40009288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd21_nbytes_mloffyes{
        using Addr = Register::Address<0x400092a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd22_nbytes_mloffyes{
        using Addr = Register::Address<0x400092c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd23_nbytes_mloffyes{
        using Addr = Register::Address<0x400092e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd24_nbytes_mloffyes{
        using Addr = Register::Address<0x40009308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd25_nbytes_mloffyes{
        using Addr = Register::Address<0x40009328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd26_nbytes_mloffyes{
        using Addr = Register::Address<0x40009348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd27_nbytes_mloffyes{
        using Addr = Register::Address<0x40009368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd28_nbytes_mloffyes{
        using Addr = Register::Address<0x40009388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd29_nbytes_mloffyes{
        using Addr = Register::Address<0x400093a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd30_nbytes_mloffyes{
        using Addr = Register::Address<0x400093c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd31_nbytes_mloffyes{
        using Addr = Register::Address<0x400093e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd0_nbytes_mloffno{
        using Addr = Register::Address<0x40009008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd1_nbytes_mloffno{
        using Addr = Register::Address<0x40009028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd2_nbytes_mloffno{
        using Addr = Register::Address<0x40009048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd3_nbytes_mloffno{
        using Addr = Register::Address<0x40009068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd4_nbytes_mloffno{
        using Addr = Register::Address<0x40009088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd5_nbytes_mloffno{
        using Addr = Register::Address<0x400090a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd6_nbytes_mloffno{
        using Addr = Register::Address<0x400090c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd7_nbytes_mloffno{
        using Addr = Register::Address<0x400090e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd8_nbytes_mloffno{
        using Addr = Register::Address<0x40009108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd9_nbytes_mloffno{
        using Addr = Register::Address<0x40009128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd10_nbytes_mloffno{
        using Addr = Register::Address<0x40009148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd11_nbytes_mloffno{
        using Addr = Register::Address<0x40009168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd12_nbytes_mloffno{
        using Addr = Register::Address<0x40009188,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd13_nbytes_mloffno{
        using Addr = Register::Address<0x400091a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd14_nbytes_mloffno{
        using Addr = Register::Address<0x400091c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd15_nbytes_mloffno{
        using Addr = Register::Address<0x400091e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd16_nbytes_mloffno{
        using Addr = Register::Address<0x40009208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd17_nbytes_mloffno{
        using Addr = Register::Address<0x40009228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd18_nbytes_mloffno{
        using Addr = Register::Address<0x40009248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd19_nbytes_mloffno{
        using Addr = Register::Address<0x40009268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd20_nbytes_mloffno{
        using Addr = Register::Address<0x40009288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd21_nbytes_mloffno{
        using Addr = Register::Address<0x400092a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd22_nbytes_mloffno{
        using Addr = Register::Address<0x400092c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd23_nbytes_mloffno{
        using Addr = Register::Address<0x400092e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd24_nbytes_mloffno{
        using Addr = Register::Address<0x40009308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd25_nbytes_mloffno{
        using Addr = Register::Address<0x40009328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd26_nbytes_mloffno{
        using Addr = Register::Address<0x40009348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd27_nbytes_mloffno{
        using Addr = Register::Address<0x40009368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd28_nbytes_mloffno{
        using Addr = Register::Address<0x40009388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd29_nbytes_mloffno{
        using Addr = Register::Address<0x400093a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd30_nbytes_mloffno{
        using Addr = Register::Address<0x400093c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd31_nbytes_mloffno{
        using Addr = Register::Address<0x400093e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd0_nbytes_mlno{
        using Addr = Register::Address<0x40009008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd1_nbytes_mlno{
        using Addr = Register::Address<0x40009028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd2_nbytes_mlno{
        using Addr = Register::Address<0x40009048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd3_nbytes_mlno{
        using Addr = Register::Address<0x40009068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd4_nbytes_mlno{
        using Addr = Register::Address<0x40009088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd5_nbytes_mlno{
        using Addr = Register::Address<0x400090a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd6_nbytes_mlno{
        using Addr = Register::Address<0x400090c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd7_nbytes_mlno{
        using Addr = Register::Address<0x400090e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd8_nbytes_mlno{
        using Addr = Register::Address<0x40009108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd9_nbytes_mlno{
        using Addr = Register::Address<0x40009128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd10_nbytes_mlno{
        using Addr = Register::Address<0x40009148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd11_nbytes_mlno{
        using Addr = Register::Address<0x40009168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd12_nbytes_mlno{
        using Addr = Register::Address<0x40009188,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd13_nbytes_mlno{
        using Addr = Register::Address<0x400091a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd14_nbytes_mlno{
        using Addr = Register::Address<0x400091c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd15_nbytes_mlno{
        using Addr = Register::Address<0x400091e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd16_nbytes_mlno{
        using Addr = Register::Address<0x40009208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd17_nbytes_mlno{
        using Addr = Register::Address<0x40009228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd18_nbytes_mlno{
        using Addr = Register::Address<0x40009248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd19_nbytes_mlno{
        using Addr = Register::Address<0x40009268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd20_nbytes_mlno{
        using Addr = Register::Address<0x40009288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd21_nbytes_mlno{
        using Addr = Register::Address<0x400092a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd22_nbytes_mlno{
        using Addr = Register::Address<0x400092c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd23_nbytes_mlno{
        using Addr = Register::Address<0x400092e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd24_nbytes_mlno{
        using Addr = Register::Address<0x40009308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd25_nbytes_mlno{
        using Addr = Register::Address<0x40009328,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd26_nbytes_mlno{
        using Addr = Register::Address<0x40009348,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd27_nbytes_mlno{
        using Addr = Register::Address<0x40009368,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd28_nbytes_mlno{
        using Addr = Register::Address<0x40009388,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd29_nbytes_mlno{
        using Addr = Register::Address<0x400093a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd30_nbytes_mlno{
        using Addr = Register::Address<0x400093c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd31_nbytes_mlno{
        using Addr = Register::Address<0x400093e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd0_slast{
        using Addr = Register::Address<0x4000900c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd1_slast{
        using Addr = Register::Address<0x4000902c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd2_slast{
        using Addr = Register::Address<0x4000904c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd3_slast{
        using Addr = Register::Address<0x4000906c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd4_slast{
        using Addr = Register::Address<0x4000908c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd5_slast{
        using Addr = Register::Address<0x400090ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd6_slast{
        using Addr = Register::Address<0x400090cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd7_slast{
        using Addr = Register::Address<0x400090ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd8_slast{
        using Addr = Register::Address<0x4000910c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd9_slast{
        using Addr = Register::Address<0x4000912c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd10_slast{
        using Addr = Register::Address<0x4000914c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd11_slast{
        using Addr = Register::Address<0x4000916c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd12_slast{
        using Addr = Register::Address<0x4000918c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd13_slast{
        using Addr = Register::Address<0x400091ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd14_slast{
        using Addr = Register::Address<0x400091cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd15_slast{
        using Addr = Register::Address<0x400091ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd16_slast{
        using Addr = Register::Address<0x4000920c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd17_slast{
        using Addr = Register::Address<0x4000922c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd18_slast{
        using Addr = Register::Address<0x4000924c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd19_slast{
        using Addr = Register::Address<0x4000926c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd20_slast{
        using Addr = Register::Address<0x4000928c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd21_slast{
        using Addr = Register::Address<0x400092ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd22_slast{
        using Addr = Register::Address<0x400092cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd23_slast{
        using Addr = Register::Address<0x400092ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd24_slast{
        using Addr = Register::Address<0x4000930c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd25_slast{
        using Addr = Register::Address<0x4000932c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd26_slast{
        using Addr = Register::Address<0x4000934c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd27_slast{
        using Addr = Register::Address<0x4000936c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd28_slast{
        using Addr = Register::Address<0x4000938c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd29_slast{
        using Addr = Register::Address<0x400093ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd30_slast{
        using Addr = Register::Address<0x400093cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd31_slast{
        using Addr = Register::Address<0x400093ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd0_daddr{
        using Addr = Register::Address<0x40009010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd1_daddr{
        using Addr = Register::Address<0x40009030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd2_daddr{
        using Addr = Register::Address<0x40009050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd3_daddr{
        using Addr = Register::Address<0x40009070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd4_daddr{
        using Addr = Register::Address<0x40009090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd5_daddr{
        using Addr = Register::Address<0x400090b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd6_daddr{
        using Addr = Register::Address<0x400090d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd7_daddr{
        using Addr = Register::Address<0x400090f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd8_daddr{
        using Addr = Register::Address<0x40009110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd9_daddr{
        using Addr = Register::Address<0x40009130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd10_daddr{
        using Addr = Register::Address<0x40009150,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd11_daddr{
        using Addr = Register::Address<0x40009170,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd12_daddr{
        using Addr = Register::Address<0x40009190,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd13_daddr{
        using Addr = Register::Address<0x400091b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd14_daddr{
        using Addr = Register::Address<0x400091d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd15_daddr{
        using Addr = Register::Address<0x400091f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd16_daddr{
        using Addr = Register::Address<0x40009210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd17_daddr{
        using Addr = Register::Address<0x40009230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd18_daddr{
        using Addr = Register::Address<0x40009250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd19_daddr{
        using Addr = Register::Address<0x40009270,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd20_daddr{
        using Addr = Register::Address<0x40009290,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd21_daddr{
        using Addr = Register::Address<0x400092b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd22_daddr{
        using Addr = Register::Address<0x400092d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd23_daddr{
        using Addr = Register::Address<0x400092f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd24_daddr{
        using Addr = Register::Address<0x40009310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd25_daddr{
        using Addr = Register::Address<0x40009330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd26_daddr{
        using Addr = Register::Address<0x40009350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd27_daddr{
        using Addr = Register::Address<0x40009370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd28_daddr{
        using Addr = Register::Address<0x40009390,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd29_daddr{
        using Addr = Register::Address<0x400093b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd30_daddr{
        using Addr = Register::Address<0x400093d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd31_daddr{
        using Addr = Register::Address<0x400093f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd0_doff{
        using Addr = Register::Address<0x40009014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd1_doff{
        using Addr = Register::Address<0x40009034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd2_doff{
        using Addr = Register::Address<0x40009054,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd3_doff{
        using Addr = Register::Address<0x40009074,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd4_doff{
        using Addr = Register::Address<0x40009094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd5_doff{
        using Addr = Register::Address<0x400090b4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd6_doff{
        using Addr = Register::Address<0x400090d4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd7_doff{
        using Addr = Register::Address<0x400090f4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd8_doff{
        using Addr = Register::Address<0x40009114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd9_doff{
        using Addr = Register::Address<0x40009134,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd10_doff{
        using Addr = Register::Address<0x40009154,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd11_doff{
        using Addr = Register::Address<0x40009174,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd12_doff{
        using Addr = Register::Address<0x40009194,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd13_doff{
        using Addr = Register::Address<0x400091b4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd14_doff{
        using Addr = Register::Address<0x400091d4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd15_doff{
        using Addr = Register::Address<0x400091f4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd16_doff{
        using Addr = Register::Address<0x40009214,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd17_doff{
        using Addr = Register::Address<0x40009234,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd18_doff{
        using Addr = Register::Address<0x40009254,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd19_doff{
        using Addr = Register::Address<0x40009274,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd20_doff{
        using Addr = Register::Address<0x40009294,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd21_doff{
        using Addr = Register::Address<0x400092b4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd22_doff{
        using Addr = Register::Address<0x400092d4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd23_doff{
        using Addr = Register::Address<0x400092f4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd24_doff{
        using Addr = Register::Address<0x40009314,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd25_doff{
        using Addr = Register::Address<0x40009334,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd26_doff{
        using Addr = Register::Address<0x40009354,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd27_doff{
        using Addr = Register::Address<0x40009374,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd28_doff{
        using Addr = Register::Address<0x40009394,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd29_doff{
        using Addr = Register::Address<0x400093b4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd30_doff{
        using Addr = Register::Address<0x400093d4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd31_doff{
        using Addr = Register::Address<0x400093f4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd0_citer_elinkyes{
        using Addr = Register::Address<0x40009016,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd1_citer_elinkyes{
        using Addr = Register::Address<0x40009036,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd2_citer_elinkyes{
        using Addr = Register::Address<0x40009056,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd3_citer_elinkyes{
        using Addr = Register::Address<0x40009076,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd4_citer_elinkyes{
        using Addr = Register::Address<0x40009096,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd5_citer_elinkyes{
        using Addr = Register::Address<0x400090b6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd6_citer_elinkyes{
        using Addr = Register::Address<0x400090d6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd7_citer_elinkyes{
        using Addr = Register::Address<0x400090f6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd8_citer_elinkyes{
        using Addr = Register::Address<0x40009116,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd9_citer_elinkyes{
        using Addr = Register::Address<0x40009136,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd10_citer_elinkyes{
        using Addr = Register::Address<0x40009156,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd11_citer_elinkyes{
        using Addr = Register::Address<0x40009176,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd12_citer_elinkyes{
        using Addr = Register::Address<0x40009196,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd13_citer_elinkyes{
        using Addr = Register::Address<0x400091b6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd14_citer_elinkyes{
        using Addr = Register::Address<0x400091d6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd15_citer_elinkyes{
        using Addr = Register::Address<0x400091f6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd16_citer_elinkyes{
        using Addr = Register::Address<0x40009216,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd17_citer_elinkyes{
        using Addr = Register::Address<0x40009236,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd18_citer_elinkyes{
        using Addr = Register::Address<0x40009256,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd19_citer_elinkyes{
        using Addr = Register::Address<0x40009276,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd20_citer_elinkyes{
        using Addr = Register::Address<0x40009296,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd21_citer_elinkyes{
        using Addr = Register::Address<0x400092b6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd22_citer_elinkyes{
        using Addr = Register::Address<0x400092d6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd23_citer_elinkyes{
        using Addr = Register::Address<0x400092f6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd24_citer_elinkyes{
        using Addr = Register::Address<0x40009316,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd25_citer_elinkyes{
        using Addr = Register::Address<0x40009336,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd26_citer_elinkyes{
        using Addr = Register::Address<0x40009356,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd27_citer_elinkyes{
        using Addr = Register::Address<0x40009376,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd28_citer_elinkyes{
        using Addr = Register::Address<0x40009396,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd29_citer_elinkyes{
        using Addr = Register::Address<0x400093b6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd30_citer_elinkyes{
        using Addr = Register::Address<0x400093d6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd31_citer_elinkyes{
        using Addr = Register::Address<0x400093f6,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd0_citer_elinkno{
        using Addr = Register::Address<0x40009016,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd1_citer_elinkno{
        using Addr = Register::Address<0x40009036,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd2_citer_elinkno{
        using Addr = Register::Address<0x40009056,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd3_citer_elinkno{
        using Addr = Register::Address<0x40009076,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd4_citer_elinkno{
        using Addr = Register::Address<0x40009096,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd5_citer_elinkno{
        using Addr = Register::Address<0x400090b6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd6_citer_elinkno{
        using Addr = Register::Address<0x400090d6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd7_citer_elinkno{
        using Addr = Register::Address<0x400090f6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd8_citer_elinkno{
        using Addr = Register::Address<0x40009116,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd9_citer_elinkno{
        using Addr = Register::Address<0x40009136,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd10_citer_elinkno{
        using Addr = Register::Address<0x40009156,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd11_citer_elinkno{
        using Addr = Register::Address<0x40009176,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd12_citer_elinkno{
        using Addr = Register::Address<0x40009196,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd13_citer_elinkno{
        using Addr = Register::Address<0x400091b6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd14_citer_elinkno{
        using Addr = Register::Address<0x400091d6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd15_citer_elinkno{
        using Addr = Register::Address<0x400091f6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd16_citer_elinkno{
        using Addr = Register::Address<0x40009216,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd17_citer_elinkno{
        using Addr = Register::Address<0x40009236,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd18_citer_elinkno{
        using Addr = Register::Address<0x40009256,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd19_citer_elinkno{
        using Addr = Register::Address<0x40009276,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd20_citer_elinkno{
        using Addr = Register::Address<0x40009296,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd21_citer_elinkno{
        using Addr = Register::Address<0x400092b6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd22_citer_elinkno{
        using Addr = Register::Address<0x400092d6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd23_citer_elinkno{
        using Addr = Register::Address<0x400092f6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd24_citer_elinkno{
        using Addr = Register::Address<0x40009316,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd25_citer_elinkno{
        using Addr = Register::Address<0x40009336,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd26_citer_elinkno{
        using Addr = Register::Address<0x40009356,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd27_citer_elinkno{
        using Addr = Register::Address<0x40009376,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd28_citer_elinkno{
        using Addr = Register::Address<0x40009396,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd29_citer_elinkno{
        using Addr = Register::Address<0x400093b6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd30_citer_elinkno{
        using Addr = Register::Address<0x400093d6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd31_citer_elinkno{
        using Addr = Register::Address<0x400093f6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd0_dlastsga{
        using Addr = Register::Address<0x40009018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd1_dlastsga{
        using Addr = Register::Address<0x40009038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd2_dlastsga{
        using Addr = Register::Address<0x40009058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd3_dlastsga{
        using Addr = Register::Address<0x40009078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd4_dlastsga{
        using Addr = Register::Address<0x40009098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd5_dlastsga{
        using Addr = Register::Address<0x400090b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd6_dlastsga{
        using Addr = Register::Address<0x400090d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd7_dlastsga{
        using Addr = Register::Address<0x400090f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd8_dlastsga{
        using Addr = Register::Address<0x40009118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd9_dlastsga{
        using Addr = Register::Address<0x40009138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd10_dlastsga{
        using Addr = Register::Address<0x40009158,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd11_dlastsga{
        using Addr = Register::Address<0x40009178,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd12_dlastsga{
        using Addr = Register::Address<0x40009198,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd13_dlastsga{
        using Addr = Register::Address<0x400091b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd14_dlastsga{
        using Addr = Register::Address<0x400091d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd15_dlastsga{
        using Addr = Register::Address<0x400091f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd16_dlastsga{
        using Addr = Register::Address<0x40009218,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd17_dlastsga{
        using Addr = Register::Address<0x40009238,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd18_dlastsga{
        using Addr = Register::Address<0x40009258,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd19_dlastsga{
        using Addr = Register::Address<0x40009278,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd20_dlastsga{
        using Addr = Register::Address<0x40009298,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd21_dlastsga{
        using Addr = Register::Address<0x400092b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd22_dlastsga{
        using Addr = Register::Address<0x400092d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd23_dlastsga{
        using Addr = Register::Address<0x400092f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd24_dlastsga{
        using Addr = Register::Address<0x40009318,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd25_dlastsga{
        using Addr = Register::Address<0x40009338,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd26_dlastsga{
        using Addr = Register::Address<0x40009358,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd27_dlastsga{
        using Addr = Register::Address<0x40009378,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd28_dlastsga{
        using Addr = Register::Address<0x40009398,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd29_dlastsga{
        using Addr = Register::Address<0x400093b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd30_dlastsga{
        using Addr = Register::Address<0x400093d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd31_dlastsga{
        using Addr = Register::Address<0x400093f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd0_csr{
        using Addr = Register::Address<0x4000901c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd1_csr{
        using Addr = Register::Address<0x4000903c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd2_csr{
        using Addr = Register::Address<0x4000905c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd3_csr{
        using Addr = Register::Address<0x4000907c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd4_csr{
        using Addr = Register::Address<0x4000909c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd5_csr{
        using Addr = Register::Address<0x400090bc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd6_csr{
        using Addr = Register::Address<0x400090dc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd7_csr{
        using Addr = Register::Address<0x400090fc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd8_csr{
        using Addr = Register::Address<0x4000911c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd9_csr{
        using Addr = Register::Address<0x4000913c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd10_csr{
        using Addr = Register::Address<0x4000915c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd11_csr{
        using Addr = Register::Address<0x4000917c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd12_csr{
        using Addr = Register::Address<0x4000919c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd13_csr{
        using Addr = Register::Address<0x400091bc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd14_csr{
        using Addr = Register::Address<0x400091dc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd15_csr{
        using Addr = Register::Address<0x400091fc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd16_csr{
        using Addr = Register::Address<0x4000921c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd17_csr{
        using Addr = Register::Address<0x4000923c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd18_csr{
        using Addr = Register::Address<0x4000925c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd19_csr{
        using Addr = Register::Address<0x4000927c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd20_csr{
        using Addr = Register::Address<0x4000929c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd21_csr{
        using Addr = Register::Address<0x400092bc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd22_csr{
        using Addr = Register::Address<0x400092dc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd23_csr{
        using Addr = Register::Address<0x400092fc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd24_csr{
        using Addr = Register::Address<0x4000931c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd25_csr{
        using Addr = Register::Address<0x4000933c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd26_csr{
        using Addr = Register::Address<0x4000935c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd27_csr{
        using Addr = Register::Address<0x4000937c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd28_csr{
        using Addr = Register::Address<0x4000939c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd29_csr{
        using Addr = Register::Address<0x400093bc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd30_csr{
        using Addr = Register::Address<0x400093dc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd31_csr{
        using Addr = Register::Address<0x400093fc,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd0_biter_elinkyes{
        using Addr = Register::Address<0x4000901e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd1_biter_elinkyes{
        using Addr = Register::Address<0x4000903e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd2_biter_elinkyes{
        using Addr = Register::Address<0x4000905e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd3_biter_elinkyes{
        using Addr = Register::Address<0x4000907e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd4_biter_elinkyes{
        using Addr = Register::Address<0x4000909e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd5_biter_elinkyes{
        using Addr = Register::Address<0x400090be,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd6_biter_elinkyes{
        using Addr = Register::Address<0x400090de,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd7_biter_elinkyes{
        using Addr = Register::Address<0x400090fe,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd8_biter_elinkyes{
        using Addr = Register::Address<0x4000911e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd9_biter_elinkyes{
        using Addr = Register::Address<0x4000913e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd10_biter_elinkyes{
        using Addr = Register::Address<0x4000915e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd11_biter_elinkyes{
        using Addr = Register::Address<0x4000917e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd12_biter_elinkyes{
        using Addr = Register::Address<0x4000919e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd13_biter_elinkyes{
        using Addr = Register::Address<0x400091be,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd14_biter_elinkyes{
        using Addr = Register::Address<0x400091de,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd15_biter_elinkyes{
        using Addr = Register::Address<0x400091fe,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd16_biter_elinkyes{
        using Addr = Register::Address<0x4000921e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd17_biter_elinkyes{
        using Addr = Register::Address<0x4000923e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd18_biter_elinkyes{
        using Addr = Register::Address<0x4000925e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd19_biter_elinkyes{
        using Addr = Register::Address<0x4000927e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd20_biter_elinkyes{
        using Addr = Register::Address<0x4000929e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd21_biter_elinkyes{
        using Addr = Register::Address<0x400092be,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd22_biter_elinkyes{
        using Addr = Register::Address<0x400092de,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd23_biter_elinkyes{
        using Addr = Register::Address<0x400092fe,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd24_biter_elinkyes{
        using Addr = Register::Address<0x4000931e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd25_biter_elinkyes{
        using Addr = Register::Address<0x4000933e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd26_biter_elinkyes{
        using Addr = Register::Address<0x4000935e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd27_biter_elinkyes{
        using Addr = Register::Address<0x4000937e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd28_biter_elinkyes{
        using Addr = Register::Address<0x4000939e,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd29_biter_elinkyes{
        using Addr = Register::Address<0x400093be,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd30_biter_elinkyes{
        using Addr = Register::Address<0x400093de,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd31_biter_elinkyes{
        using Addr = Register::Address<0x400093fe,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd0_biter_elinkno{
        using Addr = Register::Address<0x4000901e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd1_biter_elinkno{
        using Addr = Register::Address<0x4000903e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd2_biter_elinkno{
        using Addr = Register::Address<0x4000905e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd3_biter_elinkno{
        using Addr = Register::Address<0x4000907e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd4_biter_elinkno{
        using Addr = Register::Address<0x4000909e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd5_biter_elinkno{
        using Addr = Register::Address<0x400090be,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd6_biter_elinkno{
        using Addr = Register::Address<0x400090de,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd7_biter_elinkno{
        using Addr = Register::Address<0x400090fe,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd8_biter_elinkno{
        using Addr = Register::Address<0x4000911e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd9_biter_elinkno{
        using Addr = Register::Address<0x4000913e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd10_biter_elinkno{
        using Addr = Register::Address<0x4000915e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd11_biter_elinkno{
        using Addr = Register::Address<0x4000917e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd12_biter_elinkno{
        using Addr = Register::Address<0x4000919e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd13_biter_elinkno{
        using Addr = Register::Address<0x400091be,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd14_biter_elinkno{
        using Addr = Register::Address<0x400091de,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd15_biter_elinkno{
        using Addr = Register::Address<0x400091fe,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd16_biter_elinkno{
        using Addr = Register::Address<0x4000921e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd17_biter_elinkno{
        using Addr = Register::Address<0x4000923e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd18_biter_elinkno{
        using Addr = Register::Address<0x4000925e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd19_biter_elinkno{
        using Addr = Register::Address<0x4000927e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd20_biter_elinkno{
        using Addr = Register::Address<0x4000929e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd21_biter_elinkno{
        using Addr = Register::Address<0x400092be,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd22_biter_elinkno{
        using Addr = Register::Address<0x400092de,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd23_biter_elinkno{
        using Addr = Register::Address<0x400092fe,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd24_biter_elinkno{
        using Addr = Register::Address<0x4000931e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd25_biter_elinkno{
        using Addr = Register::Address<0x4000933e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd26_biter_elinkno{
        using Addr = Register::Address<0x4000935e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd27_biter_elinkno{
        using Addr = Register::Address<0x4000937e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd28_biter_elinkno{
        using Addr = Register::Address<0x4000939e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd29_biter_elinkno{
        using Addr = Register::Address<0x400093be,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd30_biter_elinkno{
        using Addr = Register::Address<0x400093de,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd31_biter_elinkno{
        using Addr = Register::Address<0x400093fe,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
}
