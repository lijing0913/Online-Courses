// Week 2

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Exercise 1
// Problem: compute sum up until n.
int RecursiveSum(int n) {
    if (n == 0) { // base case
        return 0;
    }
    else {
        return n + RecursiveSum(n - 1); // recrusive case
    }
}



// Exercise 2
// Problem: compute sum of a vector
int ListSum(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    return sum;
}
// or
int ListSum(vector<int>& nums) {
    if (nums.size() == 1) {
        return nums.at(0);
    }
    else {
        vector<int> new_vector(nums.begin() + 1, nums.begin() + nums.size());
        return nums.at(0) + ListSum(new_vector);
    }
}




// Exercise 3
int BunnyEars(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return 2 + BunnyEars(n - 1);
    }
}



// Exercise 4
// Problem: reverse string
string ReverseString(string str) {
    int n = str.length();
    // Swap character from start to end until midpoint
    for (int i = 0; i < n / 2; i++) {
        char temp = str.at(i);
        str.at(i) = str.at(n - i - 1);
        str.at(n - i - 1) = temp;
    }
    return str;
}
// or 
string ReverseString(string str) {
    if (str.length() == 1) {
        return str;
    }
    else {
        return str.at(str.length() - 1) + ReverseString(str.substr(0, str.length()- 1));
    }
    return str;
}



// Exercise 5
// Problem: get maximum from a vector 
int GetMax(vector<int>& nums) {
    if(nums.empty()) {
        return 0;
    }
    int max = nums.at(0);
    for (int i = 1; i < nums.size(); i++) {
        if (nums.at(i) > max) {
            max = nums.at(i);
        }
    }
    return max;
}
// or
int GetMax(vector<int>& nums) {
    if (nums.size() == 1) {
        return nums.at(0);
    }
    else {
        vector<int> new_vector(nums.begin() + 1, nums.end());
        return max(nums.at(0), GetMax(new_vector));
    }
}