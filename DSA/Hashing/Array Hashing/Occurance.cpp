// Problem statement: Given an array, we have found the number of occurrences of each element in the array.

// Time Complexity: O(N)
// Auxiliary Space Complexity: O(N)

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<int, int> frequency;
	int arr[] = { 10,10,5,4,10,8,5,9 };
	
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
		frequency[arr[i]]++;
	}

	for (auto x : frequency) {
		cout << x.first << " : " << x.second << endl;
	}
}