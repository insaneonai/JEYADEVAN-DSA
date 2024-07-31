#include <iostream>

using namespace std;

void static selectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int mini = i;
		for (int j = i; j <= n - 1; j++) {
			if (arr[j] < arr[mini]) {
				mini = j;
			}
		}
		swap(arr[i], arr[mini]);
	}
}


int main() {
	int arr[] = { 1,7,8,5 };
	selectionSort(arr, 4);
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << " ";
	}

}