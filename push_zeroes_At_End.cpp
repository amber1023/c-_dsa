#include<bits/stdc++.h>
using namespace std;
void move_zero_to_right(vector<int>& m)
{
    int count =0;
    int length = m.size();
    for(int i =0;i<length;i++)
    {
        if(m[i] ==0)
        {
            count++;
            //deleting eleent
            m.erase(m.begin()+i);
            i--;
            //length--
            length--;
        }
    }
    
    for(int i=0;i<count;i++)
    {
        m.push_back(0);
    }
    cout<<"Array after shifting zeroes to right"<<endl;
    
    for(int i=0;i<m.size();i++)
    {
        cout<<m[i]<<" ";
    }
}
void push_zero_using_library(vector<int>& arr)
{
    stable_partition(arr.begin(), arr.end(),[](int n){ return n!=0;});
}
int main()
{
    vector<int> arr{1,9,8,4,0,0,2,7,0,6,0,9};
    
   /* push_zero_using_library(arr);
    for(const auto& i :arr)
        cout<<i<<' ';*/
        
        move_zero_to_right(arr);
        

}
