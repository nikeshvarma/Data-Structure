#include<iostream>
using namespace std;


bool checkPalindrome(string num) {
    int len=0;

    for (int i=0; num[i]!='\0'; i++)
        len++;

    for (int i=0; i<len/2; i++)
        if (num[i] != num[len-i-1])
            return false;

    return true;
}


int main()
{
    string num;

    cout<<"Enter Number: ";
    cin>>num;

    if (checkPalindrome(num))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;

    return 0;
}
