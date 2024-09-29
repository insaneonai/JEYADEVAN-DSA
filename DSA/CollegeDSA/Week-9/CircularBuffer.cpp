#include <iostream>

using namespace std;

class Queue {
public:
	int* arr;
	int size;
	int front = -1;
	int rear = -1;
	Queue(int N) {
		size = N;
		arr = new int[N];
	}


	void enqueue(int x){
		if ((rear + 1) % size == front) {
			cout << "Buffer is Full Overwriting" << endl;
			rear = (rear + 1) % size;
		}
		else if (rear == -1) {
			rear = 0;
			front = 0;
		}
		else {
			rear = (rear + 1) % size;
		}
		arr[rear] = x;
	}
};

int main() {
	Queue q(5);

	int choice;

	do {
		cout << "1. Add Temperature to Buffer ";
		cout << "2. Display Buffer ";
		cout << "3. Quit";
		cin >> choice;

		switch (choice)
		{
		case 1:
			int temp;
			cout << "Please enter  temperature value: ";
			cin >> temp;
			q.enqueue(temp);
			cout << endl << "Added to Queue" << endl;
			break;
		}
		case 2:
			for (int i=Q.; i<)

	} while (choice != 3);
}