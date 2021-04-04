#include<iostream>
using namespace std;

void insertAtPos(int arr [], int n, int elem, int pos) {

    if (pos < n) {
        cout<<endl<<"Before Insertion: ";
        for (int i=0; i<n; i++)
            cout<<arr[i]<<" ";

        arr[pos] = elem;

        cout<<endl<<"After Insertion: ";
        for (int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    } else {
        cout<<"Position is out of array"<<endl;
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

    cout<<"Enter new Element: ";
    cin>>elem;

    cout<<"Enter element position: ";
    cin>>pos;

    insertAtPos(arr, n, elem, pos);

    return 0;
}
