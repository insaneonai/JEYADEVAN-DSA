#include <iostream>

using namespace std;

struct node {
	int data;
	struct node* next;
};

int main() {
	struct node head;
	struct node* curr = &head;
	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			head.data = i;
			struct node* newnode = new node;
			newnode->data = i;
			newnode->next = NULL;
			curr->next = newnode;
			curr = newnode;
		}
		else {
			struct node* newnode = new node;
			newnode->data = i;
			newnode->next = NULL;
			curr->next = newnode;
			curr = newnode;

		}
	}
	curr = &head;
	while (curr != NULL) {
		cout << curr->data;
		curr = curr->next;
	}
}