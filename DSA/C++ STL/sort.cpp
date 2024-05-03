#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[] = { 1,7,5,8,9,4,6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n);

	cout << "Sort in Ascending order" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl << "Sort in Descending order" << endl;
	sort(arr, arr + n, greater<int>());
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	

}