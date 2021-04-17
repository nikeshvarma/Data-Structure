#include<iostream>
using namespace std;

typedef struct Node *node;

struct Node {
    int data;
    Node *next;
};

node start = NULL;

node createNode() {
    node newNode = (node)malloc(sizeof(Node));
    cout<<"Enter Value: ";
    cin>>newNode->data;
    newNode->next = newNode;
    return newNode;
}

node addNodeEnd(node start) {
    node temp = createNode();
    node head = start;
    node ptr = start;

    if (start == NULL)
        start = temp;

    else {
        while(ptr->next != head)
            ptr = ptr->next;
        ptr->next = temp;
        temp->next = head;
    }
    return start;
}

node addNodeBeg(node start) {
    node temp = createNode();
    node head = start, ptr = start;

    if (start == NULL)
        head = temp;

    else {
        while(ptr->next != head)
            ptr = ptr->next;

        ptr->next = temp;
        temp->next = head;
        head = temp;
    }
    return head;
}

node delNodeBeg(node start) {
    node ptr = start, head = start;

    if (ptr == NULL)
        return NULL;

    else if (start->next == head) {
        delete start;
        return NULL;

    } else {
        while (ptr->next != head)
            ptr = ptr->next;

        start = start->next;
        ptr->next = start;
    }
    return start;
}

node delNodeEnd(node start) {
    node ptr = start, head = start;

    if (start == NULL)
        return NULL;

    else if (start->next == head) {
        delete start;
        return NULL;

    } else {
        while(ptr->next->next != head)
            ptr = ptr->next;
        ptr->next = head;
        return start;
    }
}

void displayList(node start) {
    node current = start;
    node head = start;

    if (start != NULL) {

        do {
            cout<<current->data<<" ";
            current = current->next;
        } while(current != head);

    } else
        cout<<"List is empty"<<endl;
}


int main()
{
    int choice;

    while(1) {
        cout<<endl;
        printf("*******************MENU*******************\n");
        printf("\t 1.Insert Item     \n");
        printf("\t 2.Display    \n");
        printf("\t 3.Insert at the beginning  \n");
        printf("\t 4.Delete from beginning      \n");
        printf("\t 5.Delete from the end        \n");
        printf("\t 6.Exit       \n");
        printf("---------------------------------------\n");
        printf("Enter your choice: ");
        cin>>choice;

        switch (choice) {
        case 1:
            start = addNodeEnd(start);
            break;

        case 2:
            displayList(start);
            break;

        case 3:
            start = addNodeBeg(start);
            break;

        case 4:
            start = delNodeBeg(start);
            break;

        case 5:
            start = delNodeEnd(start);
            break;

        case 6:
            exit(0);
            break;

        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }
    return 0;
}
