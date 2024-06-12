// Given a query with range L, R the goal is to find number of prime between this range.

#include <iostream>

using namespace std;

// getSieve is O(Nloglogn)

int* getSieve(const int N) {
	int* arr = new int[N] {0};
	for (int i = 2; i <= N; i++) {
		arr[i] = 1;
	}

	for (int i = 2; i <= sqrt(N); i++) {
		if (arr[i] == 1) {
			for (int j = i * i; j <= N; j += i) { // Get all factors of i starting from i^2 to N
				arr[j] = 0;
			}
		}
	}

	return arr;
}

int main() {
	int* arr = getSieve(10);
	int count = 0;
	for (int i = 0; i <= 10; i++) {
		if (arr[i] == 1) {
			count++;
			arr[i] = count;
		}
	}
	cout << "Count in range of 3, 8: " << arr[3] - arr[8];


}