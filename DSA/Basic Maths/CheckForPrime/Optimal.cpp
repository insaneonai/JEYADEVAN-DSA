// Complexity of Code is O(root(N))

#include <iostream>

using namespace std;

int main() {
	int n = 11, prime=0;

	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			prime++;
			if (i != n / i) {
				prime++;
			}
		}
	}
	(prime == 2) ? cout << n << " is " << "Prime" : cout << n << " is not a " << "Prime";
}