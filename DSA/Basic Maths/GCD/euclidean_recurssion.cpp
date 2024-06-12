#include <iostream>

using namespace std;

int gcd(int n1, int n2) {
	if (n2 != 0) {
		return gcd(n2, n1 % n2);
	}
	return n1;
}

int main() {
	cout << gcd(7, 10);
}