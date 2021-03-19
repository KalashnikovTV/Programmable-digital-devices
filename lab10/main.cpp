// ��� ������� ��� Arduino; Code written for Arduino

/*
// ��������� "Indikator1"
// � �������� D12 ��������� ���������
int led = 12;
// ��������� ��������� ����������� ���� ��� ��� ������� ������ ������:
void setup() {
    // �������������� �������� ����� D12 ��� �����:
    pinMode(led, OUTPUT);
}
// �������� ����:
void loop() {
    digitalWrite(led, HIGH); // �������� ��������� (HIGH �������� ������� ������� ����������)
    delay(500); // ����� ���-�������
    digitalWrite(led, LOW); // ��������� ��������� (LOW �������� ������ ������� ����������)
    delay(1000); //����� �������
}
*/

/*
// ��������� "Dinamik1"
// � �������� D4 ��������� �������
int Dinamik = 4;
// ��������� ��������� ����������� ���� ��� ��� ������� ������ ������:
void setup() {
    // �������������� �������� ����� D4 ��� �����:
    pinMode(Dinamik, OUTPUT);
}
// �������� ����:
void loop() {
    digitalWrite(Dinamik, HIGH); // �������� ������� (HIGH �������� ������� �����������������)
    delay(500); // ��������� ��������
    digitalWrite(Dinamik, LOW); // ��������� ������� (LOW �������� ������ ������� ����������)
    delay(500); //����� ���-�������
}
*/

// ��������� "Indikator2"
// ���������, ������������ � ����/������ 12
int switchPin = 2;
int ledPin = 12;
// ���������
void setup() {
    pinMode(switchPin, INPUT); // ������������� ����� ������ - ����
    digitalWrite(switchPin, HIGH);
    pinMode(ledPin, OUTPUT); // ������������� ����� ������ - �����
    Serial.begin(9600);
}
// �������� ����
void loop() {
    int g = digitalRead(switchPin);
    digitalWrite(ledPin, g);
    Serial.print(g);
    delay(100); // ��������
}
