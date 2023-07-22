/*********************Função que configura Pinos do MCU*************************

                       configuração para ESP32

*******************************************************************************/
/******************************************************************************/
                    /* Arquivos de inclusão */

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>

/*Biblioteca FreeRTOS*/
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include <Adafruit_BusIO_Register.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


#include "Config_ESP32.h"




     #define LED 2





// ======================================================================================================
// --- Função de inicialização do Display ---
// ======================================================================================================
// --- Objetos ---
 void config_mcu()

 {

      pinMode(LED,OUTPUT);
     Serial.begin(115200);
    
     
 }


 void teste_LED()
 {
    
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
  delay(500);
  Serial.println("OI");

  
 }