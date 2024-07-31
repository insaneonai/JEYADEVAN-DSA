#include <iostream>
#include <algorithm>

using namespace std;




int main() {
	int arr[] = { 77,88,88,88,99,7,8 };

	int count = 0;

	const int N = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		while (i < N-1 && arr[i] == arr[i + 1]) {
			i++;
		}
		count++;
	}

	cout << "Unique elements count: " << count;


}