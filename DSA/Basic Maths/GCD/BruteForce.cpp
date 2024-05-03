#include <iostream>

using namespace std;
// Code Complexity: O(min(n1, n2))
int main() {
	int n1 = 9, n2 = 12, gcd = 1;

	if (n1 < n2) {
		for (int i = 1; i <= n1; i++) {
			if (n1 % i == 0 && n2 % i == 0) {
				gcd = i;
			}
		}
	}
	else {
		for (int i = 1; i <= n2; i++) {
			if (n1 % i == 0 && n2 % i == 0) {
				gcd = i;
			}
		}
	}
	cout << "GCD of " << n1 << " and " << n2 << " is " << gcd;
}