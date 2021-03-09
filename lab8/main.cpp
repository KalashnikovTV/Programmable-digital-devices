// ��� ������� ��� Arduino; Code written for Arduino

// ���������:
voidsetup() {
    // �������������� ���������������� �������� ������ �� ��������� 9600 ��� � �������:
    Serial.begin(9600);
}

// �������� ����:
voidloop() {
    // ������ �������� �� ���������� ����� �0:
    intsensorValue = analogRead(A0);
    // ������� �� ������� ��������� ��������:
    Serial.println(sensorValue);
    // �������� � ���������� ����� ������������ ��� ������������:
    delay(1);
    // ����������� �������� ����������, ���������� �� ���������� ���� Arduino
    float voltage= sensorValue * (5.0 / 1023.0);
    Serial.println(voltage);
}
