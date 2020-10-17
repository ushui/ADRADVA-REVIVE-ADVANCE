#ifndef L_TIMER_H
#define L_TIMER_H

//#include <timers.h>
#include "app.h"


//--------------------------------------------------
//Timer
// FREQ / Prescale / X
// 1 / X second(1msなら1/1000secなのでX=1000)
//--------------------------------------------------
#if 1   // 40MHz
/***** Timer1 *****/
/* Timer1 0.1ms */
/* FREQ=40MHz, Prescale=1, X=1/10000sec */
/* 40MHz / 1 / 10000 = 4,000(0x0FA0) */
//#define TIMER1_PERIOD        0x0FA0        //Timer1の時間
/* Timer1 0.2ms */
/* FREQ=40MHz, Prescale=1, X=1/5000sec */
/* 40MHz / 1 / 5000 = 8,000(0x1F40) */
//#define TIMER1_PERIOD        0x1F40        //Timer1の時間
/* Timer1 1ms */
/* FREQ=40MHz, Prescale=1, X=1/1000sec */
/* 40MHz / 1 / 1000 = 40,000(0x9C40) */
#define TIMER1_PERIOD        0x9C40        //Timer1の時間
/***** Timer2 *****/
/* Timer2 0.015625ms */
/* FREQ=40MHz, Prescale=1, X=1/64000sec */
/* 40MHz / 1 / 64000 = 625(0x0271) */
#define TIMER2_PERIOD        0x0271        //Timer2の時間
/* Timer2 0.05ms */
/* FREQ=40MHz, Prescale=1, X=1/20000sec */
/* 40MHz / 1 / 20000 = 2,000(0x07D0) */
//#define TIMER2_PERIOD        0x07D0        //Timer2の時間
/* Timer2 0.06ms */
/* FREQ=40MHz, Prescale=1, X=1/18000sec */
/* 40MHz / 1 / 18000 = 2,222(0x08AE) */
//#define TIMER2_PERIOD        0x08AE        //Timer2の時間
/* Timer2 0.07ms */
/* FREQ=40MHz, Prescale=1, X=1/16000sec */
/* 40MHz / 1 / 16000 = 2,500(0x09C4) */
//#define TIMER2_PERIOD        0x09C4        //Timer2の時間
/* Timer2 0.1ms */
/* FREQ=40MHz, Prescale=1, X=1/10000sec */
/* 40MHz / 1 / 10000 = 4,000(0x0FA0) */
//#define TIMER2_PERIOD        0x0FA0        //Timer2の時間
/* Timer2 0.2ms */
/* FREQ=40MHz, Prescale=1, X=1/5000sec */
/* 40MHz / 1 / 5000 = 8,000(0x1F40) */
//#define TIMER2_PERIOD        0x1F40        //Timer2の時間
/* Timer2 1ms */
/* FREQ=40MHz, Prescale=1, X=1/1000sec */
/* 40MHz / 1 / 1000 = 40,000(0x9C40) */
//#define TIMER2_PERIOD        0x9C40        //Timer1の時間
#endif
#if 0   // 50MHz
/***** Timer1 *****/
/* Timer1 0.1ms */
/* FREQ=50MHz, Prescale=1, X=1/10000sec */
/* 50MHz / 1 / 10000 = 5,000(0x1388) */
//#define TIMER1_PERIOD        0x1388        //Timer1の時間
/* Timer1 0.2ms */
/* FREQ=50MHz, Prescale=1, X=1/5000sec */
/* 50MHz / 1 / 5000 = 10,000(0x2710) */
//#define TIMER1_PERIOD        0x2710        //Timer1の時間
/* Timer1 1ms */
/* FREQ=50MHz, Prescale=1, X=1/1000sec */
/* 50MHz / 1 / 1000 = 50,000(0xC350) */
#define TIMER1_PERIOD        0xC350        //Timer1の時間
/***** Timer2 *****/
/* Timer2 0.05ms */
/* FREQ=50MHz, Prescale=1, X=1/20000sec */
/* 50MHz / 1 / 20000 = 2,500(0x09C4) */
//#define TIMER2_PERIOD        0x09C4        //Timer2の時間
/* Timer2 0.06ms */
/* FREQ=50MHz, Prescale=1, X=1/18000sec */
/* 50MHz / 1 / 18000 = 2,778(0x0ADA) */
//#define TIMER2_PERIOD        0x0ADA        //Timer2の時間
/* Timer2 0.07ms */
/* FREQ=50MHz, Prescale=1, X=1/16000sec */
/* 50MHz / 1 / 16000 = 3,125(0x0C35) */
#define TIMER2_PERIOD        0x0C35        //Timer2の時間
/* Timer2 0.1ms */
/* FREQ=50MHz, Prescale=1, X=1/10000sec */
/* 50MHz / 1 / 10000 = 5,000(0x1388) */
//#define TIMER2_PERIOD        0x1388        //Timer2の時間
/* Timer2 0.2ms */
/* FREQ=50MHz, Prescale=1, X=1/5000sec */
/* 50MHz / 1 / 5000 = 10,000(0x2710) */
//#define TIMER2_PERIOD        0x2710        //Timer2の時間
/* Timer2 1ms */
/* FREQ=50MHz, Prescale=1, X=1/1000sec */
/* 50MHz / 1 / 1000 = 50,000(0xC350) */
//#define TIMER2_PERIOD        0xC350        //Timer1の時間
#endif

//#define SW_INPUT_TIME   1       // SW入力周期[ms]
//#define AD_INPUT_TIME   1       // AD入力周期[ms]
//#define DIGITAL_INPUT_TIME  1   // DIGITAL入力周期[ms]
//#define ANALOG_INPUT_TIME   1   // ANALOG入力周期[ms]

//extern BYTE sw_input_counter;
//extern BYTE sw_input_flag;
extern WORD ad_input_counter;
extern BYTE ad_input_flag;
extern BYTE digital_input_counter;
extern BYTE digital_input_flag;
//extern BYTE analog_input_counter;
extern BYTE analog_input_flag;


extern void timer1_init(void);
extern void timer2_init(void);
extern void timer4_init(void);
extern void Timer1_Task(void);
extern void Timer2_Task(void);



#endif //L_TIMER_H
