#include<iostream>
#include<algorithm>
using namespace std;

// A utility method to swap two numbers.
/*

1.Sort the array.
2.Traverse the array from index 0 to N-1, and increase the value of the index by 2.
3.While traversing the array swap arr[i] with arr[i+1].
Print the final array.
*/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// This function sorts arr[0..n-1] in wave form, i.e.,
// arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5]..
void sortInWave(int arr[], int n)
{
	// Sort the input array
	sort(arr, arr+n);

	// Swap adjacent elements
	for (int i=0; i<n-1; i += 2)
		swap(&arr[i], &arr[i+1]);
}

//time complexity ----O(n*logn)

/*

Second Approach
The idea is based on the fact that if we make sure that all even positioned (at index 0, 2, 4, ..)
elements are greater than their adjacent odd elements, we don’t need to worry about oddly positioned elements. 
with Tiime complexity ----O(n)
*/
void sortInWave2(int arr[], int n)
{
    // Traverse all even elements
    for (int i = 0; i < n; i+=2)
    {
        // If current even element is smaller than previous
        if (i>0 && arr[i-1] > arr[i] )
            swap(&arr[i], &arr[i-1]);
 
        // If current even element is smaller than next
        if (i<n-1 && arr[i] < arr[i+1] )
            swap(&arr[i], &arr[i + 1]);
    }
}


int main()
{
	int arr[] = {10, 90, 49, 2, 1, 5, 23};
	int n = sizeof(arr)/sizeof(arr[0]);
	//sortInWave(arr, n);
	sortInWave2(arr, n);
	for (int i=0; i<n; i++)
	cout << arr[i] << " ";
	return 0;
}
