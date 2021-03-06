
#include <iostream>
#include <cmath>


using namespace std;

// Rounding off the measurement result in sub-ranges
int rounding(int num)
{
    switch (num)
	{
	case 0 ... 3:
		return round(num * 100) / 100;
	case 4 ... 30:
		return round(num * 10) / 10;
	case 31 ... 100:
		return round(num);
	}
}

int main ()
{
    setlocale(LC_CTYPE, "Russian");

    int N, n;
    float avr;
    float *a;
    float *b;
    float *c;

    cout << "Vvedite chislo tochek na krivoy(N=3...10) N = ";
    cin >> N;

    if (N >= 3 && N <= 10) {
        cout << "Vvedite chislo rezultatov nabludeniy(n=5...7) n = ";
        cin >> n;

        if(n >= 5 && n <= 7) {
            a = new float[N];
            b = new float[N];
            c = new float[n];

            for (int i = 0; i < N; i++) {
                cout << "Vvedite Noi: ";
                cin >> a[i];
            }

            for (int j = 0; j < N; j++) {
                cout << "Vvedite Npgi: ";
                cin >> b[j];
            }

            int max_elem = -1000000000;
            int min_elem = 1000000000;

            for (int k = 0; k < n; k++) {
                cout << "Schitivanie s ADC Npi: ";
                cin >> c[k];

                if (c[k] > max_elem) {
                    max_elem = c[k];
                }
                if (c[k] < min_elem) {
                    min_elem = c[k];
                }
                avr = (avr + c[k]);
            }

            cout << "Minimalnoe znachenie minNp = " << min_elem << endl;
            cout << "Maximalnoe znachenie maxNp = " << max_elem << endl << endl;

            cout << "Srednee arifmeticheskoe Nps = " << (avr-min_elem-max_elem) / (n-2) << endl << endl;

            float RezIzmer=((a[1]-a[0])*((avr-min_elem-max_elem) / (n-2)-(b[0])))/((b[1])-b[0])+a[0];
            cout << "Rezultat izmereniy = " << rounding(RezIzmer) << endl;

        } else {
            return 0;
        }
    } else {
        return 0;
    }
}



