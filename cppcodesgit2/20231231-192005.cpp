#include<iostream>
using namespace std;
export module mymo;

template<class T>
class mymoduleclass{
public:
mymoduleclass(T a);
void display() ;
private:
T data;
};

template<class T>
mymoduleclass<T>::mymoduleclass(T a){
data=a;
}

template<class T>
void mymoduleclass<T>::display(){
cout << "data is: "<<data << endl;
}

import mymodule;


int main()
{   mymoduleclass<int>obj(23);
    obj.display() ;
    return 0;
}