// Circular array queue implementation (Circular Queue)

#include<iostream>
using namespace std;

#define MAX 10

// Global Variables
int queue[MAX], front = -1, rear = -1;


void enqueue() {
    int value;

    cout<<"Enter Value: ";
    cin>>value;

    if ((rear + 1) % MAX == front) {

        cout<<"Queue is Full"<<endl;

    } else if (front == -1 && rear == -1) {

        front = rear = 0;
        queue[rear] = value;

    } else {

        rear = (rear + 1) % MAX;
        queue[rear] = value;

    }
}

void dequeue() {
    if (front == -1 && rear == -1) {

        cout<<"Queue is empty"<<endl;

    } else if (front == rear) {

        front = rear = -1;

    } else {

        front = (front + 1) % MAX;

    }
}

void display() {
    int i = front;

    if (front == -1 && rear == -1) {
        cout<<"Queue is empty"<<endl;
    } else {
        cout<<"Queue: ";
        while(i != rear) {
            cout<<queue[i]<<" ";
            i = (i + 1) % MAX;
        }
        cout<<queue[i];
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

