#include <iostream>
#include <map>

using namespace std;

int main() {
	int arr[] = { 55,44,55,55,88,88,7 };

	const int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

	for (int i = 0; i < n; i++) {
		int j = 0;
		bool isunique = true;

		for (j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				isunique = false;
				break;
			}
		}
		if (isunique) {
			count++;
		}
	}

	cout << "Number of Unique items is: " << count;


}