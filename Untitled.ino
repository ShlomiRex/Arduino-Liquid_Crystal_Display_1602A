#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  lcd.begin(16,2);
  
}

void loop() {
  lcd.clear();
  lcd.print("Shlomi");
  delay(1000);
  lcd.clear();
  lcd.print("Domnenko");
  delay(1000);

  
}
