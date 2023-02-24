#include <bits/stdc++.h>
using namespace std;

int find_element1(int a[], int n)
{
    int res = a[0];
    for(int i =1;i<n;i++)
    
        res=res^a[i];
        
    return res;
    
}

int find_element2(int arr[], int n)
{
    int l=0, h =n-2;
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(arr[mid]==arr[mid^1])
         l = mid+1;
         else
         h = mid-1;
    }
    return arr[l];
}
int main()
{
    int arr[]={2,3,5,4,5,3,4};
    cout<<"first__function: "<<"time complexity :O(n)           "<<find_element1(arr, 7) <<"\n\n";
    cout<<"second__function 2: "<<"time complexity :O(n*log(n))       "<<find_element2(arr, 7);
    return 0;
}
