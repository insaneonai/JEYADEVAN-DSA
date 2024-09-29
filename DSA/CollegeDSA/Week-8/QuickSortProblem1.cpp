/*
Write a program for the Student Marks Sorting using quick sort and array. Get the internal and external
mark and find out the final exam mark and then sort the final exam scores of students using Quick Sort to
rank them.
*/

#include <iostream>

using namespace std;

int partition(int total[], int low, int high) {
	int pivot = total[low];

	int storeindex = low+1;

	for (int i = low + 1; i <= high; i++) {
		if (total[i] < pivot) {
			swap(total[i], total[storeindex]);
			storeindex++;
		}
	}
	swap(total[low], total[storeindex - 1]);
	return storeindex - 1;
}


void quickSort(int total[], int low, int high) {
	if (low < high) {
		int pi = partition(total, low, high);
		quickSort(total, low, pi - 1);
		quickSort(total, pi + 1, high);
	}
}


int main() {

	const int N = 5;

	int internalMarks[] = { 38,31,35,36,32 };
	int externalMarks[] = { 57,58,49,50,52 };
	int total[N];

	for (int i = 0; i < N; i++) {
		total[i] = internalMarks[i] + externalMarks[i];
	}

	quickSort(total, 0, N -1);

	for (int i = 0; i < N; i++) {
		cout << total[i] << " ";
	}

}