#include <iostream>

using namespace std;

int main() {
	int n1 = 50, n2 = 70, gcd=0;
	cout << "GCD of " << n1 << " " << n2;
	while (n1 > 0 && n2 > 0) {
		if (n1 > n2) {
			n1 = n1 % n2;
		}
		else {
			n2 = n2 % n1;
		}

		if (n1 == 0) {
			gcd = n2;
		}
		gcd = n1;
	}
	cout << " is " << gcd;
}