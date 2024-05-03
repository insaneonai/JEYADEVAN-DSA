#include <iostream>

using namespace std;

void towerofhanoi(int disks, int source, int destination, int auxiliary) {
	if (disks == 1) {
		cout << "Moving disk 1 from peg " << source << " to peg " << destination << endl;
		return;
	}

	towerofhanoi(disks - 1, source, auxiliary, destination);

	cout << "Moving disk " << disks << " from peg " << source << " to peg " << destination << endl;

	towerofhanoi(disks - 1, auxiliary, destination, source);
}

int main() {
	towerofhanoi(5, 1, 3, 2);
	return 0;
}