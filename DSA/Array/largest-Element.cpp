#include <iostream>

using namespace std;

int largestElement(int arr[], int N) {
	int max = arr[0];
	for (int i = 1; i < N; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}


int main() {
	int nums[] = { 77,88,94,55,4 };

	cout << largestElement(nums, sizeof(nums)/sizeof(nums[0]));

}