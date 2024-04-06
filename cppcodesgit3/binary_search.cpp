#include<iostream>
using namespace std;


int binary_search(int a[],int n,int ele) {
 
    int mid, l, r;
    l=0;
    r=n-1;
    while(l<=r) {
    mid=(l+r) /2;

    if(a[mid]==ele) {
        return mid;
    }
    else if(a[mid]<ele) {
        l=mid+1;
    }
    else {
        r=mid-1;
    }
    
    }
    return -1;
}
int main()
{
    int a[]= {10,12,14,16,18,20};
    
    cout << "element to find" << endl;
    int p;
    int n=6;
    cin>>p;
    int result=binary_search(a,n,p) ;
    if(result==-1) {
    cout << "element absent" << endl;
    }
    else{
    cout << "element present at index " <<result<<endl;
    }
    return 0;
}