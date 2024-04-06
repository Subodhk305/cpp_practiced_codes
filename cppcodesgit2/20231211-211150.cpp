#include<iostream>
using namespace std;

void ins(int a[],int n) {
for(int I=1;I<n;I++) {
 int temp=a[I];
 int j=I-1;
 
 while(a[j]>temp && j>=0) {
  a[j+1]=a[j];
  j--;
 
 }
 a[j+1]=temp;
}
}
int main()
{   int A[]={23,1,617,818,9,0};
    int n=sizeof(A)/sizeof(int);
    ins(A,n) ;
    for(int I=0;I<n;I++) {
     cout << A[I]<<"\t";
    }
    return 0;
}