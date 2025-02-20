/*A palindrome is a string of character that's the same forward and backward. Typically,
punctuation, capitalization, and spaces are ignored. For example, "Poor Dan is in a
droop" is a palindrome, as can be seen by examining the characters "poor danisina
droop" and observing that they are the same forward and backward. One way to check
for a palindrome is to reverse the characters in the string and then compare with them
the original-in a palindrome, the sequence will be identical. Write C++ program with
functions-
a) To print original string followed by reversed string using stack
b) To check whether given string is palindrome or not

*/

#include <iostream>
#include <stack>
#include <cctype> 
#include <string>

using namespace std;

string preprocessString(const string& str) {
    string result = "";
    for (char ch : str) {
        if (isalpha(ch)) {
            result += tolower(ch); 
        }
    }
    return result;
}

string reverseStringUsingStack(const string& str) {
    stack<char> s;
    string reversedStr = "";

    for (char ch : str) {
        s.push(ch);
    }

    while (!s.empty()) {
        reversedStr += s.top();
        s.pop();
    }

    return reversedStr;
}

// Function to cheak string is a palindrome
bool isPalindrome(const string& str) {
    string processedStr = preprocessString(str); 
    string reversedStr = reverseStringUsingStack(processedStr); 

    return processedStr == reversedStr;
}
int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Original string: " << input << endl;

    string reversedInput = reverseStringUsingStack(input);
    cout << "Reversed string: " << reversedInput << endl;

    if (isPalindrome(input)) {
        cout << "The given string is a palindrome." << endl;
    } else {
        cout << "The given string is not a palindrome." << endl;
    }

    return 0;
}
