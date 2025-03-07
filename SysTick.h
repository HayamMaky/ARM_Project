/*
 * SysTick.h
 *
 *  Created on: Dec 10, 2024
 *      Author: Hayam
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_

/**********************************************/
# include "std_types.h"
# include "tm4c123gh6pm_registers.h"
/**********************************************/
void SysTick_Init(uint16 a_TimeInMilliSeconds);
void SysTick_StartBusyWait(uint16 a_TimeInMilliSeconds);
void SysTick_Handler(void);
void SysTick_SetCallBack(volatile void (*Ptr2Func) (void));
void SysTick_Stop(void);
void SysTick_Start(void);
void SysTick_DeInit(void);



#endif /* SYSTICK_H_ */
