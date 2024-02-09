// Write a program to swap the largest and the smallest elements in an array.
#include <iostream>
using namespace std;

void largest_smallest(int arr[], int n) {
    int max = 0, min = 0;
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[max]) {
            max = i;
        }
        else if (arr[i] < arr[min]) {
            min = i;
        }
    }

    cout << "Original Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int temp = arr[max];
    arr[max] = arr[min];
    arr[min] = temp;

    cout << "Swapped Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    largest_smallest(arr, n);

    return 0;
}