#include <iostream>

using namespace std;

int main() {
	for (int i = 5; i > 0; i--) {
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		for (int j = 0; j < (-2 * (i - 5)) + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << " ";
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * (5 - i)) - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
