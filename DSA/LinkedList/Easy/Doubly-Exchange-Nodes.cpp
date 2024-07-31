#include <iostream>

using namespace std;

class Node {
public:
	Node* prev = NULL;
	Node* next = NULL;

	int value;
	Node(int x) {
		value = x;
	}
};

Node* SwapFL(Node* head) {
	Node* tail = head;

	while (tail->next != NULL) {
		tail = tail->next;
	}

	tail->next = head->next;
	head->prev = tail->prev;
	head->prev->next = head;
	tail->next->prev = tail;

	tail->prev = NULL;
	head->next = NULL;

	return tail;
}


void main() {
	int arr[] = { 1,2,3,4,5,6 };

	Node* head = new Node(arr[0]);

	const int N = sizeof(arr) / sizeof(arr[0]);

	Node* temp = head;

	for (int i = 1; i < N; i++) {
		temp->next = new Node(arr[i]);
		temp->next->prev = temp;
		temp = temp->next;
	}
	
	temp = head;

	head = SwapFL(temp);

	while (head != NULL) {
		cout << head->value << " ";
		head = head->next;
	}

}