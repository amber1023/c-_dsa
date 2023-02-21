#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high, int key)
{
    if (high < low)
        return -1;
    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (key == arr[mid])
        return mid;
    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);
    return binarySearch(arr, low, (mid - 1), key);
}
 
int insertSorted(int arr[], int n, int key, int capacity)
{
    // Cannot insert more elements if n is already
    // more than or equal to capacity
    if (n >= capacity)
        return n;
 
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--)
        arr[i + 1] = arr[i];
 
    arr[i + 1] = key;
 
    return (n + 1);
}

int main()
{
    
    int arr[] = { 5, 6, 7, 8, 9, 10 };
    int n, key;
 
    n = sizeof(arr) / sizeof(arr[0]);
    key = 10;
 
    // Function call
    cout << "Index: " << binarySearch(arr, 0, n - 1, key) << endl;
    
    
    int i, key1 = 26;
 
    cout << "\nBefore Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    // Function call
    n = insertSorted(arr, 6, key1, n);
 
    cout << "\nAfter Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
  
  
}
