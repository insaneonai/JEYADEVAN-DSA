#include <iostream>

using namespace std;
//Complexity of the Code is O(N)
void printsum(int i, int sum) {
	if (i < 1) {
		cout << sum << endl;
		return;
	}
	printsum(i - 1, sum + i);  // start from 5 decrement till 0, add i to sum for each recurssive call.
}

int main() {
	printsum(5,0);
}