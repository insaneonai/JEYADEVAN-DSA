#include <iostream>

using namespace std;


int main() {
	int arr[] = { 1,1,22,33,4,5,7 };

	int N = *(&arr + 1) - arr;

	int tosearch = 1;

	int count = 0;

	for (int i = 0; i < N; i++) {
		if (arr[i] == tosearch) {
			count++;
		}
	}

	cout << "Number of times " << tosearch << " occured is " << count;


}