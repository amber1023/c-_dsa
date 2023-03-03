#include<iostream>
using namespace std;
#define input main
class PosNeg{
    
    public:
    void rearrange(int [], int);
    void swap(int *, int *);
    void printarray(int [],int);
    
};

void PosNeg:: rearrange(int arr[], int n)
{
    //consider pivot 0
    int i=-1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    //pos at end and neg at starting point
    int pos =i+1, neg =0;
    
    //increment the negative index by 2 and poitive by 1

    // i.e., swap every alternate negative
    // number with next positive number
    
    while(pos<n && neg < pos && arr[neg] <0)
    {
        swap(&arr[neg], &arr[pos]);
        pos++;
        neg+=2;
    }
}

void PosNeg::swap(int *a, int *b)
{
    int temp =*a;
    *a=*b;
    *b=temp;
}
void PosNeg :: printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
int input()
{
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    PosNeg pn;
    pn.rearrange(arr,n);
    pn.printarray(arr,n);
    
}
