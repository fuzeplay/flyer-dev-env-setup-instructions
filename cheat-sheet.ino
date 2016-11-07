//LED Initialization (Don't change any of this!)
//https://github.com/FastLED/FastLED/wiki/Basic-usage for more details
#define NUMBER_OF_LEDS 6 //Number of linear LEDs on the board (don't change this)
#define DATA_PIN 11 //Serial Data output (don't change this)
#define CLOCK_PIN 13 //Serial Clock output (don't change this)
CRGB leds[NUMBER_OF_LEDS]; //LED Array (don't change this)

//Buttons (Don't change any of this)
#define BUTTON_ONE_PIN 6 
#define BUTTON_TWO_PIN 5 
#define BUTTON_THREE_PIN A2 

#define BUTTON_TRIANGLE_PIN 3
#define BUTTON_CIRCLE_PIN 4
#define BUTTON_SQUARE_PIN 8 

#define BUZZER_PIN 7 //Untested

boolean cancelGame = false; //Flag used in the interruption of a current game

void setup() {
  // put your setup code here, to run once:
  
  //Initialize LED
  FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUMBER_OF_LEDS);
  
  //Initialize buttons
  pinMode(BUTTON_TRIANGLE_PIN, INPUT);
  pinMode(BUTTON_CIRCLE_PIN, INPUT);
  pinMode(BUTTON_SQUARE_PIN, INPUT);
  
  //Enable Button interrupts for menu buttons
  pinMode(BUTTON_ONE_PIN, INPUT_PULLUP);
  enableInterrupt(BUTTON_ONE_PIN, buttonOneInterruptFunction, FALLING);
  
  pinMode(BUTTON_TWO_PIN, INPUT_PULLUP);
  enableInterrupt(BUTTON_TWO_PIN, buttonTwoInterruptFunction, FALLING);
  
  pinMode(BUTTON_THREE_PIN, INPUT_PULLUP);
  enableInterrupt(BUTTON_THREE_PIN, buttonThreeInterruptFunction, FALLING);
  
} 
