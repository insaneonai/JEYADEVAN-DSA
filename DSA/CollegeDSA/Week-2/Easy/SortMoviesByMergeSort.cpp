#include <iostream>
#include <vector>


using namespace std;


void Merge(int arr[], int low, int mid, int high) {
	vector<int> v;


	int left = low;
	int right = mid + 1;


	while (left <= mid && right <= high) {
		if (arr[left] <= arr[right]) {
			v.push_back(arr[left]);
			left++;
		}
		else {
			v.push_back(arr[right]);
			right++;
		}
	}

	while (left <= mid) {
		v.push_back(arr[left]);
		left++;
	}

	while (right <= high) {
		v.push_back(arr[right]);
		right++;
	}

	for (int i = low; i <=high; i++) {
		arr[i] = v[i - low];
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
	int arr[] = { 1,77,8,9,44 };
	
	const int N = *(&arr + 1) - arr;

	MergeSort(arr, 0,N-1);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}