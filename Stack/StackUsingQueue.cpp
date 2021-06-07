#include <bits/stdc++.h>
using namespace std;

queue <int> q1, q2;

void push(int x) {

        q2.push(x);

        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        queue <int> temp = q1;
        q1 = q2;
        q2 = temp;
}

void pop() {
        if (q1.empty())
            cout<<"Stack is empty"<<endl;
        else
            q1.pop();
}

void display() {
    queue <int> q = q1;

    if (q.empty()) {
        cout<<"Stack is empty"<<endl;
    } else {
        cout<<"Stack: "<<endl;
        while (!q.empty()){
            cout<<q.front()<<endl;
            q.pop();
        }
    }
}

int main() {
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
            int value;
            cout<<"Enter value: ";
            cin>>value;
            push(value);
            break;

        case 2:
            pop();
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
