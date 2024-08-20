#include <iostream>
#include <algorithm>
#include <stack>
#include <unordered_map>

using namespace std;

int main() {
	string infix = "(a+b)*(c+d)";
	unordered_map<char, int> precedence = { { '+',1}, {'-' , 1} , {'*', 2}, {'/', 2 } };
	stack<char> st;

	reverse(infix.begin(), infix.end());

	string postfix = "";

	for (int i = 0; i < infix.size(); i++) {
		if (infix[i] == ')') {
			infix[i] = '(';
		}
		else if (infix[i] == '(') {
			infix[i] = ')';
		}
	}


	for (int i = 0; i < infix.length(); i++) {
		if (!isalnum(infix[i]) && precedence.count(infix[i])) {
			while (!st.empty() && precedence.count(st.top()) && precedence[infix[i]] <= precedence[st.top()]) {
				postfix += st.top();
				st.pop();
			}
			st.push(infix[i]);
		}

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

		else {
			postfix += infix[i];
		}
	}

	while (!st.empty()) {
		postfix += st.top();
		st.pop();
	}

	reverse(postfix.begin(), postfix.end());

	cout << postfix;

}