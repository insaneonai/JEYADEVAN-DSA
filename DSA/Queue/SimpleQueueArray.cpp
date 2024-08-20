#include <iostream>

using namespace std;

class Queue {
public:
	int* Q;
	int size;
	Queue(int n) {
		size = n;
		Q = new int[n];
	}
	int front = -1;
	int rear = -1;

	void insert(int n) {
		if ((rear + 1) % size == front) {
			cout << "The Queue is FULL " << " Inserting element " << n;
		}
		else if (rear == -1) {
			// NO elements is Queue;
			rear = 0;
			front = 0;
		}
		else {
			rear = (rear + 1) % size;
		}
		Q[rear] = n;
	}

	bool isEmpty() {
		if (rear == -1) {
			return true;
		}
		return false;
	}

	void remove() {
		if (isEmpty()) {
			cout << "Cant remove from empty queue";
			return;
		}
		cout << "Element deleted " << Q[front] << endl;
		if (front == rear) {
			rear = -1;
			front = -1;
		}
		else {
			front = (front + 1) % size;
		}
	}

	void display() {
		if (isEmpty()) {
			cout << "Nothing to Display";
			return;
		}
		if (front <= rear) {
			for (int i = front; i <= rear; i++) {
				cout << Q[i] << " ";
			}
		}
		else {
			for (int i = front; i <= size; i++) {
				cout << Q[i] << " ";
			}
			for (int i = 0; i <= rear; i++) {
				cout << Q[i] << " ";
			}
		}
	};
};

int main() {
	Queue q(5);

	for (int i = 0; i < 6; i++) {
		q.insert(i);
	}
	cout << endl;
	q.display();

	for (int i = 0; i < 6; i++) {
		q.remove();
	}

	

}