int b1 = 6;
int b2 = 3;
int b3 = 5;
int pot1 = 6;
int pot2 = 5;
int pot3 = 3;
int bri1 = 0;
int bri2 = 0;
int bri3 = 0;
void setup() {
pinMode(b1, OUTPUT);
pinMode(b2, OUTPUT);
pinMode(b3, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
bri1=(analogRead(pot1))/4;
analogWrite(b1,bri1);
delay(20);
bri2=(analogRead(pot2))/4;
analogWrite(b2,bri2);
delay(20);
bri3=(analogRead(pot3))/4;
analogWrite(b3,bri3);
delay(20);
  // put your main code here, to run repeatedly:
}
