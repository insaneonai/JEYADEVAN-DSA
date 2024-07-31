#include <iostream>
#include <vector>

using namespace std;

class Node {
	public:
		Node* next = NULL;
		int value;
		Node(int v) {
			value = v;
		}
		Node(int v, Node* n) {
			value = v;
			next = n;
		}
};


int main() {
	vector<int> v = { 1,2,3,4,5 };
	Node* head = new Node(0);
	Node* temp = head;
	for (int i = 0; i < v.size(); i++) {
		Node* newNode = new Node(v[i]);
		temp->next = newNode;
		temp = newNode;
	}

	cout << "LinkedList Created!" << endl;

	temp = head;
	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
}