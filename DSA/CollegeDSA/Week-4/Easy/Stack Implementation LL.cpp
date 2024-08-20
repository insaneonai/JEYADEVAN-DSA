#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string Name;
    int id;
    float salary;
    Employee* next;

    Employee(string N, int i, float s) : Name(N), id(i), salary(s), next(nullptr) {}

    Employee() : Name(""), id(-1), salary(0.0), next(nullptr) {}
};

class Stack {
public:
    Employee* head;

    Stack() : head(nullptr) {}

    void Push(const Employee& emp) {
        Employee* newEmployee = new Employee(emp.Name, emp.id, emp.salary);
        newEmployee->next = head;
        head = newEmployee;
    }

    Employee* Pop() {
        if (head == nullptr) {
            cout << "Stack is empty. Cannot pop." << endl;
            return nullptr;
        }
        Employee* data = head;
        head = head->next;
        cout << data->id << " -- " << data->Name << " -- " << data->salary << endl;
        return data;
    }

    void Peek() {
        if (head == nullptr) {
            cout << "No data in Stack..." << endl;
        }
        else {
            cout << head->id << " -- " << head->Name << " -- " << head->salary << endl;
        }
    }

    void Print() {
        Employee* temp = head;
        while (temp != nullptr) {
            cout << temp->id << " -- " << temp->Name << " -- " << temp->salary << endl;
            temp = temp->next;
        }
    }

    ~Stack() {
        while (head != nullptr) {
            Employee* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    Stack s;
    s.Push(Employee("jeydev", 1, 100000));
    s.Push(Employee("dinesh", 2, 100000));
    cout << "Stack contents after pushes:" << endl;
    s.Print();

    cout << "Popping top element:" << endl;
    s.Pop();

    cout << "Stack contents after pop:" << endl;
    s.Print();

    return 0;
}