#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    void insertAtPosition(int val, int pos) {
        if (pos <= 0) {
            cout << "Invalid position\n";
            return;
        }
        if (pos == 1) {
            insertAtBeginning(val);
            return;
        }
        Node* temp = head;
        for (int i = 1; temp && i < pos - 1; i++) temp = temp->next;
        if (!temp) {
            cout << "Position out of range\n";
            return;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtBeginning(5);
    list.insertAtEnd(15);
    list.insertAtPosition(12, 3);

    cout << "Linked List after insertions:\n";
    list.display();
    return 0;
}
