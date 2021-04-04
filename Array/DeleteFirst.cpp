#include<iostream>
using namespace std;

void deleteFirst(int arr[], int n) {

    cout<<"Before Deletion: ";
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    for (int i=0; i<n-1; i++)
        arr[i] = arr[i+1];
    n--;

    cout<<endl;
    cout<<"After Deletion: ";
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
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

    deleteFirst(arr, n);

    return 0;
}
