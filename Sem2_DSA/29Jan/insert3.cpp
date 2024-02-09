#include<iostream>
using namespace std;

void fun(int pos,int size,int arr[],int value)
{
    for(int i = size+1;i>=pos;i--)
    {
        arr[i+1] = arr[i];   
    }
    size=size+1;
    arr[pos] = value;
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main (){
    int arr[30];
    int n, position,value;
    cout<<"Enter the no. of elements";
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter the elements"<<i+1<<":";
        cin>>arr[i];
    }
        cout<<"Enter the index";
    cin>>position;
    cout<<"Enter the value you want to insert";
    cin>>value;
    fun(position,n,arr,value);
    return 0;
}