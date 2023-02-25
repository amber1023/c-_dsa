#include <bits/stdc++.h>
using namespace std;
/*Find Subarray with given sum*/
/*Find_Subarray_with_given_sum 
time complexity  ------O(n*n)*/
void Find_Subarray_with_given_sum(int arr[], int n, int sum)
{
    for(int i=0;i<n;i++){
        int cur_sum = arr[i];
        
        if(cur_sum== sum)
        {
            cout<<"sum found at index "<<i<<endl;
            return;
        }
        else
        {
            // Try all subarrays starting with 'i'
            for(int j=i+1;j<n;j++)
            {
                cur_sum += arr[j];
                if(cur_sum == sum)
                {
                    cout << "Sum found between indexes "
                         << i << " and " << j << endl;
                    return;
                }
            }
        }
    }
    cout << "No subarray found";
    return;
}

/*
Start with an empty subarray 
add elements to the subarray until the sum is less than x( given sum ). 
If the sum is greater than x, remove elements from the start of the current subarray.


1.Create two variables, start=0, currentSum = arr[0]
2. Traverse the array from index 1 to end.
3. Update the variable currentSum by adding current element, currentSum = currentSum + arr[i]
4. If the currentSum is greater than the given sum, update the variable currentSum as currentSum = currentSum – arr[start],
and update start as, start++.
5. If the currentSum is equal to given sum, print the subarray and break the loop.

*/
int subArraySum(int arr[], int n, int sum)
{
    /* Initialize currentSum as value of
    first element and starting point as 0 */
    int currentSum = arr[0], start = 0, i;
 
    /* Add elements one by one to currentSum and
    if the currentSum exceeds the sum,
    then remove starting element */
    for (i = 1; i <= n; i++) {
        // If currentSum exceeds the sum,
        // then remove the starting elements
        while (currentSum > sum && start < i - 1) {
            currentSum = currentSum - arr[start];
            start++;
        }
 
        // If currentSum becomes equal to sum,
        // then return true
        if (currentSum == sum) {
            cout << "Sum found between indexes " << start
                 << " and " << i - 1;
            return 1;
        }
 
        // Add this element to currentSum
        if (i < n)
            currentSum = currentSum + arr[i];
    }
 
    // If we reach here, then no subarray
    cout << "No subarray found";
    return 0;
}
int main()
{
   int arr[]={15, 2, 4, 8, 9, 5, 10, 23};
   int sum =23;
  // Find_Subarray_with_given_sum(arr,8, sum);
   
subarray(arr, 8, sum);
    return 0;
}
