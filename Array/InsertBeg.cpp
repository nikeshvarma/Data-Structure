#include<iostream>
using namespace std;

void insertAtBegin(int arr[], int n, int elem) {
    cout<<endl<<"Before Insertion: ";
    for (int i=0; i<n-1; i++)
        cout<<arr[i]<<" ";

    for (int i=n-1; i>=0; i--)
        arr[i+1] = arr[i];

    arr[0] = elem;

    cout<<endl<<"After Insertion: ";
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";

}

int main()
{
    int n, pos, elem;

    cout<<"Array Size: ";
    cin>>n;
    n++;

    int arr[n];

    cout<<"Enter elements: ";
    for (int i=0; i<n-1; i++) {
        cin>>arr[i];
    }

    cout<<"Enter new Element: ";
    cin>>elem;

    insertAtBegin(arr, n, elem);

    return 0;
}
