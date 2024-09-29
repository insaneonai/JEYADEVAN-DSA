#include <iostream>

using namespace std;


int partiton(int arr[], int low, int high) {
	int pivot = arr[low];
	int storeindex = low + 1;

	for (int i = low + 1; i < high; i++) {
		if (arr[i] < pivot) {
			// swap to storeindex;
			swap(arr[i], arr[storeindex]);
			storeindex++;
		}
	}
	swap(arr[low], arr[storeindex - 1]);
	return storeindex - 1;
}


void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partiton(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main() {
	int arr[] = { 1,7,88,77,44,5 };

	quickSort(arr, 0, 5);

	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}

}