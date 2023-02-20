#include<bits/stdc++.h>
using namespace std;
/*
Approach 1 (Using temp array): This problem can be solved using the below idea:

After rotating d positions to the left, the first d elements become the last d elements of the array

First store the elements from index d to N-1 into the temp array.
Then store the first d elements of the original array into the temp array.
Copy back the elements of the temp array into the original array
*/
void rotate_using_temp(int* arr, int d, int n)
{
    int temp[n];  //Space complexity ----- O(n)
    
    // keeping track of current Index of temp[]
    int k =0;
    
    //storing n-d elemtents of  array arr[] to the front of temp[]
    
    for(int i=d;i<n;i++)
    {
        temp[k] = arr[i];
        k++;
    }
    /////time coplexity ---------O(n-d)                      (i)
    
    for(int i =0;i<d;i++)
    {
        temp[k]= arr[i];
        k++;
    }
    ////time_complexity ------------- O(d)                (ii)
    
    
    for(int i=0;i<n;i++)
    {
        /*now copy inisde original elemtents 
        
        */
        
        arr[i] = temp[i];
    }
    
    //////time complexity -----O(n)                      (iii)
}




void display_using_temp(int* arr, int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    /////time complexity   ----------O(n)                  (iv)
}


/*
Approach 2 (Rotate one by one): This problem can be solved using the below idea:

At each iteration, shift the elements by one position to the left circularly (i.e., first element becomes the last).
Perform this operation d times to rotate the elements to the left by d position.
*/

void rotate_one_by_one_position(int arr[], int d, int n)
{
    int p=1;// spcace complexity ======== 1                       (a)
    while(p<=d)
    {
        int last = arr[0]; //last =5
        //traverse from a[0] to a[n-2] 
        for(int i =0;i<n-1;i++)
        {
            //store next elemnt of arr to previous elements
            arr[i]= arr[i+1];
            
        }
     //time_complexity--------------------O(n-1)                 (i)
        arr[n-1]= last; 
       
        p++;
        
}
///time complexity -----------------------O(n*d)                    (ii)


}


void print_for_one_by_one(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
/////time_complexity--------------------O(n)                  iii)


int main()
{
    int arr[]= {5,5,7,6,3};
    int n = sizeof(arr)/sizeof(arr[0]);//space _Complex = O(n)
    int d =3;
    
    //function call for using temp
    rotate_using_temp(arr, d, n);
    display_using_temp(arr, n);
    /*
    space complexity ====O(n)
    Time cpmplexity add eqution O(n-d)+O(d) + O(n)+O(n) = n-d+d+n+n 3n =_ O(n)
    */
    
    
    
    //function call for using one by one
   rotate_one_by_one_position(arr, d, n);
   print_for_one_by_one(arr,n);
    /*
    space complexity ====O(1)
    Time cpmplexity add eqution O(n-1)+O(n*d) + O(n)+O(n) =O(n*d)
    */
    
}
