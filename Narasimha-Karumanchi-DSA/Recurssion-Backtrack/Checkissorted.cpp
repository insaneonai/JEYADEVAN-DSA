#include <iostream>


int array[5] = {1,2,44,5};

int checkissorted(int n) {
	if (n == 1) {
		return 1;
	}
	if (array[n - 1] < array[n - 2]) { //Break recurssion if larger index value is less that lower value index
		return 0;
	}
	else {
		return checkissorted(n - 1); // else check sorting for the rest of the array.
	}
}

int main() { // this is main function...
	std::string res =  checkissorted(5) ? "It is sorted" : "It is not sorted";
	std::cout << res;
	return 0;
}