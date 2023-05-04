// Week 3

// Exercise 1
/*
Problem:
Write a program that takes input from a user and prints the first character of the input and the last character 
with some context. For example, if baseball is the string, then the program will output b is the first character 
and l is the last character. If cat is the string, then c is the first character and t is the last character will be printed.

Compile and test with baseball
b is the first character and l is the last character

Compile and test with cat
c is the first character and t is the last character

Compile and test with 123!
1 is the first character and ! is the last character
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line

    char first = my_string.at(0);
    char last = my_string.at(my_string.length()-1);
    cout << first << " is the first character and " << last << " is the last character" << endl;

    //add code above this line
    
    return 0;
    
}



// Exercise 2
/*
Problem:
Write a program that captures input from the user, prints the input string as many times as its length, 
and prints as many lines of it as the length of the input string.

Compile and test with cat
catcatcat
catcatcat
catcatcat

Compile and test with tree
treetreetreetree
treetreetreetree
treetreetreetree
treetreetreetree

Compile and test with !@#^&
!@#^&!@#^&!@#^&!@#^&!@#^&
!@#^&!@#^&!@#^&!@#^&!@#^&
!@#^&!@#^&!@#^&!@#^&!@#^&
!@#^&!@#^&!@#^&!@#^&!@#^&
!@#^&!@#^&!@#^&!@#^&!@#^&
*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line
    for (int i = 0; i < my_string.length(); i++) {
        for (int j = 0; j < my_string.length(); j++) {
            cout << my_string;
        }
        cout << endl;
    }


    //add code above this line
    
    return 0;
    
}



// Exercise 3
/*
Problem:
Write a program that accepts input from the user and creates another string that contains 
either a u, l, or - for each character of the original string. 
Use u when the character is uppercase, and use l when the character is lowercase. 
If the character is neither uppercase nor lowercase, use -. Print the original string first, then print the modified string.

Compile and test with cat
cat
lll

Compile and test with house
HouSE
ulluu

Compile and test with 1234
1234
----
*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string original = (argv[1]);
    string modified;
    char ch;
    
    //add code below this line
    for (char ch : original) { // enhanced for loop
        if (islower(ch)) {
            modified += 'l'
        }
        else if (isupper(ch)) {
            modified += 'u'
        }
        else {
            modified += '-'
        }
    cout << origin << endl;
    cout << modified << endl;

    //add code above this line
    
    return 0;
    
}



// Exercise 4
/*
Problem:
Write a program that takes input without white spaces from a user, prints the first half of the string on one line, 
and the second half on another. In the case of a string that has an odd number of characters, 
the second line will have the extra character.

Compile and test with c++
C
++

Compile and test with hello
he
llo
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line
    for (int i = 0; i < my_string.length() / 2; i++) { // integers in C++ disregard any decimal places so 2.5 converted into an integer will be 2
        cout << my_string.at(i);
    }
    cout << endl;
    for (int j = my_string.length() / 2; j < my_string.length(); j++) {
        cout << my_string.at(j)
    }
    cout << endl;

    //add code above this line
    
    return 0;
    
}



// Exercise 5
/*
Problem:
Write a program that captures input from the user and swaps the letters two at a time in the string. 
The first two characters change places, the third and fourth characters change places, etc. 
Assume that the program will only take an even number of characters, otherwise, there will be an error.

Compile and test with home
ohem

Compile and test with ocidgn
coding
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    string my_string = (argv[1]);
    
    //add code below this line
    // // solution 1
    // char temp;
    // while (i < my_string.length()-1) {
    //     temp = my_string.at(i);
    //     my_string.at(i) = my_string.at(i+1);
    //     my_string.at(i+1) = temp;
    //     i += 2;
    // }
    // cout << my_string << endl;

    // solution 2
    for (int i = 0; i < my_string.length(); i++) {
        if (i % 2 == 0) {
            cout << my_string.at(i + 1);
        }
        else {
            cout << my_string.at(i - 1);
        }
    }

    //add code above this line
    
    return 0;
    
}




