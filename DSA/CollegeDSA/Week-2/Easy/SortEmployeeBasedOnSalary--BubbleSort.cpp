#include <iostream>
#include <map>
#include <vector>

using namespace std;

void BubbleSort(int arr[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	map<int, string> empsalary;
	empsalary[4] = "EmpA";
	empsalary[7] = "empB";
	empsalary[8] = "empC";
	empsalary[9] = "empD";
	empsalary[5] = "empE";

	vector<int> v;

	int N = 0;

	for (auto it = empsalary.begin(); it != empsalary.end(); it++) {
		v.push_back(it->first);
		N++;
	}

	int* arr = &v[0];

	BubbleSort(arr, N);

	cout << "Sorted By salry: " << endl;
	for (int i = 0; i < N; i++) {
		cout << empsalary[arr[i]] << " ";
	}


}