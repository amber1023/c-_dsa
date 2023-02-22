#include<bits/stdc++.h>
using namespace std;
void printSubarray(vector<int> arr, int start , int end)
{
    if(end == arr.size()) return;
    else if (start> end)
       printSubarray(arr,0,end+1);
    else
    {
        cout<<"[";
        for(int i= start;i<end;i++)
          cout<<arr[i]<<", ";
        cout<<arr[end]<<"]"<<endl;
        printSubarray(arr, start +1,end);
        
    }
    return;
}
    int main()
{
    vector<int> arr ={1,2,3};
    printSubarray(arr, 0,0);
}
