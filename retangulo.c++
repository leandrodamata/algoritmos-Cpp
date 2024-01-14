#include <bits/stdc++.h>

using namespace std;

int main ()
{
    double base, altura, area, perim, diag;

    cout << "Base do retangulo = ";
    cin >> base;
    cout << "Altura do retangulo = ";
    cin >> altura;
    
    area = base * altura;
    perim = (2*base) + (2*altura);
    diag = sqrt(pow(base, 2.0) + pow(altura, 2.0)); 

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perim << endl;
    cout << "DIAGONAL = " << diag << endl;

}