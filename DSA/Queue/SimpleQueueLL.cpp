#include <iostream>

using namespace std;

class Node {
public:
	int value;
	Node* next = NULL;
};

class Queue {
public:
	Node* head = NULL;
	Node* tail = head;

	void insert(int n) {
		Node* newNode = new Node;
		if (tail == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = tail->next;
		}
	}

	void remove() {
		Node* temp = head;
		if (temp == NULL) {
			cout << "Empty queue";
			return;
		}
		head = head->next;
		delete temp;

	}

};

void main() {
	
	Node* temp = head;
	while (int i = 0; i < 5; i++) {
		temp->value = i;
		temp = temp->next;
	}


}