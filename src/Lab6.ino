
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  Serial.begin(9600);
  pinMode(A4, INPUT);
}

void loop() {

  uint64_t reading = analogRead(A4);

  double voltage = (reading * 3.3) / 4095.0;

  double temperature = (voltage - 0.5) * 100;

  Serial.println(temperature);
  
  /*
  uint64_t reading = analogRead(A4);
  double voltage = (reading * 3.3) / 4095.0;
  double temperature = (voltage - 0.5) * 100;
  */
}