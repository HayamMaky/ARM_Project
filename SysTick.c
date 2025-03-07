/*
 * SysTick.c
 *
 *  Created on: Dec 10, 2024
 *      Author: Hayam
 */
# include "SysTick.h"

/********************************************************************************************************/
static volatile void (*SysTick_CallBack)(void) = 0;
/********************************************************************************************************/
void SysTick_Init(uint16 a_TimeInMilliSeconds)
{
    SYSTICK_CTRL_REG &= ~(1<<0);   /* clear the enable bit to turn off systick during initialization*/
    /* it will count from this value to ZERO in one second*/
    SYSTICK_RELOAD_REG = (uint32)(((a_TimeInMilliSeconds * 1000000.0) / 62.5)-1);
    SYSTICK_CURRENT_REG = 1907;    /* any value to clear current register */
    SYSTICK_CTRL_REG |= (1<<0);    /* set the enable bit to turn on systick*/
    SYSTICK_CTRL_REG |= (1<<1);    /* enable the systick timer interrupt*/
    SYSTICK_CTRL_REG |= (1<<2);    /* choose the source of the clock = system clock*/
    NVIC_SYSTEM_PRI3_REG |=(2<<29);/* set its priority level = 2*/
}
/*********************************************************************************************************/
void SysTick_StartBusyWait(uint16 a_TimeInMilliSeconds)
{
    SYSTICK_CTRL_REG &= ~(1<<0);   /* clear the enable bit to turn off systick during initialization*/
    /* it will count from this value to ZERO in one second*/
    SYSTICK_RELOAD_REG = (uint32)(((a_TimeInMilliSeconds * 1000000.0) / 62.5)-1);
    SYSTICK_CURRENT_REG = 1907;    /* any value to clear current register */
    SYSTICK_CTRL_REG |= (1<<0);    /* set the enable bit to turn on systick*/
    SYSTICK_CTRL_REG &= ~(1<<1);    /* disable the systick timer interrupt*/
    SYSTICK_CTRL_REG |= (1<<2);    /* choose the source of the clock = system clock*/
    while(!(SYSTICK_CTRL_REG & (1<<16)));
    SYSTICK_CTRL_REG &= ~(1<<0);   /* clear the enable bit to turn off systick*/
}
/***********************************************************************************************************/
void SysTick_Handler(void)
{
    if (SysTick_CallBack != 0)
    {
        SysTick_CallBack();
    }
}
/***********************************************************************************************************/
void SysTick_SetCallBack(volatile void (*Ptr2Func) (void))
{
    SysTick_CallBack = Ptr2Func;
}
/************************************************************************************************************/
void SysTick_Stop(void)
{

}
/************************************************************************************************************/
void SysTick_Start(void)
{

}
/*************************************************************************************************************/
void SysTick_DeInit(void)
{

}

