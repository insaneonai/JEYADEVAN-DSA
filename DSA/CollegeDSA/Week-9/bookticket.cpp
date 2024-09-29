#include <iostream>

using namespace std;

class Queue {
public:
	int* arr;

	int N;

	int front = -1;
	int rear = -1;

	Queue(int n) {
		arr = new int[n];
		N = n;
	}

	void enqueue(int x) {
		if (rear + 1 >= N) {
			cout << "The Queue is Full" << endl;
			return;
		}
		else if (rear == -1) {
			rear = 0;
			front = 0;
		}
		else {
			rear = rear + 1;
		}
		arr[rear] = x;
		cout << "Customer entered the Queue" << endl;
	}

	bool isEmpty() {
		if (rear == -1) {
			return true;
		}
		return false;
	}

	void dequeue() {
		if (front == -1) {
			cout << "The Queue is empty" << endl;
			return;
		}
		else if (front == rear) {
			rear = -1;
			front = -1;
		}
		else {
			front = front + 1;
		}
		cout << "Customer removed from Queue" << endl;
	}

};

int main() {
	int tickets = 5;

	Queue Q(3);


	int choice;

	do {
		cout << endl << endl;
		cout << "1. To enter customer to Queue" << endl;
		cout << "2. To know tickets available" << endl;
		cout << "3. To Quit" << endl;
		cout << "Your choice: ";

		cin >> choice;

		switch (choice) {
		case 1:
			Q.enqueue(1);
			char ch;
			cout << "1. Do you want to book ticket? Y/N";
			cin >> ch;
			if (ch == 'Y') {
				tickets--;
				Q.dequeue();
			}
			else {
				cout << endl << "Leaving Queue coz not booked ticket" << endl;
			}
			break;
		case 2:
			cout << "Available Tickets: " << tickets << endl;
			break;
		}

	} while (choice != 3);
}
