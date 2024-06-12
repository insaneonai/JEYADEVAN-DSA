#include <iostream>

using namespace std;

bool ispalindrome(int i, string x) {
	if (i > x.length() / 2) { return true; }

	if (x[i] != x[x.length() - i - 1]) { return false; }

	return ispalindrome(i + 1, x);
}

int main() {
	cout << ispalindrome(0, "A man, a plan, a canal: Panama");
}