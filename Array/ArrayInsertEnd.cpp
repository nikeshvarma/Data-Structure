#include<iostream>
using namespace std;

int main()
{
    int n, element;

    cout<<"Array Size: ";
    cin>>n;
    n++;

    int arr[n]={0};

    cout<<"Enter elements: ";
    for (int i=0; i<n-1; i++) {
        cin>>arr[i];
    }

    cout<<"Enter new Element: ";
    cin>>element;

    arr[n-1] = element;

    for  (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
