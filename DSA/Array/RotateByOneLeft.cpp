#include <iostream>

using namespace std;


void rotateByoneLeft(int arr[], int n) {
	int i = 0;
	int temp = arr[0];
	if (n == 1) {
		return;
	}
	while (i < n) {
		arr[i] = arr[i + 1];
		i++;
	}
	arr[n - 1] = temp;
}

int main() {
	int arr[] = { 1,2,3,4,5,6,7 };
	const int n = *(&arr + 1) - arr;
	int k = 3;
	for (int i = 1; i < k; i++) {
		rotateByoneLeft(arr, n);
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

}