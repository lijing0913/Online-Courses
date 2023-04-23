// Week 4

// Exercise 1
////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); //You may edit the dimensions to fit your window
  Turtle tina(screen);
  tina.speed(TS_SLOWEST);
  
  //add code below this line
  for (int i = 0; i < 3; i++) {
    tina.forward(100); // move forward 100
    tina.left(120); // turn left 120 degree
  }
  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}



// Exercise 2
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line
  for (int i = 0; i < 10; i++) {
    cout << x << endl;
  }
  //add code above this line
  
  return 0;
  
}



// Exercise 3
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = stoi(argv[1]);
  int b = stoi(argv[2]);
  
  if (a > b) {
    int c = b;
    b = a;
    a = c;
  }
  
  //add code below this line
  if (a == b) {
    cout << a << endl;
  }
  else {
    int sum = 0;
    for (int i = a; i <= b; i++) {
      sum += i;
    }
    cout << sum << endl;
  }
  //add code above this line
  
  return 0;
  
}



// Exercise 4
#include <iostream>
using namespace std;

int main() {

  for (int i = 100; i <= 100; i--) {
    if (i == 0) {
      cout << "Print me!" << endl;
      break; // this is what I add
    }
    else {
      while (true) {
        break; // this is what I add
        i++;
        cout << "Don't print me!" << endl;
      }
    }
  }

  return 0;

}



// Exercise 5
#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
  for (int i = 1; i < 6; i++) {
    for (int j = 0; j < 5 - i; j++) {
      cout << ".";
    }
    cout << i << endl;
  }
  //add code above this line
  
  return 0;
  
}



