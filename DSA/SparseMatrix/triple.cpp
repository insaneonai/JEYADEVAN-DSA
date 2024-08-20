#include <iostream>
#include <vector>

using namespace std;


class tripple {
public:
	int row;
	int col;
	int value;
};

int main() {
	int x[2][2] = { {1,0}, {0,1} };
	vector<tripple> v;
	

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (x[i][j]) {
				tripple t;
				t.row = i;
				t.col = j;
				t.value = 1;
				v.push_back(t);
			}
		}
	}
}