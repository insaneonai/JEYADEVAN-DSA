#include <unordered_set>
#include <iostream>

using namespace std;

int main() {
	unordered_set<int> ints;  // Declared a unordered set

	for (int i = 1; i <= 5; i++) {  // insertion into an unordered set.
		ints.insert(i);
	}

	cout << "Elements of the unordered set are: ";

	for (auto it = ints.begin(); it != ints.end(); it++) {  // Using iterator begin and end to list all elements.
		cout << *it;
	}
	cout << endl;

	cout << "10 found is " << (ints.find(10) != ints.end()) << endl; // find if 10 exist in uordered set.
	cout << "5 found is " << ints.count(5) << endl; // find if 5 exist in uordered set using count.
	cout << "Size of ints unordered set is " << ints.size() << endl; // find size of uordered set.

	for (auto it = ints.begin(); it != ints.end(); it++) {  // Use iterator check if value is two then erase it.
		if (*it == 2) {
			ints.erase(it);
			cout << "Size after erasing 2nd element: " << ints.size() << endl;
			break;
		}
	}
	ints.clear(); // clear all contents of unorederd list.
	cout << "After clearing size is: " << ints.size() << endl;

	if (ints.empty()) {  // check empty!
		cout << "unordered set is empty!";
	}
}