#include <iostream>

using namespace std;

int main() {
	int arr[] = {1,1,2,2,3,3,3,4,4,4 };  // assusmes all values are positive.
	const int N = sizeof(arr) / sizeof(arr[0]);

	cout << "Frequency of array ";

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] > N){
			arr[i] = 0;
		}
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] % (N + 1) > 0){
			arr[(arr[i] % (N + 1)) - 1] += N + 1;   // Same values leave same remainder when divided by N+1;
												  // For every same value encountered add n+1 to the value first represents the Hash.
												// i.e index = (arr[i]%n+1)-1
		}
	}

	for (int i = 0; i < N; i++) {
		cout << endl << " Frequency is " << arr[i] / (N + 1);
	}
}