#include <iostream>
using namespace std;

void insertatbeginning(int* arr,int &a,int element){
    for(int i=a-1; i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]= element;

    for(int i=0;i<a+1;i++){
       cout<<arr[i]<<" ";
    }cout << endl;
}

int main(){

    int n,element;
    cout<<"Enter a size of array-";
    cin>>n;
    int arr[n+1];

    cout<<"Enter elements into array-";
    for(int i = 0; i < n; i++){
    cin>>arr[i];
    }

    cout<<"Enter element yo want to insert-";
    cin>>element;

    insertatbeginning(arr,n,element);

}