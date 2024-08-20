#include <iostream>
#include <stack>

using namespace std;


int main() {
	string prefix = "*+12+34";	

	stack<char> st;

	for (int i = prefix.length()-1; i >=0; i--) {
		if (isdigit(prefix[i])) {
			st.push(prefix[i] - '0');
		}
		else {
			int val1 = st.top();
			st.pop();
			int val2 = st.top();
			st.pop();

			switch (prefix[i]) {
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