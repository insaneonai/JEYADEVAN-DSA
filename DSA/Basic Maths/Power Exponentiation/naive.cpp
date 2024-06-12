#include <iostream>

using namespace std;

int main() {
	int x, n, p=1;
	cout << "Please enter Base: ";
	cin >> x;
	cout << "Please enter Exponent: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		p = p * x;
	}

	cout << "Value is: " << p;
}