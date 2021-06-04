
void LCD(){
  lcd.begin(16,2);
  lcd.setCursor(1,1);
  lcd.print("Bin full,use Bin x");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  delay(1000);
}
