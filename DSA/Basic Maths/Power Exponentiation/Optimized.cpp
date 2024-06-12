#include <iostream>

// eg: 2^7 => 2*2^6 => 2*(2^2)^3 => 2*4*4^2 => 2*4*(4^2)^1 => 2*4*16 => 128

using namespace std;

int main() {
	int x=2, n=7;  // eg: x = 2, n = 7
	int p = 1;
	while (n > 0) {
		if (n % 2 !=0) { // ODD
			p = p * x;
			n = n - 1;
		}

		if (n % 2 == 0) {
			x = x * x;
			n = n / 2;
		}
	}
	cout << p;
}