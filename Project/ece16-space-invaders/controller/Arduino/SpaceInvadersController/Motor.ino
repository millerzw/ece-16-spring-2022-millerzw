// setting PWM properties 
const int pwmFrequency = 5000;  // Set the PWM frequency to 5KHz
const int pwmChannel = 0;       // Use PWM channel 0
const int pwmBitResolution = 8; // Set a PWM resolution of 8 bits


const int MOTOR_PIN=18; //pin for the motor

void setupMotor(){
  //pinMode(MOTOR_PIN, OUTPUT);
  // configure PWM on a specific pwmChannel
  ledcSetup (pwmChannel, pwmFrequency, pwmBitResolution);
  // attach the pwmChannel to the output GPIO to be controlled
  ledcAttachPin(MOTOR_PIN, pwmChannel);
}

void activateMotor(int motorPower){
  ledcWrite(pwmChannel,motorPower);
}

void deactivateMotor(){
  ledcWrite(pwmChannel,0);
}
