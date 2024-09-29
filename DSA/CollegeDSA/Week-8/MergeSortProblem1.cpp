/*
Given an array of flight ticket prices from various airlines, sort them using Merge Sort for users to choose
the cheapest flight.
*/

#include <iostream>
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

void MergeSort(int arr[], int low, int high) {  // { 1,5,7,8,9,2,4,5,6 }, low = 0, N-1
	if (low >= high) { // Base Condition
		return;
	}
	int mid = (low + high) / 2;  // (0 + 8) // 2  4

	MergeSort(arr, low, mid);  ///  { 1,5,7,8,9,2,4,5,6 },  low =0, high = 4  {1,5,7,8,9}  // {1,5,7}  // {1,5} // 1,5
	MergeSort(arr, mid + 1, high); /// { 1,5,7,8,9,2,4,5,6 } // {2,4,5,6 }  // {5,6} // {5,6}  // 5,6
	Merge(arr, low, mid, high);
}

int main() {
	int flightTickePrice[] = { 7854,7876,5421,31213,45468,86746 };
	const int N = sizeof(flightTickePrice) / sizeof(flightTickePrice[0]);
	MergeSort(flightTickePrice, 0, N - 1);

	cout << "The minimum Flight ticket is: " << flightTickePrice[0];
}