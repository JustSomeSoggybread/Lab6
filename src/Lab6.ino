
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

/*
  #include "oled-wing-adafruit.h"

  OledWingAdafruit display;
*/

void setup() {
  Serial.begin(9600);
  pinMode(A4, INPUT);


/*
  display.setup();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);

*/

}

void loop() {

  uint64_t reading = analogRead(A4);

  double voltage = (reading * 3.3) / 4095.0;

  double temperature = (voltage - 0.5) * 100;

  Serial.println(temperature);

  /*
  display.loop();
  display.clearDisplay();
  display.display();
  display.println("Hello, world!");
  */
}