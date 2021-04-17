#include<iostream>
using namespace std;

int print(int n) {
    if (n == 0)
        return 1;
    else {
        cout<<n<<" ";
        return print(n-1);
    }
}

int main()
{
    int num;

    cout<<"Enter Number: ";
    cin>>num;

    print(num);

    return 0;
}
