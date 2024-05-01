#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int> demo_map; // Initialization of unordered_map

	demo_map["jeydev"] = 10; // Defining key-value pairs;
	demo_map["maroon5"] = 110;


	// Accessing via key jeydev
	cout << "Accessing elements at key = jeydev: " << demo_map["jeydev"] << endl;

	cout << "Total number of kv pairs : " << demo_map.size() << endl;


	cout << "Erasing key jeydev" << endl;

	demo_map.erase("jeydev");
	// Accessing all kv pairs of unorderd_map
	for (auto it = demo_map.begin(); it != demo_map.end(); it++) {
		cout << "Key: " << it->first << " Value: " << it->second << endl;
	}

	cout << "removing all pairs: ";
	demo_map.clear();
	cout << "Total number of kv pairs : " << demo_map.size() << endl;
}