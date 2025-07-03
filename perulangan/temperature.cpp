#include <iostream>
#include <iomanip>
using namespace std;

//constant declare
const double celstoK = 273.15;
const double celstoF = 9.0 / 5.0;
const double celstoRe = 4.0 / 5.0;
const int max_input = 5000;

double cels_to_fah( double cel ) {
    return (cel * celstoF) + 32.0;
    }
double cels_to_re( double cel ) {
    return cel * celstoRe;
    }
double cels_to_kel( double cel ) {
    return cel + celstoK;
    }

int main () {
    cout << fixed << setprecision(2);
    cout << "\nCelcius\t\tFahrenHeit\tReamur\t\tKelvin\n";
    for (int i = 10; i <= 100; i += 10) {
        cout << i << "\t\t" 
        << cels_to_fah(i) << "\t\t" 
        << cels_to_re(i) << "\t\t" 
        << cels_to_kel(i) << "\n";
    }

    return 0;
}