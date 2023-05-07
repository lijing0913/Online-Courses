// Week 3

#include <iostream>
#include <vector>
using namespace std;

// Exercise 1
class PracticeClass() {
    public:
      string name;
};

int main() {
    PracticeClass pc;
    pc.name = "Class Object";
    cout << obj.name;

    return 0;
}



// Exercise 2
class Cat {
    public:
      string breed;
      string color;
      string name;
    
    Cat() {
        breed = "American Shorthair";
        color = "black";
        name = "Kiwi";
    }
};



// Exercise 3
class Superhero {
    public:
        string name;
        string identity;
        vector<string> powers;
    
    Superhero(string n, string i, vector<string> p) {
        name = n;
        identity = i;
        powers = p;
    }
};

int main() {
    Superhero iron_man("Iron Man", "Tony Stark", {"armored suit", "laser beams", "flight"});
    cout << iron_man.name << endl;
    cout << iron_man.identify << endl;
    for (auto a : iron_man.powers) {
        cout << a << endl;
    }
    return 0;
}



// Exercise 4
class Observation {
    public:
      string date;
      int temperature;
      double elevation;
      int penguins;
      double precipitation;
    
    Observation(string d, int temp, double elev, int peng) {
        date = d;
        temperature = temp;
        elevation = elev;
        penguins = peng;
        precipitation = 0;
    }
};

int main() {
    Observation obs("October 26, 2019", -47, 329.4, 3);
    cout << "Today is " << obs.date << "." << endl;
    cout << "Temperature: " << obs.temperature << "." << endl;
    cout << "Elevation: " << obs.elevation << endl;
    cout << obs.penguins << " penguins observec with " << obs.precipitation << " precipitation." << endl;
    return 0;
}



// Exercise 5
class BigCat {
    public:
      string specicies;
      string common_name;
      vector<string> habitat;
      string genus = "panthera";
    
    BigCat(string sp, string cn, vector<string> h) {
        species = sp;
        common_name = cn;
        habitat = h;
    }
}

int main() {
    BigCat snow_leopard("unicia", "snow leopard", {"Himalaya mountains", "Siberian mountains"});

    cout << "A " << snow_leopard.common_name; 
    cout << " is part of the " << snow_leopard.species << " species." << endl;
    cout << "Their genus class is " << snow_leopard.genus << "." << endl;
    cout << "Some of their habitats include: ";
    for (auto a : snow_leopard.habitat) {
        cout << a << ", ";
    }
    cout << "etc." << endl;
    
    return 0;
}
