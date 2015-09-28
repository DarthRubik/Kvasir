#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedrqsel{
        using Addr = Register::Address<0x40031000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EXINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EXINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EXINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EXINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MFS7TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MFS7RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> MFS6TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MFS6RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MFS5TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MFS5RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MFS4TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MFS4RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MFS3TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MFS3RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MFS2TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MFS2RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MFS1TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MFS1RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MFS0TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MFS0RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IRQ0BT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IRQ0BT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IRQ0BT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IRQ0BT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADCSCAN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADCSCAN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADCSCAN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USBEP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USBEP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USBEP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USBEP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBEP1; 
    }
    namespace Noneirqcmode{
        using Addr = Register::Address<0x4003100c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQCMODE; 
    }
    namespace Noneexc02mon{
        using Addr = Register::Address<0x40031010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NMI; 
    }
    namespace Noneirq00mon{
        using Addr = Register::Address<0x40031014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FCSINT; 
    }
    namespace Noneirq01mon{
        using Addr = Register::Address<0x40031018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWWDTINT; 
    }
    namespace Noneirq02mon{
        using Addr = Register::Address<0x4003101c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LVDINT; 
    }
    namespace Noneirq04mon{
        using Addr = Register::Address<0x40031024,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT0; 
    }
    namespace Noneirq05mon{
        using Addr = Register::Address<0x40031028,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTINT7; 
    }
    namespace Noneirq06mon{
        using Addr = Register::Address<0x4003102c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIMINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIMINT1; 
    }
    namespace Noneirq07mon{
        using Addr = Register::Address<0x40031030,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq08mon{
        using Addr = Register::Address<0x40031034,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq09mon{
        using Addr = Register::Address<0x40031038,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq10mon{
        using Addr = Register::Address<0x4003103c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq11mon{
        using Addr = Register::Address<0x40031040,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq12mon{
        using Addr = Register::Address<0x40031044,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq13mon{
        using Addr = Register::Address<0x40031048,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq14mon{
        using Addr = Register::Address<0x4003104c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq15mon{
        using Addr = Register::Address<0x40031050,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq16mon{
        using Addr = Register::Address<0x40031054,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq17mon{
        using Addr = Register::Address<0x40031058,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq18mon{
        using Addr = Register::Address<0x4003105c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq19mon{
        using Addr = Register::Address<0x40031060,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq20mon{
        using Addr = Register::Address<0x40031064,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq21mon{
        using Addr = Register::Address<0x40031068,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq22mon{
        using Addr = Register::Address<0x4003106c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq24mon{
        using Addr = Register::Address<0x40031074,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UPLLINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MPLLINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOSCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCINT; 
    }
    namespace Noneirq25mon{
        using Addr = Register::Address<0x40031078,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADCINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADCINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADCINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADCINT0; 
    }
    namespace Noneirq26mon{
        using Addr = Register::Address<0x4003107c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADCINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADCINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADCINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADCINT0; 
    }
    namespace Noneirq27mon{
        using Addr = Register::Address<0x40031080,0xffffffef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LCDCINT; 
    }
    namespace Noneirq31mon{
        using Addr = Register::Address<0x40031090,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BTINT15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BTINT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BTINT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BTINT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BTINT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BTINT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BTINT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BTINT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BTINT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq36mon{
        using Addr = Register::Address<0x400310a4,0xffffffdf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RCEC0INT; 
    }
    namespace Noneirq37mon{
        using Addr = Register::Address<0x400310a8,0xffffffbf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RCEC1INT; 
    }
    namespace Noneirq38mon{
        using Addr = Register::Address<0x400310ac,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAINT; 
    }
    namespace Noneirq39mon{
        using Addr = Register::Address<0x400310b0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAINT; 
    }
    namespace Noneirq40mon{
        using Addr = Register::Address<0x400310b4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAINT; 
    }
    namespace Noneirq41mon{
        using Addr = Register::Address<0x400310b8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAINT; 
    }
    namespace Noneirq42mon{
        using Addr = Register::Address<0x400310bc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAINT; 
    }
    namespace Noneirq43mon{
        using Addr = Register::Address<0x400310c0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAINT; 
    }
    namespace Noneirq44mon{
        using Addr = Register::Address<0x400310c4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAINT; 
    }
    namespace Noneirq45mon{
        using Addr = Register::Address<0x400310c8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAINT; 
    }
    namespace Noneirq47mon{
        using Addr = Register::Address<0x400310d0,0xfffff7ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FLASHINT; 
    }
    namespace Nonercintsel0{
        using Addr = Register::Address<0x40031210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> INTSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> INTSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INTSEL0; 
    }
    namespace Nonercintsel1{
        using Addr = Register::Address<0x40031214,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTSEL7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> INTSEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> INTSEL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INTSEL4; 
    }
}
