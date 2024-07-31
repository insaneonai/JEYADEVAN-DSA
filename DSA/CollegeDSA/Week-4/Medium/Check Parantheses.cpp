#include <iostream>

using namespace std;

class Stack {
public:
    size_t Size;
    int top;
    char* arr;
    Stack(int size) {
        Size = size;
        top = -1;
        arr = new char[Size];
    }

    ~Stack() {
        delete[] arr;
    }

    void Push(char x) {
        if (top + 1 >= Size) {
            cout << "Overflow...";
            return;
        }
        arr[++top] = x;
    }

    char Pop() {
        if (top < 0) {
            throw out_of_range("Stack is empty");
        }
        return arr[top--];
    }

    void Print() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return;
        }
        for (int i = 0; i <= top; i++) {
            cout << arr[i];
        }
    }
};

int main() {

    string x = "{a+b} - {c+d}";
    Stack a(x.length());

    bool balanced = true;


    for (int i = 0; i < x.length() && balanced; i++) {
        if (x[i] == '{' || x[i] == '(' || x[i] == '[') {
            a.Push(x[i]);
        }
        if(x[i] == '}' || x[i] == ')' || x[i] == ']') {
            if (a.top < 0) {
                balanced = false;
                break;
            }
            char g = a.Pop();
            switch (g) {
            case '{':
                if (x[i] != '}') {
                    balanced = false;
                }
                break;
            case '(':
                if (x[i] != ')') {
                    balanced = false;
                }
                break;
            case '[':
                if (x[i] != ']') {
                    balanced = false;
                }
                break;
            }
        }
    }

    balanced ? cout << "Balanced..." : cout << "Not Balanced...";


}