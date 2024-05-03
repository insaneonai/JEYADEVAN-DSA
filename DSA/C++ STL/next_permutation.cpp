// Next permutation of std takes in 2 iterators [first, last) and rearange them such that it returns the next lexicographically greater permutation.

/*
Example: 
let [1,2,3] be a vector of elements there are 3! = 6 ways of rearanging.

[1,2,3]
[1,3,2]
[2,1,3]
[2,3,1]
[3,1,2]
[3,2,1]

here all the above are lexicographically increasing that is [1,2,3] < [1,3,2].
The above is true because comparing them element wise left-to-right 2<3 at index 1 and hence [1,2,3] < [1,3,2].
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vec({1,2,3});

	while (next_permutation(vec.begin(), vec.end())) {
		for (int it : vec) {
			cout << it << " ";
		}
		cout << endl;
	}


}