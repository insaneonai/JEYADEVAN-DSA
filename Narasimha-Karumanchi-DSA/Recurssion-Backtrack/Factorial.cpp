#include <iostream>

using namespace std;

long int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

void main() {   // This is main function rename before use...
	int n;
	cout << "Please enter a number";
	cin >> n;
	cout << factorial(n);
}