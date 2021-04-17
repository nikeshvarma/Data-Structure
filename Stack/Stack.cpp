#include<iostream>
#define MAX 5
using namespace std;

// Global Variables
int stack[MAX], top = -1;


void push() {
    int value;

    if (top == MAX-1)
        cout<<"Stack Overflow"<<endl;
    else {
        cout<<"Enter Value: ";
        cin>>value;
        stack[++top] = value;
    }
}

void pop() {
    if (top == -1) {
        cout<<"Stack is Empty"<<endl;
    }
    else {
        int pop_value;
        pop_value = stack[top--];
        cout<<"Pop Item: "<<pop_value<<endl;
    }
}

void topPosition() {
    cout<<"Top Position: "<<top<<endl;
}

void isEmpty() {
    if (top == -1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

void isFull() {
    if (top == MAX - 1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

void display() {
    int i = top;

    if (i < 0)
        cout<<"Stack is Empty"<<endl;
    else
        while(1 + i) {
            cout<<stack[i]<<endl;
            i--;
        }
}

int main()
{
    int choice;

    while(1) {

        cout<<endl<<"*************** MENU ***************"<<endl<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Top Position"<<endl;
        cout<<"5. Is Empty"<<endl;
        cout<<"6. Is Full"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<endl<<"Enter Your Choice: ";
        cin>>choice;

        switch (choice) {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            topPosition();
            break;

        case 5:
            isEmpty();
            break;

        case 6:
            isFull();
            break;

        case 7:
            exit(0);
            break;

        default:
            cout<<"Invalid Option"<<endl;
        }
    }
    return 0;
}
