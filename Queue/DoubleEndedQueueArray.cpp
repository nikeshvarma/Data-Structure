/* Double ended queue circular array implementation */

#include<iostream>
using namespace std;

#define MAX 5

int deque[MAX], front = -1, rear = -1;

int getValue() {
    int value;

    cout<<"Enter value: ";
    cin>>value;

    return value;
}

bool isFull() {
    return (front == rear + 1) || (front == 0 && rear == MAX-1);
}

bool isEmpty() {
    return (front == -1 && rear == -1);
}

void frontPos() {
    cout<<"Front: "<<front<<endl;
}

void rearPos() {
    cout<<"Rear: "<<rear<<endl;
}

void insertFront() {
    if (isFull()) {
        cout<<"Queue is Full"<<endl;

    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        deque[rear] = getValue();

    } else if (front == 0) {
        front = MAX - 1;
        deque[front] = getValue();

    } else {
        deque[--front] = getValue();
    }
}

void insertEnd() {
    if (isFull()) {
        cout<<"Queue is Full"<<endl;

    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        deque[rear] = getValue();

    } else if (rear == MAX-1) {
        rear = (rear + 1) % MAX;
        deque[rear] = getValue();

    } else {
        deque[++rear] = getValue();
    }
}

void deleteFront() {
    if (isEmpty())
        cout<<"Queue is Empty"<<endl;
    else if (front == rear)
        front = rear = -1;
    else
        front = (front+1) % MAX;

}

void deleteEnd() {
    if (isEmpty())
        cout<<"Queue is Empty"<<endl;
    else if (front == rear)
        front = rear = -1;
    else if (rear == 0)
        rear = MAX - 1;
    else
        rear--;
}

void display() {
    if (isEmpty())
        cout<<"Queue is Empty"<<endl;

    else if (front == rear+1){
        int i;

        cout<<"Queue: ";
        for (i=front; i != rear; i = (i+1) % MAX)
            cout<<deque[i]<<" ";
        cout<<deque[i];
    } else {

        cout<<"Queue: ";
        for (int i=front; i != rear+1; i = (i+1) % MAX)
            cout<<deque[i]<<" ";
    }
}

int main()
{
    int choice;

    while(1) {

        cout<<endl<<"*************** MENU ***************"<<endl<<endl;
        cout<<"1. Insert Front"<<endl;
        cout<<"2. Insert End"<<endl;
        cout<<"3. Delete Front"<<endl;
        cout<<"4. Delete End"<<endl;
        cout<<"5. Front Position"<<endl;
        cout<<"6. Rear Position"<<endl;
        cout<<"7. Display"<<endl;
        cout<<"8. Exit"<<endl;

        cout<<endl<<"Enter Your Choice: ";
        cin>>choice;

        switch (choice) {
        case 1:
            insertFront();
            break;

        case 2:
            insertEnd();
            break;

        case 3:
            deleteFront();
            break;

        case 4:
            deleteEnd();
            break;

        case 5:
            frontPos();
            break;

        case 6:
            rearPos();
            break;

        case 7:
            display();
            break;

        case 8:
            exit(0);
            break;

        default:
            cout<<"Invalid Option"<<endl;
        }
    }
    return 0;
}
