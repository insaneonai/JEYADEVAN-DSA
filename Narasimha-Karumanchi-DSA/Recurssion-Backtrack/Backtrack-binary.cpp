#include <iostream>

using namespace std;

int arra[5] = { 0 };

void binary(int n) {
	if (n < 1) {
		for (int i = 0; i < 5; i++) {
			cout << arra[i];
		}
		cout << endl;
	}
	else {
		arra[n - 1] = 0;
		binary(n - 1);
		arra[n - 1] = 1;
		binary(n - 1);
	}
}

int main() {
	binary(5);
}