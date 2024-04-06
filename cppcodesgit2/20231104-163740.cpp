#include<iostream>
using namespace std;
class series{
public:
int n;
double sum;
 series(){
 sum=0;
cout << "enter the value of n:" << endl;
cin>>n;
}
double calc_series() ;
void display_result() ;
};
double series::calc_series() {

for(int I=1;I<=n;I++) {
sum=sum+(I*I);
}
return sum;
}
void series::display_result() {
cout << "answer:" << endl;
cout << calc_series() << endl;
}
int main()
{   series s1;
    s1.display_result() ;
    return 0;
}