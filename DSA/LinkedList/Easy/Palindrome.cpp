#include <iostream>

using namespace std;

class Node {
public:
	char x;
	Node* next = NULL;

	Node(char x1) {
		x = x1;
	}
};

void reverse(Node* secondHalf) {
	Node* prev = NULL;
	Node* curr = secondHalf;
	Node* next = secondHalf;

	while (curr != NULL) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	secondHalf = prev;

}

bool Compare(Node* firsthalf, Node* secondHalf) {
	Node* temp1 = firsthalf;
	Node* temp2 = secondHalf;

	while (temp1 != NULL && temp2 != NULL) {
		if (temp1->x != temp2->x) {
			return false;
		}
		temp1 = temp1->next;
		temp2 = temp2->next;
	}

	if (temp1) {
		if (temp1->next != NULL) {
			return false;
		}
	}

	if (temp2) {
		if (temp2->next != NULL) {
			return false;
		}
	}

	return true;
}

void isPalindrome(Node* head) {
	bool palindrome = true;

	Node* slow = head;
	Node* fast = head;
	Node* middle = NULL;
	Node* slowprev = head;
	
	while (fast != NULL && fast->next != NULL) {
		fast = fast->next->next; // 2 step
		slowprev = slow; // save the slow to slowprev;
		slow = slow->next; // slow 1 step.
	}

	if (fast != NULL) {
		// Odd Nodes in LL, Skip Middle Node;

		middle = slow;
		slow = slow->next;
	}

	Node* secondHalf = slow;

	slowprev->next = NULL; 

	// We have separated middle, firsthalf and secondhalf.

	reverse(secondHalf);

	palindrome = Compare(head, secondHalf);

	if (palindrome) {
		cout << "Given is Palindrome";
	}

	else {
		cout << "Given is not palindrome";
	}


	
}


int main() {
	string x = "deed";

	Node* head = new Node(x[0]);

	Node* temp = head;

	for (int i = 1; i < x.length(); i++) {
		temp->next = new Node(x[i]);
		temp = head->next;
	}

	temp = head;

	isPalindrome(temp);

}