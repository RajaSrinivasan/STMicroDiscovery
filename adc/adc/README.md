This project is designed to explore 2 peripherals - the ADC and the CRC calculator. In addition we explore the use of
FreeRTOS as well.

There are 3 tasks (threads?) created:

Task 1 - Simply a heartbeat task. Just toggles the Blue LED. Illustrates the task creation and some FreeRTOS primitives
Task 2 - Initializes each word of a block of 64 words and uses the CRC calculator to calculate the CRC. Toggles the green LED
         to indicate it is alive. Theoretically though the 2 LEDs start in sync, due to the computation time for the
         CRC, they should drift apart over a long (how much?) time.
Task 3 - This task (currently incomplete) uses the ADC to sample several different values such as temperature, Vbat as well as
         an external value. 
