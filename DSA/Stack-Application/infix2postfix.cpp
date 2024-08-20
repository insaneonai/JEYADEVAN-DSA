#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;


int main() {
	string infix = "(a+b)*(c^d)";

	unordered_map<char, int> precedence = { { '+',1}, {'-' , 1} , {'*', 2}, {'/', 2 }, {'^', 2}};

	stack<char> st;

	string postfix = "";

	for (int i = 0; i < infix.length(); i++) {
		if (isalpha(infix[i])) {
			postfix += infix[i];
		}
		else if (precedence.count(infix[i])) {
			while (!st.empty() && (precedence[infix[i]] < precedence[st.top()] || (precedence[infix[i]] == precedence[st.top()] && infix[i] != '^')) && precedence.count(st.top())) {
				postfix += st.top();
				st.pop();
			}
			st.push(infix[i]);
		} // is a operator

		else if (infix[i] == '(') {
			st.push(infix[i]);
		}
		else if (infix[i] == ')') {
			while (!st.empty() && st.top() != '(') {
				postfix += st.top();
				st.pop();
			}
			st.pop();
		}
	}

	while (!st.empty()) {
		postfix += st.top();
		st.pop();
	}

	cout << postfix;


}