#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AIPS1_mpra{
        using Addr = Register::Address<0x40080000,0x888888ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MPL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MTW5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MTR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MPL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MTW4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MTR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MPL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MTW3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MTR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MPL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MTW2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MTR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MPL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> MTW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MTR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> MPL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MTW0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MTR0; 
    }
    namespace AIPS1_pacra{
        using Addr = Register::Address<0x40080020,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrb{
        using Addr = Register::Address<0x40080024,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrc{
        using Addr = Register::Address<0x40080028,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrd{
        using Addr = Register::Address<0x4008002c,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacre{
        using Addr = Register::Address<0x40080040,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrf{
        using Addr = Register::Address<0x40080044,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrg{
        using Addr = Register::Address<0x40080048,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrh{
        using Addr = Register::Address<0x4008004c,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacri{
        using Addr = Register::Address<0x40080050,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrj{
        using Addr = Register::Address<0x40080054,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrk{
        using Addr = Register::Address<0x40080058,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrl{
        using Addr = Register::Address<0x4008005c,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrm{
        using Addr = Register::Address<0x40080060,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrn{
        using Addr = Register::Address<0x40080064,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacro{
        using Addr = Register::Address<0x40080068,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacrp{
        using Addr = Register::Address<0x4008006c,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> WP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
    namespace AIPS1_pacru{
        using Addr = Register::Address<0x40080080,0x88ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> WP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> WP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SP0; 
    }
}
