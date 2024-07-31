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
	vector<int> v = { 1,2,3,4,5 }; // {1,2,3,4,5}
	Node* head = new Node(0);
	Node* temp = head;

	int pos = 0;

	for (int i = 0; i < v.size(); i++) {
		Node* newNode = new Node(v[i]);
		temp->next = newNode;
		temp = newNode;
	}


	temp = head->next;

	if (pos == 0) {
		Node* t = temp->next;
		delete temp;
		while (t != NULL) {
			cout << t->value << " ";
			t = t->next;
		}
	}

	else {

		Node* p = head->next;
		Node* q = p->next;

		for (int i = 0; i < pos - 1; i++) {
			p = p->next;
			q = q->next;
		}

		p->next = q->next;
		delete q;

		while (temp != NULL) {
			cout << temp->value << " ";
			temp = temp->next;
		}
	}



}