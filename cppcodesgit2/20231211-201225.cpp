#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

bool iswellpar(const string & expression) {

    stack<char>s;

    for(char bracket:expression) {
        if(bracket=='('||bracket=='{'||bracket=='[') {
            s.push(bracket) ;
        }
        else if (bracket == ')' || bracket == ']' || bracket == '}') {
            if (s.empty()) {
                return false;
            }


            char open=s.top() ;
            s.pop() ;

            if(bracket=='(' && open!=')'||bracket=='{'&&open!='}'||bracket=='['&&open!=']') {
                return false;
            }
        }
    }

    return s.empty() ;
}


int main()
{   cout << "enter expression" << endl;
    string p;
    cin>>p;
    if(iswellpar(p)) {
        cout << "given expression is well parentheised" << endl;
    }
    else {
        cout << "given expression is not well parentheised" << endl;
    }
    return 0;
}