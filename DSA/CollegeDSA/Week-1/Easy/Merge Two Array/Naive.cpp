#include <iostream>
#include <vector>

using namespace std;


void Merge(char arr[], int low, int mid, int high) {
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

void MergeTwoArray(char arr1[], char arr2[], char arr3[], int n1, int n2) {

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


void MergeSort(char arr[], char low, char high) {
	if (low >= high) {
		return;
	}

	int mid = (low + high) / 2;

	MergeSort(arr, low, mid);
	MergeSort(arr, mid + 1, high);
	Merge(arr, low, mid, high);
}


int main() {
	char arr1[] = { 'a', 'p', 'l', 'e'};
	char arr2[] = { 'h', 'a', 'p', 'p'};

	const int N1 = *(&arr1 + 1) - arr1;
	const int N2 = *(&arr2 + 1) - arr2;

	char *arr3 = new char[N1 + N2];

	MergeSort(arr1, 0, N1-1);
	MergeSort(arr2, 0, N2 - 1);

	MergeTwoArray(arr1, arr2, arr3, N1-1, N2-1);

	for (int i = 0; i < N1 + N2; i++) {
		cout << arr3[i] << " ";
	}

}