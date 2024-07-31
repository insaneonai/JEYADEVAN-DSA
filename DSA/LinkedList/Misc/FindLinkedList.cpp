#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
	int value;
	Node* next;

	Node() {
		value = 0;
		next = NULL;
	}
	Node(int x) {
		value = x;
		next = NULL;
	}
};


int main() {
	vector<int> v = { 1,2,3,4,5 };
	Node* head = new Node(0);
	Node* temp = head;

	int value = 3;

	for (int i = 0; i < v.size(); i++) {
		Node* newNode = new Node(v[i]);
		temp->next = newNode;
		temp = newNode;
	}

	temp = head;

	bool found = false;

	while (temp != NULL) {
		if (value == temp->value) {
			found = true;
			break;
		}
		temp = temp->next;
	}

	cout << found ? "Value exist" : "Value doesn;t exist";


}