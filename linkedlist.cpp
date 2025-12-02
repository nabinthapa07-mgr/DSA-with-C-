#include<iostream>
using namespace std;

class Node {
public:
    Node* next = nullptr;
    int data;
};

class LinkedList {
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int position;

    void insertAtBegining( int value) {
        Node* node = new Node();
        node->data = value;

        if (head == nullptr) {
            head = tail=node;
        }else {
            node->next = head;
            head = node;
        }

    }
    void insertATend(int value) {

        Node* node=new Node();
        node->data=value;
        node->next=nullptr;

        if (head==nullptr) {
            head=tail=node;

        }else{
            tail->next=node;
            tail=node;
        }
    }


    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void DeleteAtHead() {
        if (head==nullptr) {
            cout<<"node is empty"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=nullptr;
        delete temp;
        cout<<"sucessfully poped at head"<<endl;
    }
    void DeleteAtTail() {
        if (head==nullptr) {
            cout<<"node is empty"<<endl;
            return;
        }
        Node *temp=head;
        while (temp->next!=tail) {
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        temp->next=nullptr;
        cout<<"sucessfully poped at tail"<<endl;
    }
    void insertatN(int value,int position) {
        Node* node=new Node();
        node-> data= value;
        if (head==nullptr) {
          head=tail=new Node();
            return;
        }
        Node*temp= head;
        // temp-> next;
        while (temp-> next!= NULL && position>0) {
            position--;
            temp=temp->next;
            node=temp->next;
            temp->next = node;

        }





    }
};


int main() {
    LinkedList l;
    l.insertAtBegining(10);
    l.insertAtBegining(20);
    l.insertAtBegining(30);
    l.insertATend(12);
    l.insertatN(15,5);
    l.DeleteAtHead();
     // l.DeleteAtTail();
    l.display();
    return 0;
}
