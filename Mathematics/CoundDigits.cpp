#include<iostream>
using namespace std;

int countDigit(int num) {
    static int size = 0;
    if (num <= 0)
        return size;
    else
    {
        size++;
        countDigit(num/10);
    }
}

int main ()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    cout<<"Length = "<<countDigit(num)<<endl;
    return 0;
}
