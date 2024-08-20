#include <iostream>
#include <stack>

using namespace std;


int main() {
	string postfix = "12+34+*";

	stack<char> st;

	for (int i = 0; i < postfix.length(); i++) {
		if (isdigit(postfix[i])) {
			st.push(postfix[i] - '0');
		}
		else {
			int val1 = st.top();
			st.pop();
			int val2 = st.top();
			st.pop();

			switch (postfix[i]) {
			case '+':
				st.push(val2 + val1);
				break;
			case '-':
				st.push(val2 - val1);
				break;
			case '*':
				st.push(val2 * val1);
				break;
			case '/':
				if (val1 == 0) {
					cout << "Invalid division by 0";
					return 1;
				}
				st.push(val2 / val1);
				break;
			default:
				cout << "Unkown";
				break;
			}
		}
	}

	cout << int(st.top());


}