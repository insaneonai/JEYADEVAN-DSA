#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int arr[] = {3,3,3,3,5,5,5,2,2,7};
    int const N = *(&arr + 1) - arr;
    map<int, int> cnt;
    for (int i = 0; i < N; i++) {
        cnt[arr[i]]++;
    }

    vector<int> frequencies;
    for (auto&it : cnt) frequencies.push_back(it.second);
    sort(frequencies.begin(), frequencies.end());

    int ans = 0, removed = 0, half = N / 2, i = frequencies.size() - 1;

    while (removed < half) {
        ans += 1;
        removed += frequencies[i--];
    }



    cout << ans;
}