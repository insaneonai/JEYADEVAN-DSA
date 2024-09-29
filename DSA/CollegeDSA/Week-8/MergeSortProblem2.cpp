/*
Use merge Sort to sort a stack of book prices in a library’s database, where each price is stored in the
stack.
*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void Merge(int arr[], int low, int mid, int high) {
	vector<int> temp; // {3, 5, 77} // sorted

	int left = low; // {l 77 m}, {3, 5, rh}  {3, 5,77}
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

void MergeSort(int bookPrice[], int low, int high) {
	if (low >= high) {
		return;
	}

	int mid = (low + high) / 2;

	MergeSort(bookPrice, low, mid);
	MergeSort(bookPrice, mid + 1, high);

	Merge(bookPrice, low, mid, high);
}

int main() {
	stack<int> bookPrice;

	// Book prices;
	bookPrice.push(79);
	bookPrice.push(99);
	bookPrice.push(1024);
	bookPrice.push(698);
	bookPrice.push(744);

	int N = bookPrice.size();

	int* arr= new int[N];

	int i = 0;

	while (!bookPrice.empty()) {
		arr[i] = bookPrice.top();
		bookPrice.pop();
		i++;
	}

	MergeSort(arr, 0, N-1);

	for (int i = 0; i < N; i++) {
		bookPrice.push(arr[i]);
	}

	while (!bookPrice.empty()) {
		cout << bookPrice.top() << " ";
		bookPrice.pop();
	}

}