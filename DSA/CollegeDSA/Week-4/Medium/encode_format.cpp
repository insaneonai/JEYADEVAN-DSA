#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string s = "3[a]2[bc]";
    stack<int> numStack;
    stack<string> strStack;
    int currno = 0;
    string currstr;

    for (char c : s) {
        if (isdigit(c)) {
            currno = currno * 10 + (c - '0');
        }
        else if (c == '[') {
            numStack.push(currno);
            strStack.push(currstr);
            currstr = "";
            currno = 0;
        }
        else if (c == ']') {
            int num = numStack.top(); numStack.pop();
            string prev = strStack.top(); strStack.pop();
            string temp;

            for (int i = 0; i < num; i++) {
                temp += currstr;
            }
            currstr = prev + temp;
        }
        else {
            currstr += c;
        }

    }
    cout << currstr; // Return the fully decoded string

}