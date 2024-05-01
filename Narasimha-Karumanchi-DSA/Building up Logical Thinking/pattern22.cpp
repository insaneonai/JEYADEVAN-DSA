#include <iostream>

using namespace std;

int main() {
	int n = 4;
	int l = 2 * n - 1;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {
			int top = i;
			int left = j;
			int bottom = l - top;
			int right = l - left;
			cout << 4-min(min(top, bottom), min(left, right));
		}
		cout << endl;
	}
}