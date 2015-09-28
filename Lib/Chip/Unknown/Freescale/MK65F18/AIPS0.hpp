#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AIPS0_mpra{
        using Addr = Register::Address<0x40000000,0x8888888f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MPL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MTW6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MTR6; 
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
    namespace AIPS0_pacra{
        using Addr = Register::Address<0x40000020,0x88888888>;
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
    namespace AIPS0_pacrb{
        using Addr = Register::Address<0x40000024,0x88888888>;
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
    namespace AIPS0_pacrc{
        using Addr = Register::Address<0x40000028,0x88888888>;
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
    namespace AIPS0_pacrd{
        using Addr = Register::Address<0x4000002c,0x88888888>;
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
    namespace AIPS0_pacre{
        using Addr = Register::Address<0x40000040,0x88888888>;
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
    namespace AIPS0_pacrf{
        using Addr = Register::Address<0x40000044,0x88888888>;
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
    namespace AIPS0_pacrg{
        using Addr = Register::Address<0x40000048,0x88888888>;
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
    namespace AIPS0_pacrh{
        using Addr = Register::Address<0x4000004c,0x88888888>;
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
    namespace AIPS0_pacri{
        using Addr = Register::Address<0x40000050,0x88888888>;
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
    namespace AIPS0_pacrj{
        using Addr = Register::Address<0x40000054,0x88888888>;
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
    namespace AIPS0_pacrk{
        using Addr = Register::Address<0x40000058,0x88888888>;
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
    namespace AIPS0_pacrl{
        using Addr = Register::Address<0x4000005c,0x88888888>;
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
    namespace AIPS0_pacrm{
        using Addr = Register::Address<0x40000060,0x88888888>;
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
    namespace AIPS0_pacrn{
        using Addr = Register::Address<0x40000064,0x88888888>;
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
    namespace AIPS0_pacro{
        using Addr = Register::Address<0x40000068,0x88888888>;
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
    namespace AIPS0_pacrp{
        using Addr = Register::Address<0x4000006c,0x88888888>;
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
}
