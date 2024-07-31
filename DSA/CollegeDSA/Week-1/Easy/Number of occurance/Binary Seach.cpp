#include <iostream>

using namespace std;


int binarySearch(int arr[], int tofind, int size) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (tofind == arr[mid]) {
            return mid;
        }
        else if (tofind > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = { 1,2,2,4,5,7 };

    int N = *(&arr + 1) - arr;

    int idx = binarySearch(arr, 2, N);
    

    cout << idx;

}