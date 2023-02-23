#include <bits/stdc++.h>

using namespace std;

int main()
{
   int arr[] ={1,1,1,2,3,4,5,5,6,6};
int n=10;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    for (int i = n - 2; i >= 0; i--) {
        // if the element is not equal to largest element
        if (arr[i] != arr[n - 1]) {
            printf("The second largest element is %d\n",arr[i]);
            
        }
    }
    
}
