/*Double ended queue DLL implementation*/

#include<iostream>
using namespace std;

/*Global data type defined*/
typedef struct Node *node;

/*structure of Node*/
struct Node {
    int value;
    node pre, nxt;
};

/*Global variables*/
node front = NULL, rear = NULL;

node createNode() {

    node temp = (node)malloc(sizeof(Node));
    cout<<"Enter Value: ";
    cin>>temp->value;

    temp->nxt = NULL;
    temp->pre = NULL;

    return temp;
}

bool isEmpty() {
    return front == NULL && rear == NULL;
}

void insertFront() {
    node temp = createNode();

    if (isEmpty()) {
        front = rear = temp;
    } else {
        front->pre = temp;
        temp->nxt = front;
        front = temp;
    }
}

void insertEnd () {
    node temp = createNode();

    if (isEmpty())
        front = rear = temp;
    else {
        rear->nxt = temp;
        temp->pre = rear;
        rear = temp;
    }
}

void deleteFront() {
    if (isEmpty()) {
        cout<<"Queue is empty"<<endl;
    } else if (front == rear) {
        front = rear = NULL;
    } else {
        front->nxt->pre = NULL;
        front = front->nxt;
    }
}

void deleteEnd() {
    if (isEmpty()) {
        cout<<"Queue is empty"<<endl;
    } else if (front == rear) {
        front = rear = NULL;
    } else {
        rear->pre->nxt = NULL;
        rear = rear->pre;
    }
}

void display() {
    node ptr = front;

    if (front == NULL && rear == NULL) {
        cout<<"Queue is Empty"<<endl;
    } else {
        cout<<"Queue: ";
        while(ptr != NULL) {
            cout<<ptr->value<<" ";
            ptr = ptr->nxt;
        }
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
        cout<<"5. Display"<<endl;
        cout<<"6. Exit"<<endl;

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
            display();
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

