#include<iostream>
using namespace std;
 
 class data{
 public:
  float hrs;
  float sec;
  float min;
  float  j=60.0;
  float k=60.0;
  data() :hrs(1), sec(2), min(3) {}
  
 data(float time){
  hrs=(float)time/60;
  
  min=time-(hrs*60);
  sec=min/j;
  }
  
   void display() const {
  cout << "hours :"<<hrs<< endl;
  cout << "minutes :"<<min<< endl;
  cout << "seconds :"<<sec << endl;
  }
 };
int main()
{   data d;
    d.display() ;
    cout <<  endl;
    
    cout << "enter m:" << endl;
    float m;
    cin>>m;
    
    data p;
    p=m;
    p.display() ;
     
    return 0;
}