// Write a progrm to find out the percernt of students who passed and the persent of students who failed.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of Students: ";
    cin >> n;
    int arr[n];
    int pass = 0;
    int fail = 0;
    for(int i =0;i<=n-1;i++)
    {
        cout<<"Enter marks of Student "<<i+1<<":";
        cin>>arr[i];
        if(arr[i]<40)
        {
            fail++;
        }
        else if(arr[i]>=40)
        {
            pass++;
        }
    }
    int passper=pass*100/n;
    int failper=fail*100/n;
    cout<<"The Percentage of students who have passed are: "<<passper<<"%"<<endl;
    cout<<"The Percentage of students who have failed are: "<<failper<<"%";
}