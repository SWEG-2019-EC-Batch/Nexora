#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double distance, fuelRate, pricePerLiter;
    double time, speed, fuelUsed, fuelCost;
    int hours, minutes;

    
    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter hours : ";
    cin >> hours ;
cout << "Enter minutes: ";
cin >> minutes;
    cout << "Enter fuel consumption rate: ";
    cin >> fuelRate;

    cout << "Enter price per liter: ";
    cin >> pricePerLiter;

    time = hours + minutes / 60.0;

    speed = distance / time;

    fuelUsed = distance * fuelRate / 100.0;

    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);

    cout << "Average speed: " << speed << " km/h" << endl;
    cout << "Fuel used: " << fuelUsed << " liters" << endl;
    cout << "Fuel cost: " << fuelCost << " birr" << endl;

    return 0;
}