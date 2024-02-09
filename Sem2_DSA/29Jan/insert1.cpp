#include<iostream>
using namespace std;
void insertbet(int pos,int size,int arr[],int value)
{   
    for(int i = size-1;i>=pos;i--)
    {
        arr[i+1] = arr[i];
    }
    size=size+1;
    arr[pos] = value;
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<",";
    }
   
}
int main()
{
    int arr[6];
    int n,position,value;
    cout<<"Enter the no of element";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index";
    cin>>position;
    cout<<"Enter the value";
    cin>>value;
insertbet(position,n,arr,value);
return 0;
}