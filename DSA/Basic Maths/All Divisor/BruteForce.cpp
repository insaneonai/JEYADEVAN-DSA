// Complexity of the code is O(N)

#include <iostream>
using namespace std;

int main() {
	int n = 12, count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	cout << "Number of Divisors of " << n << " is " << count;
}