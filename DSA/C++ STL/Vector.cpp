#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> v1;

	for (int i = 0; i <= 5; i++) {
		v1.push_back(i); // Append to vector v1;
	}
	//Accessing using indexing.

	cout << "The middle element is: " << v1[v1.size() / 2] << endl;

	// Accessing using iterator.
	cout << "Elements in vector v1: ";
	for (auto it = v1.begin(); it != v1.end(); it++) {
		cout << *it;
	}
	cout << endl << "Inserting at beginning: 0";
	v1.insert(v1.begin(), 0);
	cout<<endl << "Elements in vector v1: ";
	for (auto it = v1.begin(); it != v1.end(); it++) {
		cout << *it;
	}

	cout << endl << "Removing at beginning: 0";
	v1.erase(v1.begin());
	cout << endl << "Elements in vector v1: ";
	for (auto it = v1.begin(); it != v1.end(); it++) {
		cout << *it;
	}
}