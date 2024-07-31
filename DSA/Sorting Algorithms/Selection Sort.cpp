#include <iostream>

using namespace std;

/*Psuedo Code :
iterate from 0 to n-2;
set mini to i;
iterate from i to n-1;
check for mini value and update mini;
swap value at mini and i.
*/

void selectionSort(int arr[], int N) {
	for (int i = 0; i < N - 1; i++) {
		int mini = i;
		for (int j = i; j <= N - 1; j++) {
			if (arr[j] < arr[mini]) {
				mini = j;
			}
		}
		int temp = arr[mini];
		arr[mini] = arr[i];
		arr[i] = temp;
	}
}

int main() {
	int arr[] = { 1,5,7,8,9,45,6,5 };
	const int N = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, N);
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}