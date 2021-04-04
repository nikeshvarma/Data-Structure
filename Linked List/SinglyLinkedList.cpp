#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

typedef struct Node *node;

node head = NULL;

struct Node {
    int data;
    Node *next;
};

node createNode() {
    node temp = (node)malloc(sizeof(Node));
    cout<<"Enter Value: ";
    cin>>temp->data;
    temp->next = NULL;
    return temp;
}

node addNodeEnd(node head) {
    node temp, ptr;
    temp = createNode();

    if (head == NULL) {
        head = temp;
    } else {
        ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
    return head;
}

node addNodeBeg(node head) {

    node start = createNode();

    if (head == NULL) {
        head = start;
        return head;
    } else {
        start->next = head;
        return start;
    }
}

node addNodePos(node head) {
    node temp = createNode();
    node next;
    node ptr = head;
    int pos, len=0, i=0;

    if (head == NULL) {

        head = temp;
        return head;

    } else {

        while(ptr != NULL) {
            len++;
            ptr = ptr->next;
        }

        cout<<"Enter Position: ";
        cin>>pos;

        ptr = head;

        if (pos < len) {
            while(ptr != NULL) {
                if (++i == pos) {
                    temp->next = ptr->next;
                    ptr->next = temp;
                    break;
                }
                ptr = ptr->next;
            }

            return head;

        } else
            cout<<"Invalid Position"<<endl;
    }
    return head;
}

node delNodeBeg(node head) {
    if (head != NULL) {
        head = head->next;
        return head;
    } else {
        cout<<"List is Empty"<<endl;
        return head;
    }
}

node delNodeEnd(node head) {
    if (head == NULL) {

        cout<<"List is Empty"<<endl;
        return head;

     } else if (head->next == NULL) {

        delete head;
        return NULL;

     } else {

        node ptr = head;
        while(ptr->next->next != NULL)
            ptr = ptr->next;
        ptr->next = NULL;
        return head;
     }
}

node delNodePos(node head) {
    node ptr = head;
    int pos, len=0, i=0;

    if (head == NULL) {
        cout<<"List is Empty"<<endl;
        return head;
    } else {

        while(ptr != NULL) {
            len++;
            ptr = ptr->next;
        }

        cout<<"Enter Position: ";
        cin>>pos;

        ptr = head;

        if (pos < len) {
            while(ptr != NULL) {
                if (++i == pos-1) {
                    ptr->next = ptr->next->next;
                    break;
                }
                ptr = ptr->next;
            }
            return head;
        } else {
            cout<<"Invalid Position"<<endl;
            return head;
        }
    }
}

void displayList(node head) {
    node ptr = head;

    if (ptr != NULL) {
        while(ptr != NULL) {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    } else {
        cout<<"List is empty"<<endl;
    }
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
        printf("\t 4.Insert at specified position       \n");
        printf("\t 5.Delete from beginning      \n");
        printf("\t 6.Delete from the end        \n");
        printf("\t 7.Delete from specified position     \n");
        printf("\t 8.Exit       \n");
        printf("---------------------------------------\n");
        printf("Enter your choice: ");
        cin>>choice;

        switch (choice) {
        case 1:
            head = addNodeEnd(head);
            break;

        case 2:
            displayList(head);
            break;

        case 3:
            head = addNodeBeg(head);
            break;

        case 4:
            head = addNodePos(head);
            break;

        case 5:
            head = delNodeBeg(head);
            break;

        case 6:
            head = delNodeEnd(head);
            break;

        case 7:
            head = delNodePos(head);
            break;

        case 8:
            exit(0);
            break;

        default:
            cout<<"Invalid Choice"<<endl;
            break;

        }
    }

    return 0;
}
