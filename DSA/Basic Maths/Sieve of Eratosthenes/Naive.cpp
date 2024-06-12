// The Problem is to display all prime numbers in range of N.

// Naive approach it to loop till N and find prime with rootn complexity T.C = O(N*rootN)


#include <iostream>

using namespace std;

bool isPrime(int n) {   // O(rootN)
	int count = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			count++;
			if (n / i != i) {
				count++;
			}
		}
	}
	if (count == 2) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int N = 10;
		for (int i = 2; i < 10; i++) {
			if (isPrime(i)) {
				cout << i << " ";
			}
	}
}