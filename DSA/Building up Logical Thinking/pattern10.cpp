#include <iostream>

using namespace std;

int main() {
	int n = 10;
	for (int i = 0; i < n; i++) {
		if (i <= n/2) {
			for (int j = 0; j < i; j++) {
				cout << "*";
			}
		}
		else {
			for (int j = 0; j < n-i; j++) {
				cout << "*";
			}
		}
		cout << endl;
	}
}