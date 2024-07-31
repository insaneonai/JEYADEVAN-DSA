// Given a Sorted array remove duplicates inplace preserve order.


#include <iostream>

using namespace std;

int removeDuplicates(int arr[], int n) {
	int i = 0;
	for (int j = 1; j < n; j++) {
		if (arr[i] != arr[j]) {
			i++;
			arr[i] = arr[j];
		}
	}
	return i + 1;
}

int main() {
	int arr[] = { 1,2,2,3,3,4,7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int r = removeDuplicates(arr, n);

	for (int i = 0; i < r; i++) {
		cout << arr[i];
	}


}