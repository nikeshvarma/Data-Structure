#include<iostream>
using namespace std;

typedef struct Node *node;

struct Node {
    int data;
    Node *pre;
    Node *nxt;
};

node head = NULL;

node createNode() {
    node temp = (node)malloc(sizeof(struct Node));
    cout<<"Enter Value: ";
    cin>>temp->data;
    temp->nxt = NULL;
    temp->pre = NULL;
    return temp;
}

node addNodeEnd(node head) {
    node temp = createNode();
    node ptr = head;

    if (head == NULL) {
        head = temp;
    } else {

        while (ptr->nxt != NULL)
            ptr = ptr->nxt;

        ptr->nxt = temp;
        temp->pre = ptr;
    }
    return head;
}

node addNodeBeg(node head) {
    node temp = createNode();
    node ptr = head;

    if (head == NULL) {
        head = temp;
        return head;
    }
    else {
        temp->nxt = head;
        head->pre = temp;
        return temp;
    }
}

node addNodePos(node head) {
    node temp = createNode();
    node ptr = head;
    int pos, len=0, i=0;

    if (head == NULL)
        head = temp;
    else {
        while (ptr != NULL) {
                len++;
                ptr = ptr->nxt;
            }

        cout<<"Enter Position: ";
        cin>>pos;

        ptr = head;

        if (pos < len) {
            while(ptr != NULL) {
                if (++i == pos-1) {
                    ptr->nxt->pre = temp;
                    temp->nxt = ptr->nxt;
                    temp->pre = ptr;
                    ptr->nxt = temp;
                    break;
                    }
                ptr = ptr->nxt;
                }
        } else
            cout<<"Invalid Position"<<endl;
    }
    return head;
}

node delNodeBeg(node head) {

    if (head == NULL) {
        cout<<"List is Empty"<<endl;
        return NULL;
    } else if (head->nxt == NULL) {

        delete head;
        return NULL;

    } else {
        head = head->nxt;
        head->pre = NULL;
        return head;
    }
}

node delNodeEnd(node head) {
    node ptr = head;

    if (head == NULL) {
        cout<<"List is Empty"<<endl;
        return NULL;
    } else if (head->nxt == NULL) {
        delete head;
        return NULL;
    } else {
        while (ptr->nxt->nxt != NULL)
            ptr = ptr->nxt;
        ptr->nxt->pre = NULL;
        ptr->nxt = NULL;
        return head;
    }
}

node delNodePos(node head) {
    node ptr = head, temp;
    int pos, len=0, i=0;

    if (head == NULL)
        return NULL;

    else {
        while (ptr != NULL) {
                len++;
                ptr = ptr->nxt;
            }

        cout<<"Enter Position: ";
        cin>>pos;

        ptr = head;

        if (pos < len) {
            while(ptr != NULL) {
                if (++i == pos-1) {
                temp = ptr->nxt->nxt;
                temp->pre = ptr;
                ptr->nxt = temp;
                break;
                }
                ptr = ptr->nxt;
            }
        } else {
            cout<<"Invalid Position"<<endl;
        }
        return head;
    }
}

void displayList(node head) {
    node ptr = head;

    if (ptr != NULL) {
        while(ptr != NULL) {
            cout<<ptr->data<<" ";
            ptr = ptr->nxt;
        }
    } else {
        cout<<"List is empty"<<endl;
    }
}

void displayListReverse(node head) {
    node ptr = head;

    while (ptr->nxt != NULL)
        ptr = ptr->nxt;

    while(ptr != NULL) {
        cout<<ptr->data<<" ";
        ptr = ptr->pre;
    }
}

int main()
{
    int choice;

    while(1) {
        cout<<endl;
        printf("*******************MENU*******************\n");
        printf("\t 1. Insert Item     \n");
        printf("\t 2. Display    \n");
        printf("\t 3. Display Reverse   \n");
        printf("\t 4. Insert at the beginning  \n");
        printf("\t 5. Insert at specified position       \n");
        printf("\t 6. Delete from beginning      \n");
        printf("\t 7. Delete from the end        \n");
        printf("\t 8. Delete from specified position     \n");
        printf("\t 9. Exit       \n");
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
            displayListReverse(head);
            break;

        case 4:
            head = addNodeBeg(head);
            break;

        case 5:
            head = addNodePos(head);
            break;

        case 6:
            head = delNodeBeg(head);
            break;

        case 7:
            head = delNodeEnd(head);
            break;

        case 8:
            head = delNodePos(head);
            break;

        case 9:
            exit(0);
            break;

        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }

    return 0;
}
