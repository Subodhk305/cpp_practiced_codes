#include<iostream>
#include<algorithm>
using namespace std;

int main()
{   int arr[]={1,45,7,98,22,33};
    sort(arr, arr+6,greater<int>()) ;
    for(int I=0;I<5;I++) {
    cout << arr[I]<< endl;
    }
    sort(arr, arr+5) ;
    
    return 0;
}