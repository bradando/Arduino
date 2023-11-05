// Continuity Tester with LED on when tested item has continuity.
// Serial Monitor with confirm when ready to test and if item has continuity will show "Tested Good"

void setup() {
  #define NAME    "Continuity Tester_"
  #define VERSON     "V1.0.1 "
  #define CREATOR     "Created By Brad Anderson "
  #define DATE     "2023.11.05"
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT); 
}

void loop() {
  int sensorVal = digitalRead(2);
  int HoldT = 750;
  int HoldTWorking = 3000;
  String Working = "!!!!_Tested Good_!!!!";
  String Ready = ".....Ready To Test.....";
 Serial.print (NAME);
 Serial.print (VERSON);
 Serial.print (CREATOR);
 Serial.print (DATE);
 Serial.println ( );

  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
    Serial.println (Ready);
    Serial.println ( );
    delay (HoldT);
  } else {
    digitalWrite(13, HIGH);
    Serial.println (Working);
    Serial.println ( );
    delay (HoldTWorking);
  }
}
