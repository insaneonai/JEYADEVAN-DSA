#include <iostream>
#include <vector>

using namespace std;

void Merge(int arr[], int low, int mid, int high) {
	vector<int> temp;

	int left = low;
	int right = mid + 1;

	while (left <= mid && right <= high) {
		if (arr[left] <= arr[right]) {
			temp.push_back(arr[left]);
			left++;
		}
		else {
			temp.push_back(arr[right]);
			right++;
		}
	}

	while (left <= mid) {
		temp.push_back(arr[left]);
		left++;
	}
	
	while (right <= high) {
		temp.push_back(arr[right]);
		right++;
	}

	for (int i = low; i <= high; i++) {
		arr[i] = temp[i - low];
	}
}

void MergeSort(int arr[], int low, int high) {
	if (low >= high) {
		return;
	}
	int mid = (low + high) / 2;

	MergeSort(arr, low, mid);
	MergeSort(arr, mid + 1, high);
	Merge(arr, low, mid, high);
}

int main() {
	int arr[] = { 1,5,7,8,9,2,4,5,6 };
	const int N = sizeof(arr) / sizeof(arr[0]);
	MergeSort(arr, 0, N - 1);
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}