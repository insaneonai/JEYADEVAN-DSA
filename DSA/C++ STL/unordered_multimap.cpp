#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	unordered_multimap<string, int> demo_unordered_multimap({
		{"jeydev", 1},
		{"jeydev", 2},
		{"x", 2}
	});



	for (auto it = demo_unordered_multimap.begin(); it != demo_unordered_multimap.end(); it++) {
		cout << "Key: " << it->first << " Value: " << it->second << endl;
	}

	demo_unordered_multimap.empty() ? cout << "multimap is empty" : cout << "Multimap is non empty & Size of multimap is " << demo_unordered_multimap.size();

	cout << "Number of elements with key jeydev is " << demo_unordered_multimap.count("jeydev") << "Bucket number is " << demo_unordered_multimap.bucket("jeydev") << endl;

	// when getting bucket if key is directly passed we get the last bucket.

	demo_unordered_multimap.erase("x");

	for (auto it = demo_unordered_multimap.begin(); it != demo_unordered_multimap.end(); it++) {
		cout << "Key: " << it->first << " Value: " << it->second << endl;
	}

	demo_unordered_multimap.clear();

	cout << "After clearing demo_unordered_multimap: " << demo_unordered_multimap.size();
}
