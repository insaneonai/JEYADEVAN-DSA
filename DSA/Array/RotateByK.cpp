#include <iostream>

using namespace std;

void rotateByKRight(int arr[], int n, int k) {
	if (n == 0) {
		return;
	}
	k = k % n;
	if (k > n) {
		return;
	}
	int* temp = new int[k];
	for (int i = n - k; i < n; i++) {
		temp[i - (n - k)] = arr[i];
	}
	for (int i = n - k - 1; i >= 0; i--) {
		arr[i + k] = arr[i];
	}
	for (int i = 0; i < k; i++) {
		arr[i] = temp[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	delete[] temp;
}

void rotateByKLeft(int arr[], int n, int k) {
	if (n == 0) {
		return;
	}
	k = k % n;
	if (k > n) {
		return;
	}
	int* temp = new int[k];
	for (int i = 0; i < k; i++) {
		temp[i] = arr[i];
	}
	for (int i = 0; i < n - k; i++) {
		arr[i] = arr[i + k];
	}
	for (int i = n - k; i < n; i++) {
		arr[i] = temp[i - n + k];
	}
}


int main() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int k = 2;
	rotateByKLeft(arr, sizeof(arr)/sizeof(arr[0]), k);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << " ";
	}
}