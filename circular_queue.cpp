#include <iostream>
using namespace std;
class Queue {
public:
    int size = 5;
    int a[5];
    int front = 0;
    int rear = -1;
    int count = 0;  // Track number of elements

    int isFull() {
        return count == size;
    }
    int isEmpty() {
        return count == 0;
    }

    void EnQueue(int data) {
        if (isFull()) {
            cout << "Queue is Full" << endl;
            return;
        }
        rear = (rear + 1) % size;
        a[rear] = data;
        count++;
    }

    int DeQueue() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        int prev = a[front];
        front = (front + 1) % size;
        count--;
        return prev;
    }
    void Print() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue: ";
        int i = front;

        for (int c = 0; c < count; c++) {
            cout << a[i] << " ";
            i = (i + 1) % size;
        }

        cout << endl;
    }



};
int main() {
Queue q;
q.EnQueue(10);
q.EnQueue(20);
q.EnQueue(30);
    q.EnQueue(40);
    q.EnQueue(50);
q.DeQueue();
    q.Print();
return 0;
}