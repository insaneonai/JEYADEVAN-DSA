#include <unordered_set>
#include <iostream>

using namespace std;

int main() {
	unordered_multiset<int> demo_unordered_multiset;

	for (int i = 0; i < 5; i++) {
		demo_unordered_multiset.insert(i);
		demo_unordered_multiset.insert(i);
	}

	cout << "Unordered multiset is an unorderd associative container that means\nit is a collection of objects which can be accessed in O(1) complexity implemented via hash\nUnordered multiset can hold multiple values of same key" << endl <<endl;

	for (auto it = demo_unordered_multiset.begin(); it != demo_unordered_multiset.end(); it++) {
		cout << *it;
	}

	cout << endl << "Frequency of elements: " << endl;

	for (auto it = demo_unordered_multiset.begin(); it != demo_unordered_multiset.end(); it++) {
		cout << "Frequency of " << *it << " is " << demo_unordered_multiset.count(*it) << endl;
	}

	auto erange_it = demo_unordered_multiset.equal_range(3);

	if (erange_it.first != erange_it.second) {
		cout << "3 occured atleast once";
	}
}