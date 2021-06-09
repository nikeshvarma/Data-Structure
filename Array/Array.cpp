/*Array Operations*/

#include<iostream>
using namespace std;

#define MAX 10

int arr[MAX], current = -1;

int getInput() {
    int value;

    cout<<"Enter value: ";
    cin>>value;

    return value;
}

bool isEmpty() {
    return current == -1;
}

bool isFull() {
    return current == MAX-1;
}

void display() {
    if (isEmpty()) {
        cout<<"Array is empty"<<endl;
    } else {
    cout<<"Array: ";
    for (int i=0; i<=current; i++)
        cout<<arr[i]<<" ";
    }
}


void insertFront() {
    if (isFull())
        cout<<"Array is Full"<<endl;
    else {
        for (int i=current+1; i>=0; i--)
            arr[i+1] = arr[i];

        arr[0] = getInput();
        current++;
    }
}

void insertEnd() {
    if (isFull())
        cout<<"Array is Full"<<endl;
    else
        arr[++current] = getInput();
}

void insertPos() {
    int pos;

    if (isFull()) {
        cout<<"Array is full"<<endl;

    } else {
        cout<<"Enter Position: ";
        cin>>pos;

        if (pos < MAX) {
            for (int i=current; i>=pos-1; i--)
                arr[i+1] = arr[i];
            arr[pos-1] = getInput();
            current++;
        } else {
            cout<<"Position is out of array size"<<endl;
        }
    }
}

void deletePos() {
    int pos;

    if (isEmpty())
        cout<<"Array is Empty"<<endl;
    else {
        cout<<"Enter Position: ";
        cin>>pos;

        if (pos < MAX) {
            for (int i=pos-1; i<current; i++)
                arr[i] = arr[i+1];
            current--;
        } else {
            cout<<"Position is out of array size"<<endl;
        }
    }
}

void deleteFront() {
    if (isEmpty()) {
        cout<<"Array is Empty"<<endl;
    } else {
        for (int i=0; i<=current; i++)
            arr[i] = arr[i+1];
        current--;
    }

}

void deleteEnd() {
    if (isEmpty())
        cout<<"Array is Empty"<<endl;
    else
        current--;
}

int main ()
{
    int choice;

    while(1) {

        cout<<endl<<"*************** MENU ***************"<<endl<<endl;
        cout<<"1. Insert Front"<<endl;
        cout<<"2. Insert End"<<endl;
        cout<<"3. Insert at Position"<<endl;
        cout<<"4. Delete Front"<<endl;
        cout<<"5. Delete End"<<endl;
        cout<<"6. Delete at Position"<<endl;
        cout<<"7. Display"<<endl;
        cout<<"8. Exit"<<endl;

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
            insertPos();
            break;

        case 4:
            deleteFront();
            break;

        case 5:
            deleteEnd();
            break;

        case 6:
            deletePos();
            break;

        case 7:
            display();
            break;

        case 8:
            exit(0);
            break;

        default:
            cout<<"Invalid Option"<<endl;
        }
    }
    return 0;
}
