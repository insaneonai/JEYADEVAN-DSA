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


Node* Merge2LL(Node* A, Node* B) {
	Node* C = new Node(0);
	Node* temp = C;

	while (A != NULL && B != NULL) {
		if (A->value <= B->value) {
			temp->next = new Node(A->value);
			A = A->next;
			temp = temp->next;
		}
		else {
			temp->next = new Node(B->value);
			B = B->next;
			temp = temp->next;
		}
	}

	while (A != NULL) {
		temp->next = new Node(A->value);
		A = A->next;
		temp = temp->next;
	}

	while (B != NULL) {
		temp->next = new Node(B->value);
		B = B->next;
		temp = temp->next;
	}

	Node* MergedHead = C->next;
	delete C;

	return MergedHead;
}

Node* MergeKLL(Node* arr[], int N) {
	Node* merged = new Node(0);

	for (int i = 0; i < N; i++) {
		merged = Merge2LL(merged, arr[i]);
	}

	Node* temp = merged;
	merged = merged->next;
	delete temp;

	return merged;
}

int main() {
	int arr[] = { 1,2,3,4 };

	int arr1[] = { 2,6 };
	
	int arr2[] = { 7,8 };

	Node* L1 = new Node(arr[0]); // point head pointer to first node.

	Node* temp = L1;

	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		Node* newNode = new Node(arr[i]);
		temp->next = newNode;
		temp = temp->next;
	}  // create a LL

	Node* L2 = new Node(arr1[0]); // point head pointer to first node.

	temp = L2;

	for (int i = 1; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		Node* newNode = new Node(arr1[i]);
		temp->next = newNode;
		temp = temp->next;
	}  // create a LL

	Node* L3 = new Node(arr2[0]); // point head pointer to first node.

	temp = L3;

	for (int i = 1; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
		Node* newNode = new Node(arr2[i]);
		temp->next = newNode;
		temp = temp->next;
	}  // create a LL

	Node* LL[] = { L1, L2, L3 };


	Node* merged = MergeKLL(LL, 3);

	temp = merged;

	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}


}