#include <iostream>

using namespace std;

void InsertionSort(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}

void RecurssiveInsertionSort(int arr[], int N, int i) {
	if (N == i) { return; }
	int j = i;
	while (j > 0 && arr[j - 1] > arr[j]) {
		int temp = arr[j];
		arr[j] = arr[j - 1];
		arr[j - 1] = temp;
		j--;
	}
	RecurssiveInsertionSort(arr, N, ++i);

}

int main() {
	int arr[] = { 1,5,7,8,9,4,2 };
	const int N = sizeof(arr) / sizeof(arr[0]);
	RecurssiveInsertionSort(arr, N, 0);
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}