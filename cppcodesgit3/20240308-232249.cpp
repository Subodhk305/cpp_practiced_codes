#include<iostream>
#include<cstring>
using namespace std;

void compareString() {
    string a;
    cout<<"Enter the value of the string: " <<endl;
    cin>>a;

    int charCount[256] = {0};
    int uniqueCharCount = 0;

    for(int i=0; i<a.length(); i++) {
        charCount[a[i]]++;
        if (charCount[a[i]]==1) {
            uniqueCharCount++;
        }
    }

    bool flag = false;

    for(int i=0; i<256; i++) {
        if(charCount[i]>1) {
            flag=true;
            cout<<"Repeating character of string: "<< static_cast<char>(i)<< endl;
        }
    }

    if(!flag) {
        if(uniqueCharCount==a.length()) {
             cout << "No character is repeated in the string given." << endl;
        } else {
            cout << "all characters in the string is repeating." << endl;
        }
    }
}

int main() {
    compareString();
    return 0;
}