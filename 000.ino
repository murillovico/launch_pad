void setup() {
  // put your setup code here, to run once:
   pinMode (13,INPUT);
    pinMode (12,INPUT);
    pinMode (11,INPUT);
    pinMode (4,OUTPUT);
    pinMode (3,OUTPUT);
    pinMode (2,OUTPUT); 

    
}

void loop() {
  // put your main code here, to run repeatedly:

   int mur=digitalRead (13);

   int ju =digitalRead (12);
 
   int ku= digitalRead (11);

   
  
    digitalWrite (4,mur);
    digitalWrite (3,ju);
    digitalWrite (2,ku);
}
