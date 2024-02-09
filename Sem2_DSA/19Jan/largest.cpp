// Write a Cpp Program to find largets and Second largest number from n numbers using an array.
#include <iostream>
using namespace std;

void larsmal(int arr[],int n)
{
    int max=0;
    int seclargest;
    for(int i =0;i<=n-1;i++)
    {
        if (arr[i]>=max)
        {
            seclargest=max;
            max=arr[i];
        }
        else if (arr[i]>max)
        {
            seclargest=arr[i];
        }
        // if(arr[i]<max&&)
    }
    cout<<"The second largest number: "<<seclargest<<endl;
    cout<<"The largest element: "<<max;
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int arr[n];
    for(int i =0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    cout<<"[";
    for(int i =0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
    larsmal(arr,n);
}