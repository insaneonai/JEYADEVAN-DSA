#include <iostream>

using namespace std;

int arra[5];

void stringk(int n, int k) {
	if (n < 1) {
		for (int i = 0; i < 5; i++) {
			cout << arra[i];
		}
		cout << endl;
	}

	else {
		for (int j = 0; j < k; j++) {
			arra[n - 1] = j;
			stringk(n - 1, k);
		}
	}
}

int main() {
	stringk(5, 2);
}