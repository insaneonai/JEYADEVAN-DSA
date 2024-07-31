#include <iostream>

using namespace std;


int main() {
	int arr[] = { 1,4,7,8,9,25,1 };

	int first = 0; int second = -1;

	const int N = *(&arr + 1) - arr;

	for (int i = 0; i < N; i++) {
		if (arr[i] > first) {
			second = first;
			first =i;
		}
		else if (arr[i] < first) {
			if (arr[i] > second) {
				second = i;
			}
		}
	}

	cout << "First Largest: " << arr[first] << " Second Largest: " << arr[second];

}