# NVIC and SysTick Drivers for TM4C Series Microcontrollers

## Overview
In this project, you will develop drivers for the SysTick timer and the Nested Vectored Interrupt Controller (NVIC) on the TM4C series microcontrollers. The project aims to provide hands-on experience with embedded systems programming, specifically focusing on system timers and interrupt management. You will configure the system to run at a clock speed of 16MHz.

## Objectives

1. **SysTick Timer Driver:**
   - Initialize the SysTick timer.
   - Implement functions to start and stop the timer.
   - Implement an interrupt handler for SysTick.
   - Configure the SysTick timer to generate interrupts at specific time intervals.

2. **NVIC Driver:**
   - Enable and disable interrupts for specific IRQ numbers.
   - Set the priority for specific IRQ numbers.
   - Enable and disable specific ARM system or fault exceptions.
   - Set the priority for specific ARM system or fault exceptions.

## Requirements

### 1. SysTick Driver
Implement the following functions:

- **`void SysTick_Init(uint16 a_TimeInMilliSeconds)`**  
  *Description:* Initialize the SysTick timer with the specified time in milliseconds using interrupts. This function is used to setup the timer to generate periodic interrupts every specified time in milliseconds.

- **`void SysTick_StartBusyWait(uint16 a_TimeInMilliSeconds)`**  
  *Description:* Initialize the SysTick timer with the specified time in milliseconds using polling or busy-wait technique. The function should exit when the time is elapsed and stops the timer at the end.

- **`void SysTick_Handler(void)`**  
  *Description:* Handler for SysTick interrupt used to call the call-back function.

- **`void SysTick_SetCallBack(volatile void (*Ptr2Func)(void))`**  
  *Description:* Function to setup the SysTick Timer call back to be executed in SysTick Handler.

- **`void SysTick_Stop(void)`**  
  *Description:* Stop the SysTick timer.

- **`void SysTick_Start(void)`**  
  *Description:* Start/Resume the SysTick timer.

- **`void SysTick_DeInit(void)`**  
  *Description:* Function to De-initialize the SysTick Timer.

### 2. NVIC Driver
Implement functions to enable, disable, and set the priority of interrupts. These functions take the IRQ number (Interrupt number from the target vector table) as input:

- **`void NVIC_EnableIRQ(NVIC_IRQType IRQ_Num)`**  
  *Description:* Function to enable Interrupt request for this specific IRQ.

- **`void NVIC_DisableIRQ(NVIC_IRQType IRQ_Num)`**  
  *Description:* Function to disable Interrupt request for this specific IRQ.

- **`void NVIC_SetPriorityIRQ(NVIC_IRQType IRQ_Num, NVIC_IRQPriorityType IRQ_Priority)`**  
  *Description:* Function to set the priority value for specific IRQ.

Implement functions to enable, disable, and set the priority of system and fault exceptions (for example, Bus Fault or SysTick exceptions). These functions take the exception number as input:

- **`void NVIC_EnableException(NVIC_ExceptionType Exception_Num)`**  
  *Description:* Function to enable specific ARM system or fault exceptions.

- **`void NVIC_DisableException(NVIC_ExceptionType Exception_Num)`**  
  *Description:* Function to disable specific ARM system or fault exceptions.

- **`void NVIC_SetPriorityException(NVIC_ExceptionType Exception_Num, NVIC_ExceptionPriorityType Exception_Priority)`**  
  *Description:* Function to set the priority value for specific ARM system or fault exceptions.
