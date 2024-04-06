#include<iostream>
using namespace std;
template<class T>
class selection_sort {
 public:
 T a[10];
 void getdata() {
 cout << "enter contents of array" << endl;
 for(int I=0;I<10;I++) {
  cin >> a[I];
 }
 }
 void sortthearray() {
  int minidx;
  for(int I=0;I<10;I++) {
    minidx=I;
    for(int j=I+1;j<10;j++) {
     if(a[j]<a[minidx]) {
      minidx=j;
     }
    }
    if(minidx!=I) {
      swap(a[minidx],a[I]) ;
    }
  }
 }
 void display() {
 for(int I=0;I<10;I++) {
   cout << a[I]<< endl;
 }
 }
};
int main()
{  // selection_sort<int>a1;
 //   a1.getdata() ;
//    a1.sortthearray() ;
//   a1.display() ;
    
    selection_sort<float>a1;
    a1.getdata() ;
    a1.sortthearray() ;
    a1.display() ;
    return 0;
    
    
}