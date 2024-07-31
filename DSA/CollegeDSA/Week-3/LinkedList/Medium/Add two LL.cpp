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

Node* reverse(Node* head) {
	Node* prev = NULL;
	Node* curr = head;
	Node* next = NULL;

	while (curr != NULL) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return prev;
}

Node* Sum(Node* first, Node* second) {
	Node* reversedFirst = reverse(first);
	Node* reversedSecond = reverse(second);

	Node* sumHead = new Node(0); // Dummy node to simplify sum creation
	Node* sum = sumHead;

	int carry = 0;

	while (reversedFirst != NULL || reversedSecond != NULL || carry > 0) {
		int value1 = (reversedFirst) ? reversedFirst->value : 0;
		int value2 = (reversedSecond) ? reversedSecond->value : 0;

		int total = value1 + value2 + carry;

		Node* newnode = new Node(total % 10);

		carry = total / 10;

		sum->next = newnode;
		sum = sum->next;

		if (reversedFirst) {
			reversedFirst = reversedFirst->next;
		}
		if (reversedSecond) {
			reversedSecond = reversedSecond->next;
		}
	}

	return reverse(sumHead->next);
}

int main() {
	int arr[] = { 7,2,4,3};

	int ar[] = {0,5,6,4 };

	Node* first = new Node(arr[0]); // point head pointer to first node.

	Node* second = new Node(ar[0]);

	Node* temp = first;

	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		Node* newNode = new Node(arr[i]);
		temp->next = newNode;
		temp = temp->next;
	}  // create a LL

	temp = first;

	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}

	temp = second;

	for (int i = 1; i < sizeof(ar) / sizeof(ar[0]); i++) {
		Node* newNode = new Node(ar[i]);
		temp->next = newNode;
		temp = temp->next;
	}  // create a LL

	cout << endl;

	temp = second;

	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}

	Node* sum = Sum(first, second);

	cout << endl;

	while (sum != NULL) {
		cout << sum->value << " ";
		sum = sum->next;
	}



}