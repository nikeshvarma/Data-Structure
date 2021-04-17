#include<iostream>
using namespace std;

bool checkPrime(int num) {
    if (num < 2)
        return false;

    for (int i=2; i<=num/2; i++)
        if (num % i == 0)
            return false;
    return true;
}

int main()
{
    int num;

    cout<<"Enter Number: ";
    cin>>num;

    if (checkPrime(num))
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime"<<endl;

    return 0;
}
