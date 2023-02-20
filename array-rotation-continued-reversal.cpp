#include <bits/stdc++.h>

using namespace std;

void rotateArray(vector<int>& arr, int k)
{
    // Find the size of the array
    int n = arr.size();
 
    // Mod k with the size of the array
    // To handle the case where k is greater than the size of the array
    k %= n;
 
    // Reverse the entire array
    reverse(arr.begin(), arr.end());
 
    // Reverse the first k elements
    reverse(arr.begin(), arr.begin() + k);
 
    // Reverse the remaining n-k elements
    reverse(arr.begin() + k, arr.end());
}
int main()
{
    vector<int> arr = { 1, 2, 3, 4, 5 };
 
    // Number of elements to rotate to the right
    int k = 2;
 
    // Call the rotateArray function to rotate the array
    rotateArray(arr, k);
 
    // Print the rotated array
    for (int i : arr) {
        cout << i << " ";
    }
 
    // Return 0 to indicate successful termination of the program
    return 0;
}
