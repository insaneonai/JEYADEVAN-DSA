#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[] = { 1,1,2,2,3,3,4,4,5,5 };

	const int N = *(&arr + 1) - arr;

	sort(arr, arr + N);

	int target = 8;

	int count = 0;

	int l, r;

	for (int i = 0; i < N; i++) {
		l = i + 1;
		r = N - 1;
		while (l < r) {
			if ((arr[i] + arr[l] + arr[r]) == target) {
				count++;
				break;
			}
			else if((arr[i] + arr[l] + arr[r]) < target){
				l++;
			}
			else {
				r--;
			}
		}
	}

	cout << count;
}