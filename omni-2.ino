//Motor A
const int inputPin1  = 10;    // IN3 of L298N IC
const int inputPin2  = 11;    // IN4 of L298N IC
//Motor B
const int inputPin3  = 9;    // IN2 of L298N IC
const int inputPin4  = 8;    // IN1 of L298N IC
//Motor C
const int inputPin5 = 12;     // IN1 of second L298N
const int inputPin6 = 13;     // IN2 of second L298N
int EN1 = 5;                 // EN1 of L298N IC
int EN2 = 6;                 // EN2 of L298N IC4
int EN3 = 3;                  // EN1 of sencond L298N

void setup()
{
    pinMode(EN1, OUTPUT);
    pinMode(EN2, OUTPUT);
    pinMode(EN3, OUTPUT);
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(inputPin3, OUTPUT);
    pinMode(inputPin4, OUTPUT); 
    pinMode(inputPin5, OUTPUT);
    pinMode(inputPin6, OUTPUT); 
}

void Forward(){
 int speed = 255;
 analogWrite(EN1, speed);      //sets the motors speed
 analogWrite(EN2, speed);      //sets the motors speed
 digitalWrite(EN3, LOW);
 digitalWrite(inputPin1, HIGH);
 digitalWrite(inputPin2, LOW);
 digitalWrite(inputPin3, HIGH);
 digitalWrite(inputPin4, LOW);
}
void Reverse(){
 int speed = 255;
 analogWrite(EN1, speed);      //sets the motors speed
 analogWrite(EN2, speed);      //sets the motors speed
 digitalWrite(EN3, LOW);
 digitalWrite(inputPin1, LOW);
 digitalWrite(inputPin2, HIGH);
 digitalWrite(inputPin3, LOW);
 digitalWrite(inputPin4, HIGH);
}
void Left(){
 int speed = 255;
 analogWrite(EN1, 255);      //sets the motor1 speed
 digitalWrite(EN2, LOW);      //sets the motor2 speed
 analogWrite(EN3, speed);     // sets motor3 speed
 digitalWrite(inputPin1, LOW);
 digitalWrite(inputPin2, HIGH);
 // digitalWrite(inputPin3, HIGH);
 // digitalWrite(inputPin4, LOW);
 digitalWrite(inputPin5, HIGH);
 digitalWrite(inputPin6, LOW);
}

void Right(){
 int speed = 255;
 digitalWrite(EN1, LOW);      //sets the motor1 speed
 analogWrite(EN2, 255);      //sets the motor2 speed
 analogWrite(EN3, speed);     // sets motor3 speed
 // digitalWrite(inputPin1, HIGH);
 // digitalWrite(inputPin2, LOW);
 digitalWrite(inputPin3, HIGH);
 digitalWrite(inputPin4, LOW);
 
 digitalWrite(inputPin5, LOW);
 digitalWrite(inputPin6, HIGH);
}

void loop()
{
Forward();
delay(3000);
Reverse();
delay(3000);
Left();
delay(6000);
Right();
delay(6000);
}
