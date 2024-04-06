#include<iostream>
using namespace std;


int main(int argc, char **argv)
{   cout << "total no. of arguments passed" << endl;
    cout << argc << endl;
    int counter;
    if(argc==1) {
     cout << "no arguments added! " << endl;
    }
    else if(argc>=2){
     cout << "entered arguments are:" << endl;
     for(counter=0;counter<argc;counter++) {
      cout << "argv["<<counter<<"]= "<<argv[counter]<< endl;
     }
    }
    
    return 0;
}