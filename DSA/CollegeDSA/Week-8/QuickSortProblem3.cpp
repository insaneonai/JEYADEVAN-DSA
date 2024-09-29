#include <iostream>

using namespace std;

class Myobj {
public:
	int priority;
};


int partiton(Myobj arr[], int low, int high) {
	Myobj pivot = arr[low];
	int storeindex = low + 1;
	for (int i = low + 1; i <= high; i++) {
		if (arr[i].priority < pivot.priority) {
			// comes before pivot;
			swap(arr[i], arr[storeindex]);
			storeindex++;
		}
	}
	swap(arr[low], arr[storeindex - 1]);
	return storeindex - 1;
}


void quickSort(Myobj arr[], int low, int high) {
	if (low < high) {
		int pi = partiton(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main() {
	Myobj objs[6];

	int arr[] = { 1,7,88,77,44,5 };

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		objs[i].priority = arr[i];
	}

	quickSort(objs, 0, 5);

	for (int i = 0; i < 6; i++) {
		cout << objs[i].priority << " ";
	}

}