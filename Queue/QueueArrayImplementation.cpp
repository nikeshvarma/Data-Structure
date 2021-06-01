// Queue array implementation

#include<iostream>
using namespace std;

#define MAX 10

// Global Variables
int queue[MAX], front = -1, rear = -1;


void enqueue() {
    int value;

    if (rear != MAX-1) {
        cout<<"Enter Value: ";
        cin>>value;
        queue[++rear] = value;
    } else {
        cout<<"Queue is full"<<endl;
    }
}

int dequeue() {
    int popItem = NULL;

    if (front == rear) {
        cout<<"Queue is empty"<<endl;
    } else {
        popItem = queue[++front];
        return popItem;
    }
    return popItem;
}

void queueFront() {
    cout<<queue[front + 1]<<endl;
}

void queueRear() {
    cout<<queue[rear]<<endl;
}

void display() {
    cout<<"Queue: ";
    for (int i = front+1; i< rear+1; i++)
        cout<<queue[i]<<" ";
}

int main()
{
    int choice;

    while(1) {

        cout<<endl<<"*************** MENU ***************"<<endl<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Front"<<endl;
        cout<<"5. Rear"<<endl;
        cout<<"6. Exit"<<endl;
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
            queueFront();
            break;

        case 5:
            queueRear();
            break;

        case 6:
            exit(0);
            break;

        default:
            cout<<"Invalid Option"<<endl;
        }
    }
    return 0;
}
