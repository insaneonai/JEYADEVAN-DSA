#include <iostream>
#include <set>

using namespace std;

int main() {
	multiset <int> demo_multiset = {1,1};

	cout << "Multiset is a associative container which can take multiple elements with same key" << endl;

	cout << "Maximum elements that can be stored: " << demo_multiset.max_size() << endl;

	for (int i = 0; i < 5; i++) {
		demo_multiset.insert(i);
	}

	cout << "The size of multiset after insertion: " << demo_multiset.size() << endl;

	cout << "Using iterator to retrive elements." << endl;

	for (auto it = demo_multiset.begin(); it != demo_multiset.end(); it++) {
		cout << *it << endl;
	}

	demo_multiset.erase(1); // Remove all occurence of 1;

	demo_multiset.clear();

	demo_multiset.empty() ? cout << "The multiset is empty" : cout << "The multiset is not empty";
}