#include<iostream>
using namespace std;

long long int fibonacci(long long int n) {
    if (n == 1 || n == 0) {
        return n;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main()
{
    long long int num, i=-1;

    cout<<"Enter Number: ";
    cin>>num;

    while(i++ < num)
        cout<<fibonacci(i)<<" ";

    return 0;
}
