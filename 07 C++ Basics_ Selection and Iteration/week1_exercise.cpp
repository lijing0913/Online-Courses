// Week 1 Exercise Solutions


// Exercise 1
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  bool test = atoi((argv[1]));
  
  //add code below this line
  bool my_bool = true;
  cout << my_bool << endl;
  my_bool = test;
  cout << my_bool;
  //add code above this line
  
  return 0;
  
}



// Exercise 2
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int first_num = atoi((argv[1]));
  int second_num = atoi((argv[2]));
  int third_num = atoi((argv[3]));
  
  //add code below this line
  int my_int = first_num;
  cout << my_int << endl;
  my_int = second_num;
  cout << my_int << endl;
  my_int = third_num;
  cout << my_int << endl;
  //add code above this line
  
  return 0;
  
}



// Exercise 3
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string line1 = (argv[1]);
  string line2 = (argv[2]);
  
  //add code below this line
  cout << line1 << endl;
  cout << line2 << endl;
  //add code above this line
  
  return 0;
  
}



// Exercise 4
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  double number = atof(argv[1]);
  
  //add code below this line
  double my_double = 3.14;
  cout << my_double << endl;
  my_double = number;
  cout << my_double << endl;
  //add code above this line
  
  return 0;
  
}



// Exercise 5
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  //add code below this line
  cout << "Okay, ";
  cout << "it is time to learn about operators." << endl;
  //add code above this line
  
  return 0;
  
}
