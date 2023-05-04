// Week 1

// Exercise 1
#include <iostream>
using namespace std;

int main() {
  
  string oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
  
  //add code below this line
  for (string i : oceans) { // enhanced for loop
    cout << i << endl;
  }
  //add code above this line
  
  return 0;
  
}



// Exercise 2
#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans(0);
  
  //add code below this line
  // use at least one push_back, one pop_back, one at()
  oceans.push_back("Pacific");
  oceans.push_back("Atlantic");
  oceans.push_back("Indian");
  oceans.push_back("Arctic");
  oceans.push_back("Southern");
  oceans.push_back("Place Holder");
  oceans.at(5) = "Delete";
  oceans.pop_back();
  
  //add code above this line
  
  for (auto a : oceans) {
    cout << a << endl;
  }
  
  return 0;
  
}



// Exercise 3 -> reverse the order of elements
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  vector<string> reverse(0);
  reverse.push_back(argv[1]);
  reverse.push_back(argv[2]);
  reverse.push_back(argv[3]);
  
  //add code below this line
  int length = reverse.size();

  for (int i = length - 1; i >= 0; i--) {
    reverse.push_back(reverse.at(i));
  }

  for (int i = 0; i < length; i++) {
    reverse.erase(reverse.begin());
  }

  //add code above this line
  
  for (auto a : reverse) {
    cout << a << endl;
  }
  
  return 0;
  
}



// Exercise 4 -> 2D array
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = atoi((argv[1]));
  int b = atoi((argv[2]));
  int c = atoi((argv[3]));
  int d = atoi((argv[4]));
  int nums[3][3];
  
  //add code below this line
  nums[0][0] = a;
  nums[0][1] = b;
  nums[0][2] = a + b;
  nums[1][0] = c;
  nums[1][1] = d;
  nums[1][2] = c + d;
  nums[2][0] = a + c;
  nums[2][1] = b + d;
  nums[2][2] = a + b + c + d + a + c + b + d;

  //add code above this line
  
  int row = sizeof(nums) / sizeof(nums[0]);
  int col = sizeof(nums[0]) / sizeof(int);
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (j == 2) {
        cout << nums[i][j] << endl;
      }
      else {
        cout << nums[i][j] << " ";
      }
    }
  }
  
  return 0;
  
}



// Exercise 5
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  double input;
  double total = 0;
  double avg = 0;
  vector<double> numList(0);
  
  cout << "Enter double or int to add to total, else find total average:" << endl;
  while (cin >> input) {
  
    // add input into vector
    numList.push_back(input);
    
    // your code goes above
  
    cout << "Enter double or int to add to total, else find total average:" << endl;
  }

  for (auto a : numList) { // is numList is empty, this for loop is not executed
    total += a;  
    avg = total / numList.size();
  }
  
  // your code goes above
  
  cout << avg << endl;
  
  return 0;
  
}


