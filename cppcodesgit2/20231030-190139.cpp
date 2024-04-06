#include<iostream>
using namespace std;

int main()
{

    do {
        int choice;
        int m;
        cout << "1.for age enter (1)" << endl;
        cout << "2.for division enter (2)" << endl;
        cin>>choice;
        switch(choice) {

        case 1:
            int age;
            cout << "enter your age:" << endl;
            cin>>age;
            try {
                if(age>=18) {
                    cout << "YOUR WELCOME!" << endl;
                }
                else {
                    throw(age) ;
                }
            }
            catch(int age) {
                cout << "GET OUT! YOU ARE NOT ALLOWED AS YOUR AGE IS"<<endl;
                cout<<age<<" which is less than 18"<< endl;
            }
            break;
        case 2:

            cout << "enter no. to be divided but 10" << endl;
            float n;
            cin>>n;
            try {
                if(n>0) {
                    float a;
                    a=10/n;
                    cout << "value is:"<<a << endl;
                }

                else {
                    throw(n) ;
                }
            }
            catch(float n) {
                cout << "cannot divide by zero" << endl;
            }
            break;
        default:
            cout << "do you want to contine: for yes (1),for no(0)" << endl;
            // int m;
            cin>>m;

        }
        cout << "do you want to contine: for yes (1),for no(0)" << endl;
       // int m;
        cin>>m;
    } while(m==1);

    return 0;
}