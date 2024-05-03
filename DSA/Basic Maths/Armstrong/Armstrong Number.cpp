#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n = 153;
	int temp = n;
	int digits = int(log10(153) + 1);
	int sum = 0;
	cout << "The given number " << n << " is: ";
	while (n > 0) {
		sum += pow(n % 10, digits);
		n /= 10;
	}
	(sum == temp) ? cout << "Armstrong" : cout << "Not Armstrong";
}