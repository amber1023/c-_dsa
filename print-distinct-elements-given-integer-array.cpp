#include <bits/stdc++.h>
#include<iostream>
using namespace std;

/*using set function to solve to print distcincet numbers*/

void using_set(vector<int> v)
{
    set<int> s(v.begin(), v.end());
    for(auto it :s){
        cout<<it<<" ";
     
    }
    
}

/*using iteration*/
void printDistinctElemnets(vector<int> v)
{
    int n = v.size();
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++)
    {
        while(i<n-1&& v[i] == v[i+1])
         i++;
         
         cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v{10, 5, 3, 4, 3, 5, 6};
    
//using_set(v);
printDistinctElemnets(v);
    return 0;
}
