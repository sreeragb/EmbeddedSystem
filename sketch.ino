#define button 2 //Pin connected to pushbutton.
//Display pin connection
int a = 3; 
int b = 4;
int c = 5;
int d = 6;
int e = 7;
int f = 8;
int g = 9;

void setup() {  
  Serial.begin(115200);
  Serial.println("Press the button.");
  //Initialisation of Input and Output
  pinMode(button, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT); 
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);  
  
  
}

// the loop function runs over and over again forever

void loop() {
  
   boolean status = digitalRead(button); //Take pushbutton input
   unsigned int DiceNumber; //variable for Dice number .

   
   //Code for push button
   
    if(status == HIGH){
   
    Serial.println("The button is pressed.");
    DiceNumber  = random(0, 7); //to print random numbers if button is pushed (HIGH).
    Serial.println("Dice  Number:");
    Serial.println(DiceNumber);
    int value = display(DiceNumber); //Function to print the random value of dice in display
    }
    else if(status == LOW){
      Serial.println("The button is released.");
      
      digitalWrite(a , HIGH);
      digitalWrite(b , HIGH);
      digitalWrite(f , HIGH);
      digitalWrite(g , HIGH);
      digitalWrite(d , HIGH);
      digitalWrite(c , HIGH);
      digitalWrite(e , HIGH);
    }

 delay(2000);   
}
int display(unsigned int DiceNumber){
  switch (DiceNumber){
      case 0: //to display 0
      digitalWrite(a , LOW);
      digitalWrite(b , LOW);
      digitalWrite(c , LOW);
      digitalWrite(d , LOW);
      digitalWrite(e , LOW);
      digitalWrite(f , LOW);
      digitalWrite(g , HIGH);
      
      break;

      case 1: //to display 1
      digitalWrite(b , LOW);
      digitalWrite(c , LOW);
      digitalWrite(a , HIGH);
      digitalWrite(d , HIGH);
      digitalWrite(e , HIGH);
      digitalWrite(f , HIGH);
      digitalWrite(g , HIGH);
      
      break;

      case 2: //to display 2
      digitalWrite(a , LOW);
      digitalWrite(b , LOW);
      digitalWrite(g , LOW);
      digitalWrite(d , LOW);
      digitalWrite(e , LOW);
      digitalWrite(f , HIGH);
      digitalWrite(c , HIGH);
      
      break;

      case 3: //to display 3
      digitalWrite(a , LOW);
      digitalWrite(b , LOW);
      digitalWrite(g , LOW);
      digitalWrite(d , LOW);
      digitalWrite(c , LOW);    
      digitalWrite(f , HIGH);  
      digitalWrite(e , HIGH);
      break;

      case 4: //to display 4
      digitalWrite(f , LOW);
      digitalWrite(g , LOW);
      digitalWrite(c , LOW);
      digitalWrite(b , LOW);
      digitalWrite(a , HIGH);
      digitalWrite(d , HIGH);
      digitalWrite(e , HIGH);
      
      break;

      case 5: //to display 5
      digitalWrite(a , LOW);
      digitalWrite(f , LOW);
      digitalWrite(g , LOW);
      digitalWrite(d , LOW);
      digitalWrite(c , LOW);
      digitalWrite(e , HIGH);
      digitalWrite(b , HIGH);
      break;

      case 6: //to display 6
      digitalWrite(a , LOW);
      digitalWrite(f , LOW);
      digitalWrite(g , LOW);
      digitalWrite(d , LOW);
      digitalWrite(c , LOW);
      digitalWrite(e , LOW);
      digitalWrite(b , HIGH);
      break;
    }
}