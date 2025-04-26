#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::vector;
using std::string;

class Zero {
protected:
  void printClosing() {
    cout << "...Goodbye...\n";
  }
};

class One {
public:
  void printGreeting() {
    cout << "\nHello! Welcome to my exciting program!\n\n";
  }
};

class Two {
private:
  string _name;
public:
  Two(string name = "") {
    _name = name;
  }
  void printName() {
    cout << _name << '\n';
  }
};

class Three : public Zero {
private:
  One* _one;
  vector<Two*> _twos;
public:
  Three() {
    _one = new One();
  }
  ~Three() {
    delete _one;
  }
  void addTwo(Two* two) {
    _twos.push_back(two);
  }
  void printStuff() {
    _one->printGreeting();
    cout << "Players: \n";
    for(auto two : _twos) {
      two->printName();
    }
    printClosing();
  }
};

int main() {
  Two a("Ava");
  Two b("Bob");
  Two c("Cat");
  Two d("Dog");
  Three x;
  x.addTwo(&a);
  x.addTwo(&b);
  x.addTwo(&c);
  x.addTwo(&d);
  x.printStuff();
}