#include<iostream>
using namespace std;

int factorial(int num) {
    int static fact = 1;

    if (num <= 1 && num >= 0)
        return fact;
    else
    {
        fact*=num;
        factorial(num-1);
    }
}

int main()
{
    int num;

    cout<<"Enter Number: ";
    cin>>num;

    cout<<"Factorial= "<<factorial(num)<<endl;

    return 0;
}
