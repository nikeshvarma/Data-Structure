#include<iostream>
#include<string.h>
using namespace std;

bool check(char str[], int s, int e) {
    if (s == e)
        return true;

    if (str[s] != str[e])
        return false;

    if (s < e+1)
        return check(str, s+1, e-1);

    return true;
}


bool isPalindrome(char str[])
{
    int n = strlen(str);

    if (n == 0)
        return true;

    return check(str, 0, n - 1);
}


int main()
{
    char arr[] = "nayan";

    if (isPalindrome(arr))
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

    return 0;
}
