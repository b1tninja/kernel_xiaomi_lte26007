

#ifndef _LINUX_LC1132_MONITOR_BATTERY_H
#define _LINUX_LC1132_MONITOR_BATTERY_H


/*pmic lc1132 charger register*/
#define CHARGER_CTRL_REG0x30   (0x30)
#define EOC_SHIFT               5
#define NTC_SHIFT               4
#define CHGPROT_SHIFT           3
#define CSENSE_SHIFT          2
#define EOC_EN               (1)
#define EOC_DIS              (0)
#define NTC_EN               (1)
#define NTC_DIS              (0)
#define CHGPROT_EN           (1)
#define CHGPROT_DIS          (0)
#define CSENSE_EN            (1)
#define CSENSE_DIS           (0)
#define ACHGON_EN            (1)
#define ACHGON_DIS           (0)

#define CHARGER_VOLT_REG0x31   (0x31)
#define VOLT_SHIFT               4
#define VHYSSEL_SHIFT            3
#define CVSEL_4200       (0)
#define CVSEL_4225       (2)
#define CVSEL_4250       (4)
#define CVSEL_4275       (6)
#define CVSEL_4350       (1)
#define CVSEL_4375       (3)
#define CVSEL_4400       (5)
#define CVSEL_4425       (7)
#define VHYSSEL_0        (0)
#define VHYSSEL_1        (1)
#define RCHGSEL_MIN      (50)
#define RCHGSEL_MAX      (350)
#define RCHGSEL_STEP     (50)
#define RCHGSEL_VOLT     (100)
#define VHYSSEL          VHYSSEL_0

#define CHARGER_CURRENT_REG0x32  (0x32)
#define ITERM_SHIFT    4
#define TERM_CURRENT_MIN       (50)
#define TERM_CURRENT_MAX       (200)
#define TERM_CURRENT_STEP      (50)
#define CHARGE_CURRENT_MIN     (100)
#define CHARGE_CURRENT_MAX     (1200)
#define CHARGE_CURRENT_STEP    (100)

#define CHARGER_TIMER_REG0x33  (0x33)
#define CHARGE_TIMER_SHIFT         4
#define CHARGE_TIMER_MIN           (3) //hour
#define CHARGE_TIMER_4             (4)
#define CHARGE_TIMER_5             (5)
#define CHARGE_TIMER_6             (6)
#define CHARGE_TIMER_7             (7)
#define CHARGE_TIMER_MAX           (8)
#define RTIMCLRB_CLEAR             (0)
#define RTIMCLRB_RUN               (1)
#define RTIMSTP_STOP               (1)
#define RTIMSTP_START              (0)

#define CHARGER_STATUS_REG0x34   (0x34)
#define CHARGE_TIMEOUT           (0x80)

#define ADPUV_STATUS             (0x20)
#define ADPOV_STATUS             (0x10)
#define BATOT_STATUS             (0x08)
#define RECHG_STATUS             (0x04)
#define CHGFAULT_STATUS          (0x02)
#define CHARGE_DONE              (0x01)

#define POWER_STATUS_REG0x35        (0x35)
#define POWER_KEY_PRESS             (1 << 5)
#define VBATV45                     (1 << 4)
#define VBATV32                     (1 << 3)
#define VBATV33                     (1 << 2)
#define BAT_PRESENT                 (0 << 1)
#define BAT_REMOVED                 (1 << 1)
#define VBUS_DET                    (1 << 0)



#endif
