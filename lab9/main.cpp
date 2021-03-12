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
    // ����������� �������� ����������, ���������� �� ���������� ���� Arduino
    float volt = (sensorValue * 4.77) / 1023;
    // �������� �� �������� ����������
    if (volt >= 3) {
      digitalWrite(13, HIGH);
      delay(100);
    } else {
      digitalWrite(13, LOW);
      delay(100);
    }
    // ������� �� ������� ��������� ��������:
    Serial.println(volt);
    // �������� � ���������� ����� ������������ ��� ������������:
    delay(1);
}
