#include <iostream>

using namespace std;

bool isSorted(int arr[], int n) {

	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[i - 1]) {
			return false;
		}
	}
	return true;


}

int main() {
	int arr[] = { 1,2,7,3,5,6 };

	cout << isSorted(arr, sizeof(arr) / sizeof(arr[0]));

}