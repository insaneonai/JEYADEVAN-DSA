#include <iostream>

using namespace std;

int main() {
	long int x = 121, reverse = 0, temp = x;
    while (x != 0) {
        reverse = (reverse * 10) + (x % 10);
        x /= 10;
    }
    (temp == reverse && temp >= 0) ? cout << temp << " is " << "Palindrome" : cout << temp << " is not a " << "Palindrome";
}