#include <LiquidCrystal.h>
#include <OneWire.h>
#include <DallasTemperature.h>


LiquidCrystal lcd(17, 16, 4, 0, 2, 15);


OneWire oneWire(5);
DallasTemperature sensor(&oneWire);


const int LED = 21;
const int sensorMovimento = 23;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);  
  sensor.begin();  
  
  pinMode(LED, OUTPUT);  
  pinMode(sensorMovimento, INPUT);  
}

void loop() {

  const int IP = digitalRead(sensorMovimento);
  
  if (IP == 1) {  
    digitalWrite(LED, HIGH);  
    Serial.println("Carro detectado");

    
    sensor.requestTemperatures(); 
    int temp = sensor.getTempCByIndex(0); 
    

    lcd.clear();
    

    lcd.setCursor(0, 0);
    if (temp <= 0) {
      lcd.print("Carro muito frio");
      lcd.setCursor(0, 1);
      lcd.print(temp);
      lcd.print(" C");
    } else if (temp <= 15) {
      lcd.print("Carro frio");
      lcd.setCursor(0, 1);
      lcd.print(temp);
      lcd.print(" C");
    } else if (temp <= 24) {
      lcd.print("Temp normal");
      lcd.setCursor(0, 1);
      lcd.print(temp);
      lcd.print(" C");
    } else {
      lcd.print("Carro quente");
      lcd.setCursor(0, 1);
      lcd.print(temp);
      lcd.print(" C");
    }
    
    delay(1500); 
  } else {
    digitalWrite(LED, LOW); 
    Serial.println("Nenhum carro detectado");
    lcd.clear();  
    delay(1000);  
  }
}
