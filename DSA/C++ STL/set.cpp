#include <iostream>
#include <set>

using namespace std;

int main() {
	set<int> set_example;

	for (int i = 0; i < 5; i++) {
		set_example.insert(i);
	}
	cout << "Elements of Set are: ";
	for (auto it = set_example.begin(); it != set_example.end(); it++) {
		cout << *it;
	}

	if (set_example.count(2)){
		cout << endl << "2 Exist in set_example";
;	}

	set_example.erase(2);
	cout << endl << "Removed 2";

	cout << endl << "Size after removal" << set_example.size();

	set_example.clear();

	if (set_example.empty()) {
		cout << endl << "set_example is empty";
	}


}