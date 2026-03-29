# Purpose

The purpose of this repository is to find an error that appeared at compilation time with ARDUINO IDE 2.3.8 and STM32 Blackpill. in the port of 
Mechaduino code (https://github.com/jcchurch13/Mechaduino-Hardware)
From SAMD21 to STM32F401.

# The error

It was :

```
Local\Arduino15\packages\STMicroelectronics\hardware\stm32\2.12.0\libraries\USBDevice\src\usbd_desc.c:93:47: error: implicit declaration of function 'CONCATS' [-Wimplicit-function-declaration]
   93 |   #define USBD_CLASS_PRODUCT_HS_STRING        CONCATS(BOARD_NAME, "CDC in HS Mode"
```

This bug appears because of the name of the files Utils.cpp and Utils.h. To clean it it is very simple, just rename this 2 files !
