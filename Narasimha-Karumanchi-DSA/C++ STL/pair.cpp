#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<pair<int, int>> vec;
	pair<int, int> p;
	for (int i = 0; i <= 5; i++) {
		p = { i, i + 1 };
		vec.push_back(p);
	}

	for (auto it = vec.begin(); it != vec.end(); it++) {
		cout << "First : " << (*it).first << " " << "Second: " << (*it).second << endl;
	}
}