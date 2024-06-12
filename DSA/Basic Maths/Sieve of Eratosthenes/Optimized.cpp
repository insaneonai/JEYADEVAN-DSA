#include <iostream>

using namespace std;

// With Sieve of Eratosthenes we can divide the problem into 2 subproblems that is precomputing and marking all Primes in given range,
// Compute all prime in given range in O(N*1) Time Complexity.
const int N = 30;
int arr[(N + 1)] = { 0 };

void precompute() {
	for (int i = 0; i * i <= N; i++) {
		if (arr[i] == 1) {
			for (int j = i * i; j <= N; j += i) {
				arr[j] = 0;
			}
		}

	}
}

int main() {
	for (int i = 2; i <= N; i++) {
		arr[i] = 1;
	}
	precompute();
	for (int i = 2; i <= N; i++) {
		if (arr[i] == 1) {
			cout << i << " ";
		}
	}
}