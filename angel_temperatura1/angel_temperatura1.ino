// C++ code
// Iasmin Angel

int piezo = 3;
int temp = A0;
int valorTemp = 0;


void setup()
{
  pinMode(piezo, OUTPUT);
  Serial.begin (9600);
}

void loop()
{
  valorTemp = analogRead(temp);
  Serial.println(valorTemp);
  
  if(valorTemp > 200){
  	digitalWrite (piezo,HIGH);
  } else {
  	digitalWrite (piezo,LOW);
  }
  
  delay(100); 
}