#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_CTYPE,"Russian");
    int n, avr;
    float *a;
    float *b;
    float *c;

    cout << "Vvedite kolichestvo tochek n: ";
    cin >> n;

    a = new float[n];
    b = new float[n];
    c = new float[n];

    for (int i = 0; i < n; i++) {
        cout << "Vvedite Noi: ";
        cin >> a[i];
    }

    for (int j = 0; j < n; j++) {
        cout << "Vvedite Npgi: ";
        cin >> b[j];
    }

    cout << "Vvedite kolichestvo tochek n: ";
    cin >> n;

    for (int k = 0; k < n; k++) {
        cout << "Schitivanie Npi: ";
        cin >> c[k];
        avr = (avr + c[k]);
    }
    cout << "Srednee arifmeticheskoe rezultatov nabludeniy Npi: " << avr / n << endl;

    float RezIzmer=((a[1]-a[0])*((avr/n)-(b[0])))/((b[1])-b[0])+a[0];
    cout << "Rezultat izmerenia Np: " << RezIzmer << endl;

    return 0;
}
