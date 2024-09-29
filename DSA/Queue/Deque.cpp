#include <iostream>

using namespace std;


class Deque {
public:
	int arr[10];
	int front = -1;
	int rear = -1;

	void enqueuefront(int x) {
		if ((front == 0 && rear == 10 - 1) || (front == rear + 1)) {
			cout << "Deque is FULL" << endl;
			return;
		}
		else if (front == -1) {
			front = 0;
			arr[front] = x;
		}
		else if (front == 0) {
			front = 10 - 1;
			arr[front] = x;
		}
		else {
			front--;
			arr[front] = x;
		}
	}

	void enqueuerear(int x) {

	}
};

int main() {


}