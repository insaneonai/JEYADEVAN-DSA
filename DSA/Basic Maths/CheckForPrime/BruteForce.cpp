// Code Complexity O(N);

#include <iostream>

using namespace std;

int main() {
	int n = 11, flag=0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			flag = 1;
			break;
		}
	}

	(flag == 1) ? cout << n << " Not a Prime" : cout << n << " is a Prime";
}