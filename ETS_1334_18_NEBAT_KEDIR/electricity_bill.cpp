#include <iostream>
#include <iomanip>
using namespace std;

int main() {


    int units;
    double energy, total;

    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    const int LIMIT = 50;
    const double SERVICE = 10.0;

    cout << "Enter electricity units: ";
    cin >> units;

    energy = (units <= LIMIT)
           ? units * FIRST_RATE
           : LIMIT * FIRST_RATE
             + (units - LIMIT) * EXTRA_RATE;

    total = energy + SERVICE;

    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energy << endl;
    cout << "Service charge: " << SERVICE << endl;
    cout << "Total bill: " << total << endl;

    return 0;
}