#include <iostream>

using namespace std;

int main() {
	char x = 'A';
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < i; j++) {
			cout << (char)(x+j) << " ";
		}
		cout << endl;
	}
}