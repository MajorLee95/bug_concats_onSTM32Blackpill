// Contains the definitions of the functions used by the firmware.

// #include <SPI.h>
// #include <Wire.h>
// *** STM32F401 PORT ***
// FlashStorage SAMD21 remplacé par un stub minimal (RAM only).
// Si tu veux du vrai stockage flash, utilise EEPROM_emul STM32 ou une lib
// dédiée. #include "FlashStorage_stub.h"  // *** MODIF STM32F4 ***

// #include "Parameters.h"
// #include "Controller.h"
#include "Utils.h"
// #include "State.h"
// #include "analogFastWrite.h"
// #include "HardwareTimer.h"

void setupPins() {
//     pinMode(VREF_2, OUTPUT);
//     pinMode(VREF_1, OUTPUT);
//     pinMode(IN_4, OUTPUT);
//     pinMode(IN_3, OUTPUT);
//     pinMode(IN_2, OUTPUT);
//     pinMode(IN_1, OUTPUT);

//     pinMode(chipSelectPin, OUTPUT);

// #ifdef ENABLE_PROFILE_IO
//     pinMode(TEST1, OUTPUT);
// #endif

//     pinMode(ledPin, OUTPUT);

//     // analogFastWrite(VREF_2, 0.33 * uMAX);
//     // analogFastWrite(VREF_1, 0.33 * uMAX);

//     IN_4_HIGH();
//     IN_3_LOW();
//     IN_2_HIGH();
//     IN_1_LOW();
}
