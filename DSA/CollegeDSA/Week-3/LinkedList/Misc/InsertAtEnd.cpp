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

Node* insertAtEnd(Node* head, int x) {
    if (head == NULL) {
        return head;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    Node* newNode = new Node(x);
    temp->next = newNode;
    return head;
}