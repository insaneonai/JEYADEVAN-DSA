#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n = 1245678;
	cout << "The number of digits in " << n << " is " << int(log10(n)) + 1;
}