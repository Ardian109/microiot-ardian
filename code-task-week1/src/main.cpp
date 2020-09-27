#include <Arduino.h>
#define BUTTON_PIN 18
#define LED_PIN1 4
#define LED_PIN2 21
#define LED_PIN3 2

int led_status = LOW;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(115200);
  delay(1000);

}

void loop() {
    
  if (Serial.available()){
   char data = Serial.read();
   Serial.println();
   Serial.print("Karakter yang dikirim: ");
   Serial.println(data);
   if (data == '1'){
     Serial.println("Lampu 1 is ON");
     digitalWrite(LED_PIN1, HIGH);
     delay(2000);
     digitalWrite(LED_PIN1, LOW);
   }
   else if (data == '2'){
     Serial.println("Lampu 2 is ON");
     digitalWrite(LED_PIN2, HIGH);
     delay(2000);
     digitalWrite(LED_PIN2, LOW);
   }
   else if (data == '3'){
     Serial.println("Lampu 3 is ON");
     digitalWrite(LED_PIN3, HIGH);
     delay(2000);
     digitalWrite(LED_PIN3, LOW);
   }
   else if (data == '4'){
     Serial.println("Lampu 4 is ON");

   
}
}
}
