#include <iostream>

using namespace std;

int main() {
	char x = 'A'-1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= (4 - i); j++) {
			cout << " ";
		}
		
		for (int j = 0; j < 2 * (i)+1; j++) {
			if (j > (2 * i + 1) / 2) {
				x--;
			}
			else {
				x++;
			}
			cout << x;
		}
		x = 'A'-1;
		cout << endl;
	}
}