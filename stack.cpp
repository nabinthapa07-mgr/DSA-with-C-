#include <iostream>
using namespace std;

class Stack {
    int top = 0;          // keeps track of next insert position (also number of items)
    int numbers[6];       // fixed-size array for stack elements

public:
    // Check if the stack is full
    int isFull() {
        // total elements = size of array / size of one element
        return top == sizeof(numbers) / sizeof(numbers[0]);
    }

    // Push (insert) an element into the stack
    void push(int data) {
        if (isFull()) {                        // if stack is full, stop pushing
            cout << "Stack is full" << endl;
            return;
        }
        numbers[top] = data;                   // store value at current top index
        top = top + 1;                         // move top to next empty position
    }

    // Pop (remove) top element from the stack
    void pop() {
        if (top == 0) {                        // if no elements in stack
            cout << "Stack is empty" << endl;
            return;                            // stop (avoid negative index)
        }
        top = top - 1;                         // just move top down by one (last item ignored)
    }

    // Print all elements in the stack
    void print() {
        for (int i = 0; i < top; i++) {        // print from 0 to top-1
            cout << numbers[i] << endl;
        }
    }
};

int main() {
    Stack stack;           // create a stack object

    // push 6 elements
    stack.push(10); // index 0
    stack.push(11); // index 1
    stack.push(12); // index 2
    stack.push(13); // index 3
    stack.push(14); // index 4
    stack.push(15); // index 5

    stack.pop();    // remove top element (15)
    stack.print();  // print remaining elements
    return 0;
}
