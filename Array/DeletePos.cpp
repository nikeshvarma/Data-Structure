#include<iostream>
using namespace std;

void deletePos(int arr[], int n, int pos) {
    if (pos < n) {
        cout<<"Before Deletion: ";
        for (int i=0; i<n; i++)
            cout<<arr[i]<<" ";

        for (int i=pos; i<n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;

        cout<<"After Deletion: ";
        for (int i=0; i<n; i++)
            cout<<arr[i]<<" ";

    } else {
        cout<<"Out Of Array"<<endl;
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

    cout<<"Enter Position: ";
    cin>>pos;

    deletePos(arr, n, pos);

    return 0;
}

