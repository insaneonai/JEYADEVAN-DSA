#include <iostream>
#include <algorithm>

using namespace std;


int main() {
	int arr[] = { 1,4,7,8,4,5,9 };
	const int N = *(&arr + 1) - arr;

	sort(arr, arr + N);

	cout << "The Second Largest Value is : " << arr[N - 2];

}