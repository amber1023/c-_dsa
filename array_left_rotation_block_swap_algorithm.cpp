#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    int i;
    for(i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void swap(int arr[], int fi, int si, int d)
{
    int i, temp;
    for(i=0;i<d;i++)
    {
        temp= arr[fi+i];
        arr[fi+i] = arr[si+i];
        arr[si+i] =temp;
    }
}

void left_rotate_using_recursion(int* arr, int d, int n)
{
    //return if the number of lemnt to be rotated is 0 or equal aaray size_t
    if(d==0 || d==n) return;
    
    //if the number of elemnts rotated is more than array size_t
    if(d>n) d= d%n;
    
    //if the numer os totaed is eactly half of array size_t
    if(n-d== d){ swap(arr, 0, n-d , d); return;}
    
    //if number of elemts to be rotated is ""given ""
    //or ""become shoeter"" by usning d =d%number
    if(d<n-d){
        swap(arr, 0, n-d, d);
        left_rotate_using_recursion(arr, d,n-d);
    }
    else{
        swap(arr, 0, d, n-d);
        left_rotate_using_recursion(arr+n-d, 2*d-n,d)
    }
    
    
}


void left_rotate_using_iteration(int arr[], int d, int n)
{
    int i, j;
    if (d == 0 || d == n)
        return;
 
    /* If number of elements to be rotated is more than
     * array size*/
    if (d > n)
        d = d % n;
 
    i = d;
    j = n - d;
    while (i != j) {
        if (i < j) /*A is shorter*/
        {
            swap(arr, d - i, d + j - i, i);
            j -= i;
        }
        else /*B is shorter*/
        {
            swap(arr, d - i, d, j);
            i -= j;
        }
 
        // printArray(arr, 7);
    }
 
    /*Finally, block swap A and B*/
    swap(arr, d - i, d, i);
}

int main()
{
    int arr = {1, 2, 3, 4, 5, 6, 7};
    //left_rotate_using_recursion(arr,2,7);
    left_rotate_using_iteration(arr,2,7);
    printArray(arr,7);
}
