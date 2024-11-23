// Khalizov Rassul
// November 22, 2024
// Lab 9, Part 2

#include <iostream>

using namespace std;

int main() {
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; // this is the list
    int totalCars = 0; // starts off the integers totalCars, maxCars, and totalSalesperson at 0 
    int maxCars = 0;
    int topSalesperson = 0;

    // Finds the total amount of cars sold as well as the greatest amount of cars sold
    for (int i = 0; i < 10; i++) {
        totalCars += cars[i];
        if (cars[i] > maxCars) {
            maxCars = cars[i];
            topSalesperson = i + 1; // Salesperson numbering starts at 1
        }
    }

    // Outputs results
    cout << "Total number of cars sold: " << totalCars << endl;
    cout << "Salesperson #" << topSalesperson << " sold the most cars." << endl;
    cout << "They sold " << maxCars << " cars." << endl;

    /*
    Total number of cars sold: 58
    Salesperson #5 sold the most cars.
    They sold 14 cars.
    */
    return 0;
}
