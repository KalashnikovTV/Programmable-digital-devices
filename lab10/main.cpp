// Код написан для Arduino; Code written for Arduino

/*
// Программа "Indikator1"
// К контакту D12 подключен светодиод
int led = 12;
// Процедура установки запускается один раз при нажатии кнопки сброса:
void setup() {
    // инициализируем цифровой вывод D12 как выход:
    pinMode(led, OUTPUT);
}
// основной цикл:
void loop() {
    digitalWrite(led, HIGH); // включить светодиод (HIGH означает высокий уровень напряжения)
    delay(500); // ждать пол-секунды
    digitalWrite(led, LOW); // выключить светодиод (LOW означает низкий уровень напряжения)
    delay(1000); //ждать секунду
}
*/

/*
// Программа "Dinamik1"
// К контакту D4 подключен динамик
int Dinamik = 4;
// Процедура установки запускается один раз при нажатии кнопки сброса:
void setup() {
    // инициализируем цифровой вывод D4 как выход:
    pinMode(Dinamik, OUTPUT);
}
// основной цикл:
void loop() {
    digitalWrite(Dinamik, HIGH); // включить динамик (HIGH означает высокий уровеньнапряжения)
    delay(500); // временная задержка
    digitalWrite(Dinamik, LOW); // выключить динамик (LOW означает низкий уровень напряжения)
    delay(500); //ждать пол-секунды
}
*/

// Программа "Indikator2"
// Светодиод, подключенный к вход/выходу 12
int switchPin = 2;
int ledPin = 12;
// установки
void setup() {
    pinMode(switchPin, INPUT); // устанавливает режим работы - вход
    digitalWrite(switchPin, HIGH);
    pinMode(ledPin, OUTPUT); // устанавливает режим работы - выход
    Serial.begin(9600);
}
// основной цикл
void loop() {
    int g = digitalRead(switchPin);
    digitalWrite(ledPin, g);
    Serial.print(g);
    delay(100); // задержка
}
