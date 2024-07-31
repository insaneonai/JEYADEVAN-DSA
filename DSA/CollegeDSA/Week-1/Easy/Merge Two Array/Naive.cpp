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

void MergeTwoArray(int arr1[], int arr2[], int arr3[], int n1, int n2) {

	int i = 0; int j = 0; int k = 0;

	while (i <= n1 && j <= n2) {
		if (arr1[i] <= arr2[j]) {
			arr3[k] = arr1[i];
			i++;
			k++;
		}
		else {
			arr3[k] = arr2[j];
			k++;
			j++;
		}
	}

	while (i <= n1) {
		arr3[k] = arr1[i];
		k++;
		i++;
	}

	while (j <= n2) {
		arr3[k] = arr2[j];
		j++;
		k++;
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
	int arr1[] = { 1,7,8,9,787,5 };
	int arr2[] = { 1,7,45 };

	const int N1 = *(&arr1 + 1) - arr1;
	const int N2 = *(&arr2 + 1) - arr2;

	int *arr3 = new int[N1 + N2];

	MergeSort(arr1, 0, N1-1);
	MergeSort(arr2, 0, N2 - 1);

	MergeTwoArray(arr1, arr2, arr3, N1-1, N2-1);

	for (int i = 0; i < N1 + N2; i++) {
		cout << arr3[i] << " ";
	}


}