#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of Students: ";
    cin >> n;
    int dsa[n];
    int cpp[n];
    int pyth[n];
    int dsapass = 0;
    int cpppass = 0;
    int pythpass = 0;
    int dsafail = 0;
    int cppfail = 0;
    int pythfail = 0;
    for(int i =0;i<=n-1;i++)
    {
        cout<<"Enter marks of Student "<<i+1<<" for Data Structures:";
        cin>>dsa[i];
        cout<<"Enter marks of Student "<<i+1<<" for C++:";
        cin>>cpp[i];
        cout<<"Enter marks of Student "<<i+1<<" for Python:";
        cin>>pyth[i];
        cout<<"______________________________________________________"<<endl;
        if(dsa[i]<40)
        {
            dsafail++;
        }
        else if(dsa[i]>=40)
        {
            dsapass++;
        }
        if(cpp[i]<40)
        {
            cppfail++;
        }
        else if(cpp[i]>=40)
        {
            cpppass++;
        }
        if(pyth[i]<40)
        {
            pythfail++;
        }
        else if(pyth[i]>=40)
        {
            pythpass++;
        }
        
    }
    cout<<"The percentage of students who failed DSA are: "<<dsafail*100/n<<"%"<<endl;
    cout<<"The percentage of students who passed DSA are: "<<dsapass*100/n<<"%"<<endl;
    cout<<"The percentage of students who failed C++ are: "<<cppfail*100/n<<"%"<<endl;
    cout<<"The percentage of students who passed C++ are: "<<cpppass*100/n<<"%"<<endl;
    cout<<"The percentage of students who failed Python are: "<<pythfail*100/n<<"%"<<endl;
    cout<<"The percentage of students who passed Python are: "<<pythpass*100/n<<"%";
    // int passper=pass*100/n;
    // int failper=fail*100/n;
    // cout<<"The Percentage of students who have passed are: "<<passper<<"%"<<endl;
    // cout<<"The Percentage of students who have failed are: "<<failper<<"%";
}