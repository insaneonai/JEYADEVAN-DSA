/*
Hashing by naive definition refers to precomputation bu which we reduce access time.

In this .cpp file we see how to perform simple hashing to create a frequecy array.

*/

#include <iostream>

using namespace std;

int main() {
    const int MAX = 50;
    int ar[12] = { 0 };
    int frequency_array[MAX] = { 0 };

    // Get input array.
    for (int i = 0; i < 12; i++) {
        cout << "Please enter array value " << i << " :";
        cin >> ar[i];
        cout << endl;
    }

    // Calculate frequencies.
    for (int i = 0; i < 12; i++) {
        frequency_array[ar[i]]++;
    }

    cout << "Enter the Number to Count in array: ";
    int find;
    cin >> find;

    if (find >= 0 && find < MAX) {
        cout << "Frequency of " << find << " is: " << frequency_array[find] << endl;
    }
    else {
        cout << "Input number out of range." << endl;
    }

    return 0;
}
