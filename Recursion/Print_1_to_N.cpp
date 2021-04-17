#include<iostream>
using namespace std;

int print(int i, int n) {
    if (i == n+1)
        return 1;
    else {
        cout<<i<<" ";
        return print(i + 1, n);
    }
}

int main()
{
    int num;

    cout<<"Enter Number: ";
    cin>>num;

    print(1, num);

    return 0;
}
