/* Queue using stack */

#include<iostream>
using namespace std;

#define MAX 5 // Size of queue

int stack1[MAX], stack2[MAX],top1 = -1, top2 = -1; // Global Variables

void enqueue() {
    int value;

    if (top1 != MAX-1) {
        cout<<"Enter Value: ";
        cin>>value;
        stack1[++top1] = value;
    } else {
        cout<<"Queue is full"<<endl;
    }
}

int dequeue() {
    int popItem = NULL;

    if (top1 == -1 && top2 == -1) {
        cout<<"Queue is empty"<<endl;
    } else {
        while (top1 != -1)
            stack2[++top2] = stack1[top1--];

        popItem = stack2[top2--];

        while(top2 != -1)
            stack1[++top1] = stack2[top2--];
    }
    return popItem;
}

void display() {
    cout<<"Queue: ";
    for (int i=0; i<=top1; i++)
        cout<<stack1[i]<<" ";
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

