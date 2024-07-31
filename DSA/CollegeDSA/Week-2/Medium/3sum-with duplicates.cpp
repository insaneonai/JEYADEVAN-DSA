#include <iostream>
#include <map>

using namespace std;


int main() {
	int arr[] = { 1,1,2,2,3,3,4,4,5,5};

	const int N = *(&arr + 1) - arr;

	int target = 8;

	int count = 0;

	map<int, int>mp;

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			int t = target - arr[i] - arr[j];

			count += mp[t];
		}
		mp[arr[i]]++;
	}

	cout << count;

}