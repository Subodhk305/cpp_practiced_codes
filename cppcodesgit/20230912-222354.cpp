#include<iostream>
using namespace std;

class shopitem{
  public:
  int id;
  float price;
  void setdata(int a, float b) {
  id=a;
  price=b;
  }
  void getdata() {
  cout << "id of item is:"<<id<< endl;
  cout << "price of item is:"<<price<< endl;
  }
};

int main()
{   int size=3;
    shopitem *ptr=new shopitem[size];
    shopitem *ptrnew= ptr;
    int p, I;
    float q;
    for(I=0;I<size;I++){
    cout << "enter id and price of items:" << endl;
    cin>>p>>q;
    ptr->setdata(p,q) ;
    ptr++;
    }
    for(I=0;I<size;I++) {
    ptrnew->getdata() ;
    ptrnew++;
    }
    return 0;
}