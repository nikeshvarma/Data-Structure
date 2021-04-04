#include<iostream>
using namespace std;

int main()
{
    int arr [5];

    cout<<"Enter Array Element: ";
    for (int i=0; i<5; i++) {
        cin>>arr[i];
    }

    cout<<"Element in array: ";
    for (int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
}
