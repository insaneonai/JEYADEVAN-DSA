#include <iostream>

using namespace std;

void printarray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

void reversearray(int arr[], int n) {
	int* temp = new int[n];
	for (int i = 0; i < n; i++) {
		temp[i] = arr[n - i - 1];
	}
	printarray(temp, n);
    delete[] temp;
}

int main() {
	int n = 5;
	int arr[] = { 1,2,3,4,5 };
	reversearray(arr, n);
}