#include <iostream>

using namespace std;

int main() {
	int n = 234, reverse=0;
	cout << "The reverse of " << n;
	while (n != 0) {
		reverse = (reverse * 10) + (n % 10);
		n /= 10;
	}

	cout << " is " << reverse;
}
