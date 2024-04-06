#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{   
    int arr[]= {23,688,2818,8,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    pair<int*, int*> p = minmax_element(arr, arr + n);
    cout << "min: " << *p.first << endl;
    cout << "max: " << *p.second << endl;
    
    return 0;
}
    