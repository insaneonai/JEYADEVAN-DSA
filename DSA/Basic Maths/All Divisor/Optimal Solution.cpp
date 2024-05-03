// We will use the property that for a non negative integer n if n is divisible by d, then it is divisible by n/d;
//Complexity O(root(N))
#include <iostream>
using namespace std;

int main() {
	int n = 12, r = sqrt(n), count=0;

	for (int i = 1; i <= r; i++) {
		if (n % i == 0) {
			count++;
			if (i != n / i) {
				count++;
			}
		}
	}

	cout << "Number of Divisors of " << n << " is " << count;
}