#include <iostream>

using namespace std;


void rotateByoneLeft(int arr[], int n) {
	int i = 0;
	int temp = arr[0];
	if (n == 1) {
		return;
	}
	while (i < n-1) {
		swap(arr[i + 1], temp);
		i++;
	}
	arr[0] = temp;
}

int main() {
	int arr[] = { -1,-100,3,99 };
	const int n = *(&arr + 1) - arr;
	int k = 2;
	for (int i = 0; i < k; i++) {
		rotateByoneLeft(arr, n);
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

}