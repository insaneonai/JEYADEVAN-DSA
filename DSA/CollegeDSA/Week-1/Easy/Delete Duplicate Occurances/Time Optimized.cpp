#include <iostream>
#include <unordered_set>


using namespace std;


int main() {
	unordered_set<int> store;

	int arr[] = { 1,2,3,4,4,5,7,8 };

	const int N = *(&arr + 1) - arr;

	for (int i = 0; i < N; i++) {
		if (store.find(arr[i]) == store.end()) {
			store.insert(arr[i]);
		}
	}

	for (auto it = store.begin(); it != store.end(); it++) {
		cout << *it << " ";
	}

}