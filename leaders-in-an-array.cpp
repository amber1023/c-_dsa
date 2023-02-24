#include <bits/stdc++.h>
using namespace std;
void leaders_in_array(int arr[], int n)
{
    int max_right = arr[n-1];
    /* Rightmost element is always leader */
    cout << max_right << " ";
    for(int i=n-2;i>=0;i--)
    {
        if(max_right < arr[i])
        {
            max_right = arr[i];
            cout<<max_right<<" ";
        }
    }
}
int main()
{
    int arr[]={16,17,4,3,5,2};
    leaders_in_array(arr, 6);
}
