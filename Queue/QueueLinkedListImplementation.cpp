// Queue linked list implementation

#include<iostream>
using namespace std;

typedef struct Node *node;

struct Node {
    int data;
    Node *next;
};

node queue = NULL;

node createNode() {
    node temp = (node)malloc(sizeof(Node));
    cout<<"Enter Value: ";
    cin>>temp->data;
    temp->next = NULL;
    return temp;
}

node enqueue(node head) {
    node temp = createNode(), last = head;

    if (head == NULL)
        head = temp;
    else {
        while(last->next != NULL)
            last = last->next;
        last->next = temp;
    }
    return head;
}

node dequeue(node head) {

    if (head == NULL) {
        cout<<"Queue is empty"<<endl;
        return NULL;
    } else {
        head = head->next;
        return head;
    }
}

void display(node head) {
    if (head == NULL){
        cout<<"Queue is Empty"<<endl;
    } else {
        cout<<"Queue: ";
        while(head != NULL) {
            cout<<head->data<<" ";
            head = head->next;
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
            queue = enqueue(queue);
            break;

        case 2:
            queue = dequeue(queue);
            break;

        case 3:
            display(queue);
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

