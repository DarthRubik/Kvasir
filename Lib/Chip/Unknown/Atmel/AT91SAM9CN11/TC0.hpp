#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TC0_ccr0{
        using Addr = Register::Address<0xf8008000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRG; 
    }
    namespace TC0_cmr0{
        using Addr = Register::Address<0xf8008004,0xfff03800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDBSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LDBDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ETRGEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ABETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CPCTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> LDRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LDRB; 
    }
    namespace TC0_cmr0_wave_eq_1{
        using Addr = Register::Address<0xf8008004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CPCSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CPCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EEVTEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> WAVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ACPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> ACPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> AEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> ASWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> BCPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> BCPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> BEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> BSWTRG; 
    }
    namespace TC0_rab0{
        using Addr = Register::Address<0xf800800c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAB; 
    }
    namespace TC0_cv0{
        using Addr = Register::Address<0xf8008010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CV; 
    }
    namespace TC0_ra0{
        using Addr = Register::Address<0xf8008014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RA; 
    }
    namespace TC0_rb0{
        using Addr = Register::Address<0xf8008018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RB; 
    }
    namespace TC0_rc0{
        using Addr = Register::Address<0xf800801c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RC; 
    }
    namespace TC0_sr0{
        using Addr = Register::Address<0xf8008020,0xfff8ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLKSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MTIOA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MTIOB; 
    }
    namespace TC0_ier0{
        using Addr = Register::Address<0xf8008024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC0_idr0{
        using Addr = Register::Address<0xf8008028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC0_imr0{
        using Addr = Register::Address<0xf800802c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC0_ccr1{
        using Addr = Register::Address<0xf8008040,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRG; 
    }
    namespace TC0_cmr1{
        using Addr = Register::Address<0xf8008044,0xfff03800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDBSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LDBDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ETRGEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ABETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CPCTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> LDRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LDRB; 
    }
    namespace TC0_cmr1_wave_eq_1{
        using Addr = Register::Address<0xf8008044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CPCSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CPCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EEVTEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> WAVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ACPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> ACPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> AEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> ASWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> BCPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> BCPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> BEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> BSWTRG; 
    }
    namespace TC0_rab1{
        using Addr = Register::Address<0xf800804c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAB; 
    }
    namespace TC0_cv1{
        using Addr = Register::Address<0xf8008050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CV; 
    }
    namespace TC0_ra1{
        using Addr = Register::Address<0xf8008054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RA; 
    }
    namespace TC0_rb1{
        using Addr = Register::Address<0xf8008058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RB; 
    }
    namespace TC0_rc1{
        using Addr = Register::Address<0xf800805c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RC; 
    }
    namespace TC0_sr1{
        using Addr = Register::Address<0xf8008060,0xfff8ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLKSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MTIOA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MTIOB; 
    }
    namespace TC0_ier1{
        using Addr = Register::Address<0xf8008064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC0_idr1{
        using Addr = Register::Address<0xf8008068,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC0_imr1{
        using Addr = Register::Address<0xf800806c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC0_ccr2{
        using Addr = Register::Address<0xf8008080,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRG; 
    }
    namespace TC0_cmr2{
        using Addr = Register::Address<0xf8008084,0xfff03800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDBSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LDBDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ETRGEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ABETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CPCTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> LDRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LDRB; 
    }
    namespace TC0_cmr2_wave_eq_1{
        using Addr = Register::Address<0xf8008084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TCCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CPCSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CPCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EEVTEDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENETRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> WAVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ACPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> ACPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> AEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> ASWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> BCPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> BCPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> BEEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> BSWTRG; 
    }
    namespace TC0_rab2{
        using Addr = Register::Address<0xf800808c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RAB; 
    }
    namespace TC0_cv2{
        using Addr = Register::Address<0xf8008090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CV; 
    }
    namespace TC0_ra2{
        using Addr = Register::Address<0xf8008094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RA; 
    }
    namespace TC0_rb2{
        using Addr = Register::Address<0xf8008098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RB; 
    }
    namespace TC0_rc2{
        using Addr = Register::Address<0xf800809c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RC; 
    }
    namespace TC0_sr2{
        using Addr = Register::Address<0xf80080a0,0xfff8ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLKSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MTIOA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MTIOB; 
    }
    namespace TC0_ier2{
        using Addr = Register::Address<0xf80080a4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC0_idr2{
        using Addr = Register::Address<0xf80080a8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC0_imr2{
        using Addr = Register::Address<0xf80080ac,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COVFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOVRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LDRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LDRBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ETRGS; 
    }
    namespace TC0_bcr{
        using Addr = Register::Address<0xf80080c0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYNC; 
    }
    namespace TC0_bmr{
        using Addr = Register::Address<0xf80080c4,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TC0XC0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TC1XC1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TC2XC2S; 
    }
}
