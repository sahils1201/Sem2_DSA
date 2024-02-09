#include <iostream>
using namespace std;

struct name
{
    string name;
    int rollnos;
    string DOB;
    int pythm;
    int cpp;
    int *p = &pythm;
    int *p1= &cpp;

};
int main()
{
    name n1;
    cout<<"Enter name-";
    cin>>n1.name;
    cout<<"Enter roll number--";
    cin>>n1.rollnos;
    cout<<"Enter date of birth-";
    cin>>n1.DOB;
    cout<<"Enter Python Marks: ";
    cin>>n1.pythm;
    cout<<"Enter C++ Marks: ";
    cin>>n1.cpp;
    // cout<<"NAME-"<<n1.name<<endl;
    // cout<<"ROLL NUMBER-"<<n1.rollnos<<endl;
    // cout<<"DATE OF BIRTH-"<<n1.DOB<<endl;

}