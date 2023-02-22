#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    
    sort(arr, arr+5);
    int check = 0, count = 1;
    for (int i = 1; i <= 5; i++) {
        if (count < 4) {
            if (check != arr[5 - i]) {
                // to handle duplicate values
                cout << arr[5 - i] << " ";
                check = arr[5 - i];
                count++;
            }
        }
        else
            break;
    }
    

    return 0;
}
