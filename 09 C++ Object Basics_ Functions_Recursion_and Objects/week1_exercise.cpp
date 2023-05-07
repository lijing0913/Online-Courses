// Week 1 
#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Exercise 1
// Define a function called GetAvg to compute the average of two double variables.
double GetAvg(double x, double y) {
    return (x + y) / 2;
}



// Exercise 2
// Define a function to output odd/even numbers from a vector to users.
void GetOddsEvens(string x, vector<int>& numbers) {
    if (x == "true") { // output even numbers
        for (auto num : numbers) {
            if (num % 2 == 0) {
                cout << num << endl;
            }
        }  
    }
    else {
        for (auto num : numbers) {
            if (num % 2 == 1) {
                cout << num << endl;
            }
        }
    }
}



// Exercise 3
// Find whether a specified string in a vector or not. Return true or false.
bool FindTerm(string s, vector<string>& v) {
    bool ans = false;
    for (auto x : v) {
        if (x == s) {
            ans = true;
        }
    }
    return ans;
}



// Exercise 4
// Check whether a string is a palindrome.
// -> LeetCode #125 https://leetcode.com/problems/valid-palindrome/
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1; // two pointers
    while (left < right) {
        if (s.at(left) != s.at(right)) {
            return false;
        }
        else {
            left++;
            right--;
        }
    }
    return true;
}



// Exercise 5
// Reverse a string.
string Reverse(string s) {
    string reversed;
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s.at(i);
    }
    return reversed;
}
