int flexPin = A0;       
int ledPin = 13;        
int threshold = 250;    

void setup() {
  Serial.begin(9600);        
  pinMode(ledPin, OUTPUT);   
}

void loop() {
  int flexValue = analogRead(flexPin);   
  Serial.print("Flex Sensor Value: ");
  Serial.println(flexValue);

  if (flexValue > threshold) {
    digitalWrite(ledPin, HIGH);  
    Serial.println("🚨 SMS SENT TO 9876543210: Emergency! Help Needed.");
    delay(2000);                 
  } else {
    digitalWrite(ledPin, LOW);  
  }

  delay(500);  
}

