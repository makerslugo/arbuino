/**
 * http://www.danilolarizza.com/arduino-christmas-tree/
 **/

long randNumber;
void setup() {
  DDRB = B11111111;
  DDRD = B11111100;
}
void loop(){
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
    analogWrite(11, fadeValue);
    delay(30);
  }
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
    analogWrite(9, fadeValue);
    delay(30);
  }
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
    analogWrite(10, fadeValue);
    delay(30);
  }
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
    analogWrite(6, fadeValue);
    delay(30);
  }
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) {
    analogWrite(5, fadeValue);
    delay(30);
  }
  for(int i = 0 ; i < 10; i++){
    digitalWrite(12, HIGH);
    delay(10);
    digitalWrite(12, LOW);
    delay(20);
    digitalWrite(2, HIGH);
    delay(10);
    digitalWrite(2, LOW);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(11, fadeValue);
    delay(30);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(9, fadeValue);
    delay(30);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(10, fadeValue);
    delay(30);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(6, fadeValue);
    delay(30);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(5, fadeValue);
    delay(30);
  }
  for(int e = 0 ; e < 10; e++){
    digitalWrite(12, HIGH);
    delay(10);
    digitalWrite(12, LOW);
    delay(20);
    digitalWrite(2, HIGH);
    delay(10);
    digitalWrite(2, LOW);
  }
  for(int f = 0 ; f < 10; f++){
    digitalWrite(7, HIGH);
    delay(10);
    digitalWrite(7, LOW);
    delay(20);
    digitalWrite(4, HIGH);
    delay(10);
    digitalWrite(4, LOW);
  }
  for(int k = 0 ; k < 30; k++){
    PORTD= B11111100;
    PORTB= B11111110;
    delay(10);
    PORTD= B00000000;
    PORTB= B00000000;
    delay(20);
    PORTD= B01101100;
    PORTB= B10110100;
    delay(10);
    PORTD= B00000000;
    PORTB= B00000000;
  }
  for(int d = 0 ; d < 30; d++){
    PORTD= B11111100;
    PORTB= B11111100;
    delay(40);
    PORTD= B00000000;
    PORTB= B00000000;
    delay(60);
    PORTD= B01101100;
    PORTB= B10001011;
    delay(40);
    PORTD= B00000000;
    PORTB= B00000000;
  }
  for(int w = 0 ; w < 30; w++){
    PORTD= B11111100;
    PORTB= B11111100;
    delay(60);
    PORTD= B00000000;
    PORTB= B00000000;
    delay(100);
    PORTD= B01101100;
    PORTB= B10001011;
    delay(60);
    PORTD= B00000000;
    PORTB= B00000000;
  }
  PORTD= B00000000;
  PORTB= B00000000;
  delay(3000);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(11, HIGH);
  delay(4000);
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(11, fadeValue);
    delay(10);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(9, fadeValue);
    delay(10);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(10, fadeValue);
    delay(10);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(6, fadeValue);
    delay(10);
  }
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) {
    analogWrite(5, fadeValue);
    delay(10);
  }
  delay(300);
  PORTD= B00000000;
  PORTB= B00000000;
  delay(400);
  for(int f = 0 ; f < 4; f++){
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    delay(500);
  }
  for(int f = 0 ; f < 2; f++){
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10, LOW);
    delay(500);
    digitalWrite(2, LOW);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
  }
  for(int e = 0 ; e < 20; e++){
    randNumber = random(2, 13);
    digitalWrite(randNumber, HIGH);
    delay(200);
  }
  for(int e = 0 ; e < 20; e++){
    randNumber = random(2, 13);
    digitalWrite(randNumber, LOW);
    delay(200);
  }
  PORTD= B00000000;
  PORTB= B00000000;
  delay(1500);

  for(int f = 0 ; f < 5; f++){
    digitalWrite(10, HIGH);
    delay(100);
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(5, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(100);
    digitalWrite(10, LOW);
    delay(100);
    digitalWrite(2, LOW);
    delay(100);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    delay(100);
    digitalWrite(5, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    delay(100);
  }

  for(int f = 0 ; f < 5; f++){
    digitalWrite(5, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(100);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(10, HIGH);
    delay(100);
    digitalWrite(5, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    delay(100);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(100);
    digitalWrite(2, LOW);
    delay(100);
    digitalWrite(10, LOW);
    delay(100);
  }
  delay(200);

}
