// Код написан для Arduino; Code written for Arduino

// установки:
voidsetup() {
    // инициализируем последовательную передачу данных со скоростью 9600 бит в секунду:
    Serial.begin(9600);
}

// основной цикл:
voidloop() {
    // читаем значение на аналоговом входе А0:
    intsensorValue = analogRead(A0);
    // выводим на монитор считанное значение:
    Serial.println(sensorValue);
    // задержка в промежутке между считываниями для стабильности:
    delay(1);
    // отображение значения напряжений, подаваемые на аналоговый вход Arduino
    float voltage= sensorValue * (5.0 / 1023.0);
    Serial.println(voltage);
}
