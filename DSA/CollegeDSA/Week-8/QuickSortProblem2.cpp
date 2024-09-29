/*
In a linked list containing employee information, including salary, use Quick Sort to sort the employees
based on their salaries by calculating the salary only by getting the basic pay of an employee.
*/

#include <iostream>

struct Employee {
    int id;                // Employee ID
    double basicPay;      // Basic Pay
    Employee* next;       // Pointer to the next employee

    Employee(int id, double pay) : id(id), basicPay(pay), next(nullptr) {}
};

double calculateSalary(Employee* emp) {
    return emp->basicPay; // Salary is equal to basic pay
}

Employee* getTail(Employee* head) {
    while (head != nullptr && head->next != nullptr) {
        head = head->next;
    }
    return head;
}

Employee* partition(Employee* head, Employee* end, Employee** newHead, Employee** newEnd) {
    Employee* pivot = end;
    Employee* prev = nullptr;
    Employee* curr = head;
    Employee* tail = pivot;

    while (curr != pivot) {
        if (calculateSalary(curr) < calculateSalary(pivot)) {
            if (*newHead == nullptr) {
                *newHead = curr;
            }
            prev = curr;
            curr = curr->next;
        }
        else {
            if (prev) {
                prev->next = curr->next;
            }
            Employee* tmp = curr->next;
            curr->next = nullptr;
            tail->next = curr;
            tail = curr;
            curr = tmp;
        }
    }

    if (*newHead == nullptr) {
        *newHead = pivot;
    }

    *newEnd = tail;
    return pivot;
}

Employee* quickSortRec(Employee* head, Employee* end) {
    if (!head || head == end) {
        return head;
    }

    Employee* newHead = nullptr;
    Employee* newEnd = nullptr;

    Employee* pivot = partition(head, end, &newHead, &newEnd);

    if (newHead != pivot) {
        Employee* tmp = newHead;
        while (tmp->next != pivot) {
            tmp = tmp->next;
        }
        tmp->next = nullptr;

        newHead = quickSortRec(newHead, tmp);

        tmp = getTail(newHead);
        tmp->next = pivot;
    }

    pivot->next = quickSortRec(pivot->next, newEnd);
    return newHead;
}

Employee* quickSort(Employee* head) {
    Employee* end = getTail(head);
    return quickSortRec(head, end);
}

void printList(Employee* head) {
    while (head != nullptr) {
        std::cout << "Employee ID: " << head->id << ", Basic Pay: " << head->basicPay << std::endl;
        head = head->next;
    }
}

int main() {
    Employee* head = new Employee(1, 50000);
    head->next = new Employee(2, 30000);
    head->next->next = new Employee(3, 70000);
    head->next->next->next = new Employee(4, 40000);
    head->next->next->next->next = new Employee(5, 60000);

    std::cout << "Original List:\n";
    printList(head);

    head = quickSort(head);

    std::cout << "\nSorted List:\n";
    printList(head);

    // Free the memory (not shown here for brevity)
    return 0;
}