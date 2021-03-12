// Код написан для Arduino; Code written for Arduino

// установки:
void setup() {
    // инициализируем последовательную передачу данных со скоростью 9600 бит в секунду:
    Serial.begin(9600);
}

// основной цикл:
void loop() {
    // читаем значение на аналоговом входе А0:
    int sensorValue = analogRead(A0);
    // отображение значения напряжений, подаваемые на аналоговый вход Arduino
    float volt = (sensorValue * 4.77) / 1023;
    // проверка по значению напряжения
    if (volt >= 3) {
      digitalWrite(13, HIGH);
      delay(100);
    } else {
      digitalWrite(13, LOW);
      delay(100);
    }
    // выводим на монитор считанное значение:
    Serial.println(volt);
    // задержка в промежутке между считываниями для стабильности:
    delay(1);
}
