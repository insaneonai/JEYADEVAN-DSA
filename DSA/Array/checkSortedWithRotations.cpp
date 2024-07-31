#include <iostream>
#include <vector>;

using namespace std;


// Function to check if the array can be sorted in non-decreasing order by a single rotation
bool check(vector<int>& nums) {
        int rotations = 0;

        const int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                rotations += 1;
            }
        }

        if (nums[n - 1] > nums[0]) { // By rotation check for last and first arrangement too.
            rotations += 1;
        }

        if (rotations > 1) {
            return false;
        }

        return true;
 }

int main() {
    vector<int> v = { 3, 4, 5, 1, 2 };

    cout << check(v);
}
