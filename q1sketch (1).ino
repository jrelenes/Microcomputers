
int analogPin = A3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int myData[10];
  Serial.print("startTime: ");
  Serial.println(micros());
  
  for (int i = 0; i < 10; i++){
    myData[i]= analogRead(A3); 
  }
  Serial.print("endTime: ");
  Serial.println(micros());
  for (int i = 0; i < 10; i++){
    Serial.println(myData[i]);
  }
  
}


void loop() {
  
  
 


  //Q1 and Q2
  //float startTime = micros();
  //int val = analogRead(A3);  
  //Serial.println(val);
  //Serial.print("Time: ");
  //Serial.println(startTime);   


  //ORIGINAL METHOD
  /**float endTime = micros();
  float elapsedTime = endTime - startTime;
  Serial.print("Time elapsed: ");
  Serial.println(elapsedTime);**/
  
}




