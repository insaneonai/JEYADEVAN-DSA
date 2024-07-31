#include <iostream>
#include <map>

using namespace std;

int main() {
	int arr[] = { 55,44,55,88,7 };
	map<int, int> hashmap;

	const int N = sizeof(arr) / sizeof(arr[0]);

	int count = 0;

	for (int i = 0; i < N; i++) {
		if (hashmap.find(arr[i]) != hashmap.end()) {
			hashmap[arr[i]]++;
		}
		else {
			hashmap[arr[i]] = 1;
		}
	}

	for (int i = 0; i < N; i++) {
		if (hashmap[arr[i]] == 1) {
			count++;
		}
	}



	cout << "Number of Unique items is: " << count;
	

}