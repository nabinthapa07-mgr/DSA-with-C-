#include <iostream>
using namespace std;

// Node class without constructor
class Node {
public:
    int data;
    Node* next;
};

// Stack class without constructor
class Stack {
private:
    Node* top;

public:

    void init() {
        top = nullptr;
    }

    void push(int value) {
        Node* node = new Node();
        node->data = value;
        node->next = top;
        top = node;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void display() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Queue class without constructor
class Queue {
private:
    Node* front;
    Node* rear;

public:

    void init() {
        front = rear = nullptr;
    }

    void enqueue(int value) {
        Node* node = new Node();
        node->data = value;
        node->next = nullptr;

        if (rear == nullptr) {
            front = rear = node;
            return;
        }

        rear->next = node;
        rear = node;
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;
    }

    int peek() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void display() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.init();
    s.push(10);
    s.push(11);
    s.push(12);

    cout << "Top of stack: " << s.peek() << endl;


    s.pop();
    cout << "After pop, top: " << s.peek() << endl;
    s.display();

    cout << "\n--- Queue Operations ---\n";

    Queue q;
    q.init();
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout << "Front of queue: " << q.peek() << endl;


    q.dequeue();
    cout << "After dequeue, front: " << q.peek() << endl;
    q.display();

    return 0;
}
