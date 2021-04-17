#include<iostream>
using namespace std;

int digitSum(int num) {
    if (num == 0)
        return 0;
    else
        return digitSum(num / 10) + num % 10;
}


int main()
{
    int num;

    cout<<"Enter a Number: ";
    cin>>num;

    cout<<"Sum: "<<digitSum(num)<<endl;

    return 0;
}
