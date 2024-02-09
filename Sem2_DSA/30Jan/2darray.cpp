#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows(m) and columns(n): ";
    cin>>m>>n;
    int arr[m][n];
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter Elements: ";
            cin>>arr[i][j];
        }
    }
    //Displaying elements in array
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl<<arr[m-1][n-1];
}