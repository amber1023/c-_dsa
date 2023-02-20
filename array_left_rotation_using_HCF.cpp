#include <bits/stdc++.h>
using namespace std;
/*
Instead of moving one by one, divide the array into different sets where the number of sets is equal to the GCD of N and d (say X. So the elements which are X distance apart are part of a set) and rotate the elements within sets by 1 position to the left. 

Calculate the GCD between the length and the distance to be moved.
The elements are only shifted within the sets.
We start with temp = arr[0] and keep moving arr[I+d] to arr[I] and finally store temp at the right place.
*/

int hcf(int a, int b)
{
    if(b==0)
      return a;
    else
      return hcf(b, a%b);//recursion
}

void lefttoRotate(int* arr, int d, int n)
{
    //to handle if if d>=n
    
    d= d%n;
    int h_c_f = hcf(d,n);
    for(int i=0;i<h_c_f;i++)
    {
        int temp = arr[i];
        int j = i;
        while(1)
        {
            int k = j+d; //increment hota rahega jb tk shift na hojaye
            if(k>=n)
               k= k-n; ///aur yeh k hamesha n chota hoga aur elemnt position
                        //bhi bateya
               
            if(k==i) break; //kyoki hame posoition mil gyi isliye break 
            
            arr[j] = arr[k]; 
            j=k;
            
              
        }
        arr[j]= temp;
    }
}

void print_Array(int arr[], int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={4,5,6,3,8};
    int n=5;
    lefttoRotate(arr, 2, n);
    print_Array(arr,n);

    return 0;
}
//time complexity ----------O(n)
//space --------O(1)
