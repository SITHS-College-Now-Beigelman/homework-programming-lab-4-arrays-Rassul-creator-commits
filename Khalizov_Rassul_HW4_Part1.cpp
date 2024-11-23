// Khalizov Rassul
// Lab 9, Part 1
// November 22, 2024

#include<iostream>

using namespace std;

void filterEvens(int myArray[], int size) { // makes a function called filerEvents 
    cout << "Even numbers in the array are: ";
    for (int i = 0; i < size; i++) { // goes through each number in the array
        if (myArray[i] % 2 == 0) { // If the number is divisible by two, it is even. 
            cout << myArray[i] << " "; // outputs the number that is even and makes a space 
        }
    }
    cout << endl;
}

int main() {
    const int SIZE = 8; // makes the array have 8 components 
    int myArray[SIZE]; 

    cout << "Enter 8 integers: "; // allows the user to input 8 integers 
    for (int i = 0; i < SIZE; i++) {
        cin >> myArray[i];
    }

    filterEvens(myArray, SIZE); // goes to the function filterEvens

    /*
    Enter 8 integers: 1 2 3 4 5 6 7 8
    Even numbers in the array are: 2 4 6 8
    */

    return 0;
}
