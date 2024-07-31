#include <iostream>
#include <map>
#include <vector>

using namespace std;


void InsertionSort(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		int j = i;
		while (j > 0 && arr[j-1] > arr[j]) {
			swap(arr[j], arr[j - 1]);
			j--;
		}
	}
}

int main() {
	string arr[] = { "J", "Q", "A", "10", "7" };
	map<string, int> card_values = {
		{"A", 1},
		{"2", 2},
		{"3", 3},
		{"4", 4},
		{"5", 5},
		{"6", 6},
		{"7", 7},
		{"8", 8},
		{"9", 9},
		{"10", 10},
		{"J", 11},
		{"Q", 12},
		{"K", 13}
	};

	vector<int> v;

	const int N = *(&arr + 1) - arr;

	for (int i = 0; i < N; i++) {
		v.push_back(card_values[arr[i]]);
	}

	InsertionSort(&v[0], N);

	for (int i = 0; i < N; i++) {
		if (v[i] == 13) {
			cout << "K" << " ";
		}
		else if (v[i] == 12) {
			cout << "Q" << " ";
		}
		else if (v[i] == 11) {
			cout << "J" << " ";
		}
		else if (v[i] == 1) {
			cout << "A" << " ";
		}
		else {
			cout << v[i] << " ";
		}

	}

}