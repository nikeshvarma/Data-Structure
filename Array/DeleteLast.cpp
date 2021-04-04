#include<iostream>
using namespace std;

void deleteEnd(int arr[], int n) {
    n--;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n, pos, elem;

    cout<<"Array Size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements: ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    deleteEnd(arr, n);

    return 0;
}
