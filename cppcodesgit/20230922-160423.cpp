#include<iostream>
#include<list>
using namespace std;
void display(list <int> &l1) {
    list<int>::iterator it;
    for(it=l1.begin(); it!=l1.end(); it++) {
        cout << *it << endl;
    }

}
int main()
{   list<int>lis_t;
    list<int>::iterator iter;
    iter=lis_t.begin() ;
    int ele;
    int n;
    cout << "enter no. of elements:" << endl;
    cin>>n;

    for(int I=0; I<n; I++) {

        cout << "enter elements:" << endl;
        cin>>ele;
        lis_t.push_back(ele) ;
    }
    display(lis_t) ;
    cout << endl;
   // lis_t.pop_back() ;
 //   display(lis_t) ;
  //  lis_t.pop_front() ;
 //   display(lis_t) ;
   // lis_t.sort() ;
//    display(lis_t) ;
//    lis_t.reverse() ;
//   display(lis_t) ;
   
  // lis_t.merge(lis_t2) ;
//  lis_t.resize(10) ;
 // display(lis_t) ;
    return 0;
}