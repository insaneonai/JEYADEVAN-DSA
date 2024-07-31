#include <iostream>

using namespace std;

class Node {
public:
	Node* next = NULL;
	int value = 0;

	Node(int val) {
		value = val;
	}
};

void removeDuplicate(Node* head) {
	Node* first = head;
	Node* second = head->next;

	while (second != NULL) {
		if (first->value == second->value) {
			Node* temp = second;
			first->next = second->next;
			delete temp;
			second = first->next;
		}
		else {
			first = first->next;
			second = second->next;
		}
	}
}

int main() {
	int arr[] = { 1,1,21,43,43,4 };

	Node* head = new Node(arr[0]); // point head pointer to first node.

	Node* temp = head;

	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		Node* newNode = new Node(arr[i]);
		temp->next = newNode;
		temp = temp->next;
	}  // create a LL
	
	temp = head;
	removeDuplicate(temp);

	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}

}

