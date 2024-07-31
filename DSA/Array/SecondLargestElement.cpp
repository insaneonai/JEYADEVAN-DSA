#include <iostream>

using namespace std;

int secondLargest(int nums[], int n) {
	int first = 0, second = -1;

	if (n == 1) {
		return -1;
	}

	for (int i = 0; i < n; i++) {
		if (nums[i] > first) {
			second = first;
			first = nums[i];
		}
		else if (nums[i] <= first) {
			if (nums[i] > second) {
				second = nums[i];
			}
		}
	}

	if (first == second) {
		return -1;
	}

	return second;
}


int main() {
	int nums[] = { 19398 };

	cout << secondLargest(nums, sizeof(nums) / sizeof(nums[0]));

}