// ��� ������� ��� Arduino; Code written for Arduino

// ���������:
void setup() {
    // �������������� ���������������� �������� ������ �� ��������� 9600 ��� � �������:
    Serial.begin(9600);
}

// �������� ����:
void loop() {
    // ������ �������� �� ���������� ����� �0:
    int sensorValue = analogRead(A0);
    // ������� �� ������� ��������� ��������:
    Serial.println(sensorValue);
    // �������� � ���������� ����� ������������ ��� ������������:
    delay(1);
    // ����������� �������� ����������, ���������� �� ���������� ���� Arduino
    float voltage= sensorValue * (5.0 / 1023.0);
    Serial.println(voltage);
}
