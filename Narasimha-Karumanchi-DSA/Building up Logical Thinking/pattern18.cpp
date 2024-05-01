#include <iostream>

using namespace std;

int main() {
	char x = 'E';

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			cout << (char)(x+j);
		}
		cout << endl;
		x--;
	}
}