#include <iostream>
#include <unordered_map>
#include <stack>

using namespace std;

int main() {
	string input = "bcabc";
	unordered_map<char, int> lastoccurance;
	unordered_map<char, bool> visited;
	stack<char> st;


	for (int i = 0; i < input.length(); i++) {
		lastoccurance[input[i]] = i;
	}

	for (int i = 0; i < input.length(); i++) {
		if (!visited[input[i]]) {
			while (!st.empty() && (st.top() > input[i] && lastoccurance[st.top()] > i)) {
				visited[st.top()] = false;
				st.pop();
			}
			st.push(input[i]);
			visited[input[i]] = true;
		}
	}

	string result = "";
	while (!st.empty()) {
		result = st.top() + result;
		st.pop();
	}

	cout << result;


}