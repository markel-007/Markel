int s1 = 5;
int s2 = 6;
int s3 = 7;
int s4 = 8;
int x;
int s10 = 10;
int s11 = 11;
int s12 = 12; 

void setup() {
  Serial.begin(115200);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(s4, OUTPUT);
  pinMode(A0, INPUT);
 
  pinMode(s10 , OUTPUT);  //definir pin como salida 10
  pinMode(s11 , OUTPUT);  //definir pin como salida 11
  pinMode(s12 , OUTPUT);  //definir pin como salida 12

 }
void loop() {
  x = analogRead(A0);
  Serial.print("X ardatza:   ");
  Serial.println(x);
  
  if(x<475) // ezker aldera mugituq
  {
 digitalWrite(s1, HIGH);
 digitalWrite(s2, LOW);
 digitalWrite(s3, LOW);
 digitalWrite(s4, LOW);
 delay(5);
 digitalWrite(s1, LOW);
 digitalWrite(s2, HIGH);
 digitalWrite(s3, LOW);
 digitalWrite(s4, LOW);
 delay(5);
 digitalWrite(s1, LOW);
 digitalWrite(s2, LOW);
 digitalWrite(s3, HIGH);
 digitalWrite(s4, LOW);
 delay(5);
 digitalWrite(s1, LOW);
 digitalWrite(s2, LOW);
 digitalWrite(s3, LOW);
 digitalWrite(s4, HIGH);
 delay(5);
              
   digitalWrite(s12 , HIGH);   // poner el Pin en HIGH
  delay(5);                     // esperar un segundo
   digitalWrite(s11 , LOW);   // poner el Pin en HIGH
  delay(5);                // esperar un segundo
   digitalWrite(s10 , LOW);   // poner el Pin en HIGH
  delay(5);          
 }
 else if(x>550) // eskubi aldera mugitu
 {
  digitalWrite(s1, LOW);
 digitalWrite(s2, LOW);
 digitalWrite(s3, LOW);
 digitalWrite(s4, HIGH);
 delay(5);
 digitalWrite(s1, LOW);
 digitalWrite(s2, LOW);
 digitalWrite(s3, HIGH);
 digitalWrite(s4, LOW);
 delay(5);
 digitalWrite(s1, LOW);
 digitalWrite(s2, HIGH);
 digitalWrite(s3, LOW);
 digitalWrite(s4, LOW);
 delay(5);
 digitalWrite(s1, HIGH);
 digitalWrite(s2, LOW);
 digitalWrite(s3, LOW);
 digitalWrite(s4, LOW);
 delay(5);
                              // esperar un segundo
   digitalWrite(s11 , HIGH);   // poner el Pin en HIGH
  delay(5);                   // esperar un segundo
   digitalWrite(s12 , LOW);   // poner el Pin en HIGH
  delay(5); 
   digitalWrite(s10 , LOW);   // poner el Pin en HIGH
  delay(5); 
 }
 else if(x > 475 && x < 550) //geratu
 {
 digitalWrite(s1, LOW);
 digitalWrite(s2, LOW);
 digitalWrite(s3, LOW);
 digitalWrite(s4, LOW);
                  // esperar un segundo
   digitalWrite(s10 , HIGH);   // poner el Pin en HIGH
  delay(5);            // esperar un segundo
   digitalWrite(s11 , LOW);   // poner el Pin en HIGH
  delay(5);            // esperar un segundo
   digitalWrite(s12 , LOW);   // poner el Pin en HIGH
  delay(5); 
 }
  
}
