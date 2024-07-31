#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> arr = {1,2,3,3,3,4,4,7,8};

	const int N = arr.size();

	sort(arr.begin(), arr.end());

	auto newend = unique(arr.begin(), arr.end());

	arr.erase(newend, arr.end());


	for (auto it : arr) {
		cout << it << " ";
	}

}