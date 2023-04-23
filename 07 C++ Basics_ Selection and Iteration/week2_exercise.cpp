// Week 2

// Exercise 1
#include <iostream>
using namespace std;

int main() {
  
  //fix the code below this line

  // Original
  // int a = 5;
  // string b = 9;
  
  int a = 5;
  int b = 6;

  //fix the code above this line
  
  cout << (a * 3 + b - 8 / 2) << endl;
  
  return 0;
  
}


// Exercise 2
#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
  cout << boolalpha << (1 == 2) << endl;
  //add code above this line
  
  return 0;
  
}


// Exercise 3
#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
  string string1 = "Hello ";
  string string2 = "world";
  cout << string1 + string2 << endl;
  //add code above this line
  
  return 0;
  
}


// Exercise 4
#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
  double a = 7;
  double b = 2;
  cout << a / b << endl;
  //add code above this line
  
  return 0;
  
}


// Exercise 5
#include <iostream>
using namespace std;

int main() {
  
  string num1;
  string num2;
  cout << "Type the first whole number and then press Enter or Return: ";
  cin >> num1;
  cout << "Type the second whole number and then press Enter or Return: ";
  cin >>num2;
  
  //fix the code below this line
  // original
  // string sum = num1 + num2;
  // cout << ( num1 + " + " + num2 + " = " + sum ) << endl;

  double sum = stod(num1) + stod(num2);
  cout << ( num1 + " + " + num2 + " = " + to_string(sum) ) << endl;
  //fix the code above this line
  
  return 0;
  
}



