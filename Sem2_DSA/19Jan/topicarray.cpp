#include <iostream>
using namespace std;

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
    cout<<"]";
    int sum=0;
    for(int i =0;i<=n-1;i++)
    {
        sum+=arr[i];
    }
    cout<<endl;
    int mean;
    mean = sum/n;
    cout<<"The mean is "<<mean;
}
// Write a Cpp Program to find largets and Second largest number from n numbers using an array.