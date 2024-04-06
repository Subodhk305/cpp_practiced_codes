#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string str) {
    int length = str.length();
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome: " << input << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
    