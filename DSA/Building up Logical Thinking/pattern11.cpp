#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i <= 5; i++) {
		int d = 1;
		if (i % 2) {
			d = 0;
		}
		for (int j = 1; j <= i; j++) {
			if (d == 1) {
				cout << "0";
				d = 0;
			}
			else {
				cout << "1";
				d = 1;
			}
		}
		cout << endl;
	}

}