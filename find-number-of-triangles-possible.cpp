#include <bits/stdc++.h>
using namespace std;
/*First, sort the array, and run a nested loop, fix an index, and then try to fix an upper and lower 
index within which we can use all the lengths to form a triangle with that fixed index.


1.Sort the array and then take three variables l, r, and i, pointing to start, end-1,
and array element starting from the end of the array.

2.Traverse the array from the end (n-1 to 1), and for each iteration keep the value of l = 0 and r = i-1
3.Now if a triangle can be formed using arr[l] and arr[r] then triangles can obviously be formed
from a[l+1], a[l+2]…..a[r-1], arr[r] and a[i], because the array is sorted , 
which can be directly calculated using (r-l). and then decrement the value of r and continue the loop till l is less than r
4. If a triangle cannot be formed using arr[l] and arr[r] then increment the value of l and continue the loop till l is less than r 
So the overall complexity of iterating 
through all array elements reduces
*/

void CountTriangle(vector<int> A)
{
    int n = A.size();
    sort(A.begin(), A.end());
    int count =0;
    for(int i=n-1; i>=1;i--)
    {
        int l=0, r=i-1;
        while(l<r)
        {
            if(A[l] + A[r] > A[i])
            {
                //if it possible with a[l], a[r]
                //and a[i] then it is also possible 
                //with a[l+1]... a[r-1], a[r] and a[i]
                
                count +=r-l;
                
                r--;
            }
            
            else{
                l++;
            }
        }
        cout<<" No of possible solutions: "<<count;
    }

int main()
{
    vector<int> A ={10, 21, 22, 100, 101, 200, 300};
    CountTriangle(A);

    return 0;
}
