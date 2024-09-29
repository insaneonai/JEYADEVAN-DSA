#include <iostream>

using namespace std;

/*
Bubble Sort;

iterate from i = n - 1; to 0; ignore last element;
iterate from j = 0 to i - 1;
compare arr[j] > arr[j+1] then swap.

Time Complexity avg and worst case O(n^2), best case O(N)
*/


void BubbleSort(int arr[], int N) {
	for (int i = N - 1; i >= 0; i--) {
		int swap = 0;
		for (int j = 1; j <= i; j++) {
			if (arr[j - 1] > arr[j]){
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
				swap = 1;
			}
		}
		if (!swap) {
			return;
		}
	}
}

void recurssiveBubbleSort(int arr[], int N) {
	if (N == 1) {
		return;
	}


	for (int j = 0; j <= N - 2; j++) {
		if (arr[j] > arr[j+1]) {
			int temp = arr[j + 1];
			arr[j + 1] = arr[j];
			arr[j] = temp;
		}
	}

	recurssiveBubbleSort(arr, N - 1);
}

int main() {
	int arr[] = { 1,2,37,405,57,6};
	const int N = sizeof(arr) / sizeof(arr[0]);
	recurssiveBubbleSort(arr, N);
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}