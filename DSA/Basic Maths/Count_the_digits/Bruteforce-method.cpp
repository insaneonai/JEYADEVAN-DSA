#include <iostream>

using namespace std;

int main() {
	int c = 0;
	int n = 1245648;
	cout << "The number of digits in " << n;
	while (n != 0) {
		n /= 10;
		c++;
	}
	cout << " is " << c;
}