// 2. Reverse an Array 
// Write a program to reverse an array of size n using pointers (do not use indexing 
// like arr[i]). 

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Enter sixe of array: " << endl;
    cin >> n;
    int arr[n];
    int *st = arr;
    int *end = arr + n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> *(st+i);
    }
    while (st < end)
    {
        swap(*st,*end);
        st++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}