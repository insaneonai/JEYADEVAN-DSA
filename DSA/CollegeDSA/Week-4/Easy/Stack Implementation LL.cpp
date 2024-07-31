#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string Name;
    int id;
    float salary;
    Employee* next = NULL;

    Employee(string N, int i, float s) {
        Name = N;
        id = i;
        salary = s;
    }
    Employee() {
        Name = "";
        id = -1;
        salary = 0.0;
    }
};

class Stack {
public:
    Node* head = new Employee();

    void Push(Employee emp) {
        emp->next = head;
        head = emp;
    }

    Employee* Pop() {
        Employee* data = head;
        head = head->next;
        cout << data->id << " -- " << data->Name << " -- " << data->salary;
        return data;
    }

    void Peek() {
        if (head == NULL) {
            cout << "No data in Stack...";
        }
        else {
            cout << head->id << " -- " << head->Name << " -- " << head->salary;
        }
    }

    void Print() {
        Employee* temp = head;
        while (temp != NULL) {
            cout << temp->id << " -- " << temp->Name << " -- " << temp->salary;
            temp = temp->next;
        }
    }
};

int main() {
    Stack s;
    s.Push(Employee("jeydev", 1, 100000));
    s.Push(Employee("dinesh", 1, 100000));
    s.Print();
    s.Pop();
    S.Print();
}