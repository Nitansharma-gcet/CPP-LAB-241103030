// 1. Find Maximum and Minimum 
// Write a program to input n integers in an array and find the maximum and 
// minimum element using a function that takes an array pointer as a parameter. 

#include <iostream>
using namespace std;

void findMaxMin(int arr[], int n, int &max, int &min) {
    max = min = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter  elements:" ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max, min;
    findMaxMin(arr, n, max, min);

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}