#include <iostream>

using namespace std;

class Node {
public:
	Node* prev = NULL;
	Node* next = NULL;

	string value;
	Node(string x) {
		value = x;
	}
};

void reverseString(string &s) {
	int p = 0;
	int q = s.length()-1;

	while (p <= q) {
		swap(s[p], s[q]);
		p++;
		q--;
	}
}

void main() {
	string arr[] = { "apple", "tree", "banana", "cherry", "goa" };

	Node* head = new Node(arr[0]);

	const int N = sizeof(arr) / sizeof(arr[0]);

	Node* temp = head;

	for (int i = 1; i < N; i++) {
		temp->next = new Node(arr[i]);
		temp->next->prev = temp;
		temp = temp->next;
	}

	temp = head;

	while (temp->next != NULL) {
		reverseString(temp->value);
		temp = temp->next;
	}

	reverseString(temp->value);

	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->prev;
	}




}

