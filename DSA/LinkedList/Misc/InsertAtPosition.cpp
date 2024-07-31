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
	Node(int v) {
		value = v;
		next = NULL;
	}
};

int main() {
	vector<int> v = { 1,2,3,4,5 };
	int N = v.size();
	int pos = 1;

	int newValue = 7;

	Node* head = new Node();
	Node* temp = head;

	if (N < pos) {
		cout << "Position not found" << endl;
		return -1;
	}

	for (int i : v) {
		Node* newNode = new Node(i);
		temp->next = newNode;
		temp = temp->next;
	}

	cout << "LL created..." << endl;

	temp = head;

	Node* newNode = new Node(newValue);

	for (int i = 0; (i < pos-1 && temp->next!=NULL); i++) {
		temp = temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	temp = head;

	cout << "Insertion Done..." << endl;

	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
	return 0;
}