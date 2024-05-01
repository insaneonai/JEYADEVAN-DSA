#include <iostream>

using namespace std;

int main() {
	int space = 2 * (4 - 1);
	for (int i = 1; i <=4; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j;
		}

		for (int k = 1; k <=space; k++) {
			cout << " ";
		}

		for (int j = i; j >= 1; j--) {
			cout << j;
		}
		space -= 2;
		cout << endl;
	}
}