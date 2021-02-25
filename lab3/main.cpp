#include <iostream>

using namespace std;

int main()
{
    int Npi, X;
    int N01 = 10, N02 = 14, Np1 = 70, Np2 = 83;

    cout << "Vvedite pokazanie pribora Npi = ";
    cin >> Npi;

    X = (((N02-N01)*(Npi-Np1))/(Np2-Np1))+N01;
    cout << "Rezultat izmereniy X = " << X;

    return 0;
}
