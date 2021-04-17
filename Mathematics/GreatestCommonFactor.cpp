#include<iostream>
using namespace std;

/*


int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
*/

int GCD(int a, int b) {
    int max = b, gcd=1;

    if (a > b)
        max = a;

    for (int i=2; i<max; ) {
        if (a % i == 0 && b % i == 0) {
            gcd *= i;
            a = a/i;
            b = b/i;
        } else
            i++;
    }
    return gcd;
}

int main()
{
    int a, b;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Greatest Common Divisor: "<<GCD(a, b)<<endl;

    return 0;
}
