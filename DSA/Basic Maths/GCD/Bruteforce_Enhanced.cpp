#include <iostream>

using namespace std;
// Code Complexity: O(min(n1, n2))  However Iteration is executed only once.
int main() {
	int n1 = 9, n2 = 12, gcd = 1;

    for (int i = min(n1, n2); i > 0; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
            break;
        }
    }
	cout << "GCD of " << n1 << " and " << n2 << " is " << gcd;
}