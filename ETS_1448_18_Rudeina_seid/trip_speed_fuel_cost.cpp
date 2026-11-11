/*INPUT:
   1. Trip distance in kilometers.
   2. Travel time in hours.
   3. Travel time in minutes.
   4. Fuel consumption in liters per 100 km.
   5. Fuel price per liter (birr)
   OUTPUT:
   1. Average speed (km/h).
   2. Fuel used (liters).
   3. Fuel cost (birr).
   PROCESS:
   1. Start.
   2. Declare variables for distance, hours,
      minutes, total time, average speed,
      fuel consumption, fuel used, fuel price
      and fuel cost.
   3. Read the trip distance.
   4. Read travel time in hours and minutes.
   5. Read fuel consumption.
   6. Read fuel price per liter.
   7. Convert travel time into hours:
      Total time = hours + (minutes / 60.0).
   8. Calculate average speed:
      Average speed = distance / total time.
   9. Calculate fuel used:
      Fuel used = (distance * fuel consumption) / 100.
   10. Calculate fuel cost:
       Fuel cost = fuel used * fuel price.
   11. Display average speed, fuel used and
       fuel cost to two decimal places.
   12. Stop.
   */


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance, fuelConsumption, fuelPrice;
    double totalTime, averageSpeed, fuelUsed, fuelCost;

    int hours, minutes;

    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel hours: ";
    cin >> hours;

    cout << "Enter travel minutes: ";
    cin >> minutes;

    cout << "Enter fuel consumption (L/100km): ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter: ";
    cin >> fuelPrice;

    totalTime = hours + (minutes / 60.0);

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelConsumption) / 100.0;

    fuelCost = fuelUsed * fuelPrice;

    cout << fixed << setprecision(2);

    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " Birr" << endl;

    return 0;
}
