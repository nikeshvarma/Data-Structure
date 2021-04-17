#include<iostream>
using namespace std;

void primeFactor(int num) {

    for (int i=2; i<=num; ) {
        if (num % i == 0) {
            cout<<i<<" ";
            num /= i;
        } else
            i++;
    }
}

int main()
{
    int num;

    cout<<"Enter Number: ";
    cin>>num;

    cout<<"Prime Factors: ";
    primeFactor(num);

    return 0;
}
