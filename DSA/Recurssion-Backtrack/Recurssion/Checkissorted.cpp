#include <iostream>


int array[5] = {1,7,4,5,6};

int checkissorted(int n) {
	if (n == 1) {
		return 1;
	}

	if (array[n - 1] < array[n - 2]) {
		return 0;
	}

	else {
		checkissorted(n - 1);
	}
}

int main() { // this is main function...
	std::string res =  checkissorted(5) ? "It is sorted" : "It is not sorted";
	std::cout << res;
	return 0;
}