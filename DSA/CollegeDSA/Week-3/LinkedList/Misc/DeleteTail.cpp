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

	if (head == NULL || head->next == NULL) {
		return;
	}

	for (int i = 0; i < v.size(); i++) {
		Node* newNode = new Node(v[i]);
		temp->next = newNode;
		temp = newNode;
	}

	cout << "LinkedList Created!" << endl;

	temp = head;

	while (temp->next->next != NULL) {
		temp = temp->next;
	}

	Node* temp2 = temp->next;
	temp->next = NULL;
	delete temp2;

	cout << "Temp Deleted" << endl;
 
	temp = head;
	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
}