// Queue linked list implementation

#include<iostream>
using namespace std;

typedef struct Node *node;

struct Node {
    int data;
    Node *next;
};

node front = NULL, rear = NULL;

node createNode() {
    node temp = (node)malloc(sizeof(Node));
    cout<<"Enter Value: ";
    cin>>temp->data;
    temp->next = NULL;
    return temp;
}

void enqueue() {
    node temp = createNode();

    if (front == NULL && rear == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue() {

    if (front == NULL && rear == NULL) {
        cout<<"Queue is empty"<<endl;
    } else {
        front = front->next;
    }
}

void display() {
    node ptr = front;

    if (front == NULL && rear == NULL) {
        cout<<"Queue is Empty"<<endl;
    } else {
        cout<<"Queue: ";
        while(ptr != NULL) {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    }
}

int main()
{
    int choice;

    while(1) {

        cout<<endl<<"*************** MENU ***************"<<endl<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<endl<<"Enter Your Choice: ";
        cin>>choice;

        switch (choice) {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            cout<<"Invalid Option"<<endl;
        }
    }
    return 0;
}

