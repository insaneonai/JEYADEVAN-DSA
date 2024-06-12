#include <iostream>
using namespace std;

void printarray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

void reversearray(int arr[], int n) {
	int p1 = 0, p2 = n - 1;
	while (p1 < p2) {
		arr[p1] = arr[p1] + arr[p2];
		arr[p2] = arr[p1] - arr[p2];
		arr[p1] = arr[p1] - arr[p2];
		p1++;
		p2--;
	}
	printarray(arr, n);
}

int main() {
	int arr[] = { 1,2,3,4,5 };
	reversearray(arr, 5);

}