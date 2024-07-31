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

	Node* head = new Node();

	Node* temp = head;

	for (int i : v) {
		Node* newNode = new Node(i);
		temp->next = newNode;
		temp = temp->next;
	}

	cout << "LL created" << endl;

	temp = head;

	int count = 0;

	while (temp != NULL) {
		count++;
		temp = temp->next;
	}

	cout << "Length of Linked List is " << count - 1;
}