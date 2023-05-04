// Week 4

// Exercise 1
/*
Problem:
Write a program that reads a text file and returns the number of lines as well as the total number of characters in the file.

Expected Output:
You may add additional helper functions if you’d like, but your program must include the following line of code:
string path = argv[1];
The variable path allows for different text files to be sent to your program for testing.

4 line(s)
228 character(s)
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
    string path = argv[1];        //
//////////////////////////////////  
  
    //add code below this line
    try {
        ifstream file;
        string read;
        int count_line = 0;
        int count_char = 0;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            count_line++;
            count_char += read.length();
        }
        file.close();
        cout << count_line << " line(s)" << endl;
        cout << count_char << " characters(s)" << endl;
    }
    
    catch (exception& e) {
        cerr << e.what() << endl;
    }

    //add code above this line
  
    return 0;
  
}



// Exercise 2
/*
Problem:
Write a program that reads a comma delimited CSV file with four columns and returns the average of each column in the file. 
Assume that the CSV files used will only contain 3 rows and 4 columns.

Expected Output:
The CSV file looks like the one below.
1,5,10,30
19,15,10,15
10,4,-2,15

You may add additional helper functions if you’d like, but your program must include the following line of code:
    string path = argv[1];
The variable path allows for different text files to be sent to your program for testing
    10 8 6 20
Where 10 represents the average of the numbers in the first column, 8 represents the average of the numbers in the second column, etc.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
    string path = argv[1];        //
//////////////////////////////////  
    
    //add code below this line
    vector<string> nums;

    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throwback runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read, ',')) {
                nums.push_back(read);
            }
        }
        file.close();
    }

    catch (exception& e) {
        cerr << e.what() << endl;
    }

    for (int i = 0; i < 4; i++) {
        int avg = 0;
        for (int j = 0; j < nums.size(); j+=4) {
            avg += stoi(nums.at(i + j));
        }
        avg /= 3;
        cout << avg << " ";
    }

    //add code above this line
    
    return 0;
    
}



// Exercise 3
/*
Problem:
Write a program that reads a text file and prints the contents in reverse order.

Expected Output:
You may add additional helper functions if you’d like, but your program must include the following line of code:
    string path = argv[1];
The variable path allows for different text files to be sent to your program for testing.

The child still struggled and loaded me with epithets which carried despair to my heart; I grasped his throat to silence him, and in a moment he lay dead at my feet.
‘Frankenstein! you belong then to my enemy—to him towards whom I have sworn eternal revenge; you shall be my first victim.’
‘Hideous monster! Let me go. My papa is a syndic—he is M. Frankenstein—he will punish you. You dare not keep me.’
‘Boy, you will never see your father again; you must come with me.’
He struggled violently. ‘Let me go,’ he cried; ‘monster! Ugly wretch! You wish to eat me and tear me to pieces. You are an ogre. Let me go, or I will tell my papa.’
Note that there are newlines at the end of a few sentences!
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
    string path = argv[1];        //
//////////////////////////////////  
  
    //add code below this line
    vector<string> data;

    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read, ' ')) {
                data.push_back(read);
            }
        }
        file.close();
    }

    catch (exception& e) {
        cerr << e.what() << endl;
    }

    for (int i = data.size() - 1; i >= 0; i--) {
        cout << data.at(i) << endl;
    }

    //add code above this line
  
    return 0;
  
}



// Exercise 4
/*
Problem:
Write a program that reads a tab ('\t') delimited CSV file and prints the name of the oldest person in the file. 
Assume that there are no two people with the same age.

Expected Output:
The CSV file looks like the one below.
Peter   38  Doctor
Paul    41  Lawyer
Mary    32  Systems Engineer
You may add additional helper functions if you’d like, but your program must include the following line of code:
    string path = argv[1];
The variable path allows for different text files to be sent to your program for testing.

The oldest person is Paul.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
    string path = argv[1];        //
//////////////////////////////////  
  
    //add code below this line
    vector<string> data;
    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read, '\t')) {
                data.push_back(read);
            }
        }
        file.close();
    }

    catch (exception& e) {
        cerr << e.what() << endl;
    }

    int max = 0;
    string person;

    for (int i = 1; i < data.size(); i+=3) {
        if (stoi(data.at(i)) > max) {
            max = stoi(data.at(i));
            person = data.at(i - 1);
        }
    }
    cout << "The oldest person is " << person << ".";

    //add code above this line
  
    return 0;
  
}




// Exercise 5
/*
Problem:
Write a program that reads a comma delimited CSV file and prints all of the cities which reside in the Southern Hemisphere. 
Note, any latitude with a negative value is south of the equator.

Expected Output:
The CSV file looks like the one below.
City,Country,Latitude,Longitude
Beijing,China,39,116
Perth,Australia,-57,115
Port Moresby,Papua New Guinea,-25,147
Tokyo,Japan,35,139

You may add additional helper functions if you’d like, but your program must include the following line of code:
    string path = argv[1];
The variable path allows for different text files to be sent to your program for testing.

The following cities are in the Southern Hemisphere: Perth, Port Moresby.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
    string path = argv[1];        //
//////////////////////////////////  
    
    //add code below this line
    vector<string> data;

    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.")
        }
        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read, ',')) {
                data.push_back(read);
            }
        }
        file.close();
    }

    catch (exception& e) {
        cerr << e.what() << endl;
    }

    string cities;
    cout << "The following cities are in the Southern Hemisphere: ";

    for (int i = 6; i < data.size(); i+=4) {
        if (stoi(data.at(i)) < 0) {
            cities += data.at(i - 2) + ", "
        }
    }
    cities.pop_back(); // remove " "
    cities.pop_back(); // remove ","
    cities += "."
    cout << cities << endl;

    //add code above this line
    
    return 0;
  
}