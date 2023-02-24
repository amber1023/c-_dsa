#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b);

void segregate_evenNodd(vector<int>& arr)
{
    int l =0, r =arr.size()-1;
    while(l<r)
    {
        while(arr[l]%2==0 && l<r) l++;
        while(arr[r]%2==1 && l<r) r--;
        
        if(l<r)
        {
            swap(&arr[l], &arr[r]);
            l++;
            r--;
            
        }
    }
}
void arrayEvenAndOdd(vector<int> arr)
{
 int n = arr.size();
    int i = -1, j = 0;
    int t;
    while (j != n) {
        if (arr[j] % 2 == 0) {
            i++;
 
            // Swapping even and odd numbers
            swap(arr[i], arr[j]);
        }
        j++;
    }
 
    // Printing segregated array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
/* UTILITY FUNCTIONS */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
   vector<int> arr ={1,2,3,47,9,63,12};
   segregate_evenNodd(arr);

   cout <<"Array after segregation ";
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
        
        
        arrayEvenAndOdd(arr);
}
