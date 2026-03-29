#include <SPI.h>
#include <Wire.h>

#include "Parameters.h"
// #include "State.h"
#include "fonct.h"
#include "Controller.h"
// #include "analogFastWrite.h"
 #include "HardwareTimer.h"

 // *** STM32F401 PORT ***
// HardwareTimer pour remplacer TC5 SAMD21 (Fs = 6500 Hz)
HardwareTimer *controlTimer = nullptr;

void setup() {
    // initialize both serial ports:
    Serial.begin(9600);
    while (!Serial && millis() < 5000) {
    }  // Attendre USB si disponible

    Serial.println("\n\n----- Mechaduino STM32F401CCU6 -----");
    Serial.print("Firmware: ");
    Serial.println(firmware_version);
    Serial.print("Identifier: ");
    Serial.println(identifier);
    Serial.println("*** PORTÉ DE SAMD21 vers STM32F401CCU6 ***\n");

    setupPins();
    // setupSPI();
    
    // *** STM32F401 PORT : CONFIG TIMER CONTRÔLE (remplace setupTCInterrupts SAMD21) ***
    Serial.println("Configuring control timer (6500 Hz)...");
    
    // Timer2 (ou TIM3) pour boucle de contrôle Fs=6500Hz
    controlTimer = new HardwareTimer(TIM2);  // *** MODIF STM32F4 ***
    controlTimer->setOverflow(6500, HERTZ_FORMAT);  // Fs = 6500 Hz comme original
    controlTimer->attachInterrupt(TC5_Handler);     // Appelle TC5_Handler() existant !
    controlTimer->pause();  // Démarre en pause (activé par enableTCInterrupts())
    
    Serial.println("Timer configured. Use 'y' to enable closed loop.");
    
    // configureStepDir();
    // configureEnablePin();
    
    // *** STM32F401 PORT ***
    // Alias SerialUSB si nécessaire (selon ta core STM32)
    Serial.println("Setup complete. Type 'm' for menu.");






}

void loop() {
    Serial.println("Bonjour");
    delay(1000);
}
