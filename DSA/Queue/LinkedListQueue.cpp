#include <iostream>

using namespace std;


class Node {
public:
	Node* next = NULL;
	int value;
};

class Queue {
public:
	Node* head = NULL;
	Node* tail = head;

	void enqueue(int val) {
		Node* newNode = new Node;
		newNode->value = val;

		if (tail == NULL) {
			head = newNode;
			tail = newNode;
			cout << "Added value " << val << endl;
		}
		else {
			tail->next = newNode;
			tail = tail->next;
			cout << "Added value " << val << endl;
		}
	}

	void dequeue() {
		Node* temp = head;
		if (temp == NULL) {
			cout << "Queue is Empty cant delete";
		}
		else {
			head = head->next;
			cout << "Removed " << temp->value << endl;
			delete temp;
		}
	}
};

int main() {
	Queue Q;

	Q.enqueue(5);
	Q.enqueue(6);
	Q.enqueue(7);
	Q.enqueue(8);
	Q.enqueue(9);
	Q.enqueue(10);

	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();
	Q.dequeue();


}