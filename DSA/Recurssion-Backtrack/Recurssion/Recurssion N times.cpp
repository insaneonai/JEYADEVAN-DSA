#include <iostream>

using namespace std;

void printn(int n) {
	if (n == 0) {
		return;
	}
	cout << n;
	printn(n - 1);
}

void printnrev(int i, int n) {
	if (i > n) return;
	cout << i;
	printnrev(i + 1, n);
}

int main() {
	printn(5);
	cout << endl;
	printnrev(1, 5);
}