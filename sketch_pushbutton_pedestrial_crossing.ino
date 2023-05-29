int redLight=2;
int orangeLight = 3;
int greenLight = 4;

int pedRedLight = 6;
int pedGreenLight = 7

int button = 10;
int buttonState= 0 

void setup() {
  pinMode(redLight, OUTPUT);
  pinMode(orangeLight, OUTPUT);
  pinMode(greenLight, OUTPUT);

  pinMode(pedGreenLight, OUTPUT);
  pinMode(pedRedLight, OUTPUT);

  pinMode(button, INPUT);

}

void loop() {
  buttonState= digitalRead(button);

  if(buttonState==HIGH)
  {
    delay(1000);

    digitalWrite(redLight, LOW);
    digitalWrite(orangeLight, LOW);
    digitalWrite(greenLight, HIGH);

    digitalWrite(pedGreenLight, HIGH);
    delay(3000); //3 SECOND TO CROSS THE ROAD.

    digitalWrite(orangeLight, HIGH);
    digitalWrite(redLight, LOW);
    digitalWrite(greenLight, LOW)
    delay(1000);


  }else{
    delay(1000);
    digitalWrite(pedRedLight, HIGH);

    digitalWrite(redLight, HIGH);
    digitalWrite(orangeLight, LOW);
    digitalWrite(greenLight, LOW);    
  }
  
}
