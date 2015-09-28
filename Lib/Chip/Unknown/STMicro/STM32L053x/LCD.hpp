#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40002400,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> BIAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> DUTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LCDEN; 
    }
    namespace Nonefcr{
        using Addr = Register::Address<0x40002404,0xfc000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> DIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> BLINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> BLINKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,7)> DEAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UDDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HD; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40002408,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FCRSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UDD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENS; 
    }
    namespace Noneclr{
        using Addr = Register::Address<0x4000240c,0xfffffff5>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UDDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOFC; 
    }
    namespace Noneram_com0{
        using Addr = Register::Address<0x40002414,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> S30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> S29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> S28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> S26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> S25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> S23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> S22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> S21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> S16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> S15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> S14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> S13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> S07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> S06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> S05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> S00; 
    }
    namespace Noneram_com1{
        using Addr = Register::Address<0x4000241c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> S31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> S30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> S29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> S28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> S26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> S25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> S23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> S22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> S21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> S16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> S15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> S14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> S13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> S07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> S06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> S05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> S00; 
    }
    namespace Noneram_com2{
        using Addr = Register::Address<0x40002424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> S31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> S30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> S29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> S28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> S26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> S25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> S23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> S22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> S21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> S16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> S15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> S14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> S13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> S07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> S06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> S05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> S00; 
    }
    namespace Noneram_com3{
        using Addr = Register::Address<0x4000242c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> S31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> S30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> S29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> S28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> S26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> S25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> S23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> S22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> S21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> S16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> S15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> S14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> S13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> S07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> S06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> S05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> S00; 
    }
    namespace Noneram_com4{
        using Addr = Register::Address<0x40002434,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> S31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> S30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> S29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> S28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> S26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> S25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> S23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> S22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> S21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> S16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> S15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> S14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> S13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> S07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> S06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> S05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> S00; 
    }
    namespace Noneram_com5{
        using Addr = Register::Address<0x4000243c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> S31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> S30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> S29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> S28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> S26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> S25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> S23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> S22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> S21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> S16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> S15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> S14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> S13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> S07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> S06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> S05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> S00; 
    }
    namespace Noneram_com6{
        using Addr = Register::Address<0x40002444,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> S31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> S30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> S29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> S28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> S26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> S25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> S23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> S22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> S21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> S16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> S15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> S14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> S13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> S07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> S06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> S05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> S00; 
    }
    namespace Noneram_com7{
        using Addr = Register::Address<0x4000244c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> S31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> S30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> S29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> S28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> S26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> S25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> S23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> S22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> S21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> S16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> S15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> S14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> S13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> S07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> S06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> S05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> S00; 
    }
}
