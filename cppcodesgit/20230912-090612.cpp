#include <iostream>
#include <string>

using namespace std;

bool isPalindromePossible(string str) {
    int charCount[26] = {0}; // Assuming the input consists of lowercase alphabets

    // Count the frequency of each character
    for (char c : str) {
        charCount[c - 'a']++;
    }

    int oddCount = 0;
    char middleChar = '\0';

    // Check if a palindrome is possible
    for (int i = 0; i < 26; i++) {
        if (charCount[i] % 2 == 1) {
            oddCount++;
            middleChar = 'a' + i;
        }
    }

    // Palindrome is possible if there is at most one character with odd frequency
    return oddCount <= 1;
}

string makePalindrome(string str) {
    string palindrome;
    int charCount[26] = {0};

    // Count the frequency of each character
    for (char c : str) {
        charCount[c - 'a']++;
    }

    char middleChar = '\0';

    // Construct the first half of the palindrome
    for (int i = 0; i < 26; i++) {
        while (charCount[i] >= 2) {
            palindrome += ('a' + i);
            charCount[i] -= 2;
        }

        if (charCount[i] == 1) {
            middleChar = 'a' + i;
        }
    }

    // Build the second half of the palindrome by reversing the first half
    string secondHalf = palindrome;
    for (int i = secondHalf.length() - 1; i >= 0; i--) {
        palindrome += secondHalf[i];
    }

    // If there's a character with an odd count, place it in the middle
    if (middleChar != '\0') {
        palindrome += middleChar;
    }

    return palindrome;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindromePossible(input)) {
        string palindrome = makePalindrome(input);
        cout << "Palindrome: " << palindrome << endl;
    } else {
        cout << "It can't be converted into a palindrome." << endl;
    }

    return 0;
}
    