#include <iostream>

using namespace std;

int main() {
	int frequency_array[256] = { 0 };
	string s;
	cout << "Please enter a string: ";
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		frequency_array[static_cast<int>(s[i])] += 1;
	}

	cout << "Count of letters";

	for (int i = 0; i < s.length(); i++) {
		cout << frequency_array[static_cast<int>(s[i])];
	}


}