#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{   int arr[]= {23,688,2818,8,1,0};
    //int b=sizeof(arr) /sizeof(int) ;
 //   cout << "size is:"<<b << endl;
  //  cout <<  endl;
    pair<int, int> p = minmax_element(arr, arr+6) ;
    
    cout << "min:"<<p.first<< endl;
    cout << "max:" <<p.second<< endl;
    
    return 0;
}