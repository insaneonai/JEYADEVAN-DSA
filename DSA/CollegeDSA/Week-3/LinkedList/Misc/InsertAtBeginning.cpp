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
	for (int i = 0; i < v.size(); i++) {
		Node* newNode = new Node(v[i]);
		temp->next = newNode;
		temp = newNode;
	}

	cout << "LinkedList Created!" << endl;

	head = head->next;

	Node* newNode = new Node(7);
	newNode->next = head;
	head = newNode;

	temp = head;
	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
	
}