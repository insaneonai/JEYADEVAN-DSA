#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<string, int> demo_unordered_map; // Initialization of unordered_map

	demo_unordered_map["jeydev"] = 10; // Defining key-value pairs;
	demo_unordered_map["maroon5"] = 110;


	// Accessing via key jeydev
	cout << "Accessing elements at key = jeydev: " << demo_unordered_map["jeydev"] << endl;

	cout << "Bucket number of " << demo_unordered_map.begin()->first << " is: " << demo_unordered_map.bucket(demo_unordered_map.begin()->first) << endl;

	cout << "Number of elements in bucket number 2 : " << demo_unordered_map.bucket_size(2) << endl;

	cout << "Total number of kv pairs : " << demo_unordered_map.bucket_count() << endl;

	// Accessing all kv pairs of unorderd_map
	for (auto it = demo_unordered_map.begin(); it != demo_unordered_map.end(); it++) {
		cout << "Key: " << it->first << " Value: " << it->second << endl;
	}
}