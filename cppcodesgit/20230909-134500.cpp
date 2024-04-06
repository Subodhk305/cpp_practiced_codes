#include<iostream>
#include<cmath>
using namespace std;
class simp_calc {
protected:
    int a;
    int b;
public:
    void setdata(int s, int d) {
        a=s;
        b=d;

    }
    int sum(int a, int b) {
        return a+b;

    }
    int sub(int a, int b) {
        return a-b;

    }
    int mul(int a, int b) {
        return a*b;

    }
    int div(int a, int b) {
        return a/b;

    }

};

class sci_calc:public simp_calc {
    /*protected:
    int z;
    int w;
    public:
    void set_data(int g, int h){
    z=g;
    w=h;

    }
    int sum1(int z, int w) {
    return z+w;

    }
    int sub2(int z, int w) {
    return z-w;

    }
    int mul3(int z, int w) {
    return z*w;

    }
    int div4(int z, int w) {
    return z/w;

    }*/

    int sq_rt(int a) {
        return sqrt(a);

    }
};

class hybridclass:public simp_calc, public sci_calc {

public:
    void display() {
        cout << "sum is:"<<sum()<< endl;
        

    }
    void display2() {
    
     cout << "sq root is:"<<sq_rt()<< endl;

    }


};

int main()
{
    int ent;
    cout << "do you want to use scientific calculator or simple calculator: " << endl;
    cout << "for scientific calc(1) for simple calc(2):" << endl;
    cin>>ent;
    if(ent==1) {
        hybridclass s1;
        s1.setdata(5, 7) ;
        s1.sum(5, 7) ;
        s1.display() ;

    }
    else {
        hybridclass s2;
        s2.setdata(8, 9) ;
        s2.sq_rt(36) ;
        s2.display2() ;

    }

    return 0;
}