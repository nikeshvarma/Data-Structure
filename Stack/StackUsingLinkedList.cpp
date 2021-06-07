#include<iostream>
using namespace std;

typedef struct Node *node;

struct Node {
    int data;
    Node *next;
};

node head = NULL;

node createNode() {
    node temp = (node)malloc(sizeof(Node));
    cout<<"Enter Value: ";
    cin>>temp->data;
    temp->next = NULL;
    return temp;
}

node push(node head){
    node ptr = head;
    node newNode = createNode();

    if (head == NULL)
        head = newNode;
    else
        newNode->next = head;

    return newNode;
}

node pop(node head) {
    node ptr = head;

    if (head == NULL)
        cout<<"Stack is Empty"<<endl;
    else
        head = head->next;
    return head;
}

void display(node head) {
    if (head == NULL){
        cout<<"Stack is Empty"<<endl;
    } else {
        while(head != NULL) {
            cout<<head->data<<endl;
            head = head->next;
        }
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
        cout<<"4. Exit"<<endl;
        cout<<endl<<"Enter Your Choice: ";
        cin>>choice;

        switch (choice) {
        case 1:
            head = push(head);
            break;

        case 2:
            head = pop(head);
            break;

        case 3:
            display(head);
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
