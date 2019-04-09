//Motor A
const int inputPin1  = 10;    // Pin 15 of L298N IC
const int inputPin2  = 11;    // Pin 10 of L298N IC
//Motor B
const int inputPin3  = 9;    // Pin  7 of L298N IC
const int inputPin4  = 8;    // Pin  2 of L298N IC
int EN1 = 5;   // Pin 1 of L298N IC
int EN2 = 6;     // Pin 9 of L298N IC4

void setup()
{
    pinMode(EN1, OUTPUT);   // where the motor is connected to
    pinMode(EN2, OUTPUT);   // where the motor is connected to
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(inputPin3, OUTPUT);
    pinMode(inputPin4, OUTPUT);  
}

void loop()

{
 int speed;
 speed = 255;  //Receive Value from serial monitor
 analogWrite(EN1, speed); //sets the motors speed
 analogWrite(EN2, speed); //sets the motors speed
 digitalWrite(inputPin1, HIGH);
 digitalWrite(inputPin2, LOW);
 digitalWrite(inputPin3, HIGH);
 digitalWrite(inputPin4, LOW);
}
