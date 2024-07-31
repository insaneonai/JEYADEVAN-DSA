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

void FindMiddle(Node* head) {
	Node* fast = head;  // initialize fast pointer to head;
	Node* slow = head;  // intialize slow pointer to head;

	while (fast != NULL && fast->next != NULL) {  // while fast pointer didn;t reach the end of LL.
		fast = fast->next->next;  // move fast by 2 nodes
		slow = slow->next;  // move slow by one node;
	}

	cout << slow->value << " ";  // if fast reached the end then slow will for sure be at middle.
}

void main() {
	int arr[] = { 1,2,3,4 };

	Node* head = new Node(arr[0]); // point head pointer to first node.

	Node* temp = head;

	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		Node* newNode = new Node(arr[i]);
 		temp->next = newNode;
		temp = temp->next;
	}  // create a LL

	temp = head; // reset temp to head after LL creation.

	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	} // display LL;

	cout << endl;

	temp = head; // reset LL.

	FindMiddle(temp);


}