#include <iostream>

using namespace std;

class Node {
public:
	Node* next = NULL;
	string employee;
	float salary;
	int Id;
	
	Node(int Id1, float salary1, string emp) {
		employee = emp;
		Id = Id1;
		salary = salary1;
	}
};

void findMaximum(Node* head) {
	Node* max = head;
	while (head != NULL) {
		if (max->salary < head->salary) {
			max = head;
		}
		head = head->next;
	}

	cout << max->employee << " " << max->salary << " " << max->Id << endl;
}

void main() {
	string arr[] = { "A", "B", "C", "D", "E" };

	Node* head = new Node(0, 0, arr[0]);

	const int N = sizeof(arr) / sizeof(arr[0]);

	Node* temp = head;
	for (int i = 1; i < N; i++) {
		temp->next = new Node(i, i * 1000, arr[i]);
		temp = temp->next;
	}

	temp = head;

	findMaximum(temp);


}