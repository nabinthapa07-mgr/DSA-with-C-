#include<iostream>
using namespace std;

class Stack {
public:
    int top = 0;
    int numbers[3];

    int isfull() {
        return top == sizeof(numbers) / sizeof(numbers[0]);
    }

    void push(int data) {
        if (isfull()) {
            cout << "Stack is full" << endl;
        } else {
            numbers[top] = data;
            top = top + 1;
        }
    }

    int isEmpty() {
        return top == 0;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            top = top - 1;
        }
    }

    // Peek function to view the top element without removing it
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty, nothing at top." << endl;
        } else {
            cout << "Top element is: " << numbers[top - 1] << endl;
        }
    }

    void display() {
        for (int i = 0; i < top; i++) {
            cout << numbers[i] << endl;

        }
    }