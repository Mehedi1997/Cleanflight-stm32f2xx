Have ever you noticed that cleanflight supports ST's F1,..F3, F4 and F7 series MCU's but F2! 
I think it will be great if F1 to F7 all are supported by clean flight. 

STM32F207xx is an arm cortex-m3 MCU which has very similar memory, peripheral and bus architecture to stm32f4xx series. 
this MCU is capable to run at 120Mhz clock speed, has upto 1024kb flash, 128kb RAM and 6 uart's. 
So I think it will be worth to run cleanflight on it, at least this is much better than stm32f1xxx and only lags by stm32f3xxx for not having a dedicated hardware FPU on it, but this might also recoverable by it's clock speed (72Mhz for F3xxx vs 120Mhz for F2xx) still cheaper than F3xx. 
