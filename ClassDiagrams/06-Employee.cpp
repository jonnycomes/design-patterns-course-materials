#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using std::cout;
using std::vector;
using std::string;

class TimeCard {
private:
  vector<double> _hours;
  vector<time_t> _timeStamps;
  bool _approved;
public:
  TimeCard() {
    _approved = false;
  }
  bool isApproved() {
    return _approved;
  }
  void addEntry() {
    _hours.push_back(8); // For simplicity, all shifts are 8 hours long
    _timeStamps.push_back(time(0));
  }
  void approve() {
    _approved = true;
  }
  double getTotalHours() {
    double result = 0.0;
    for(double hour : _hours) {
      result += hour;
    }
    return result;
  }
};


class Employee {
protected:
  int _employeeID;
  TimeCard* _timeCard;
public:
  Employee(int employeeID = 0) {
    _employeeID = employeeID;
    _timeCard = new TimeCard();
  }
  ~Employee() {
    delete _timeCard;
  }
  virtual void handleTimeCard() = 0;
  virtual void getPaid() = 0;
  TimeCard* getTimeCard() {
    return _timeCard;
  }
  int getEmployeeID() {
    return _employeeID;
  }
};

class Painter : public Employee {
private:
  double _wage;
  double _amountOwed;
public:
  Painter(int employeeID = 0, double wage = 0) : Employee(employeeID) {
    _wage = wage;
    _amountOwed = 0.0;
  }
  void handleTimeCard() {
     getTimeCard()->addEntry();
    _amountOwed = _wage * (  getTimeCard()->getTotalHours() );
  }
  void getPaid() {
    cout << "Pay employee " << getEmployeeID() << ": ";
    if( getTimeCard()->isApproved()) {
      cout << "$" << _amountOwed << ".\n";
    }
    else {
      cout << "time card not approved!\n";
    }
  }
};

class Manager : public Employee {
private:
  double _salary;
  vector<Employee*> _managees;
public:
  Manager(int employeeID = 0, double salary = 0.0) : Employee(employeeID) {
    _salary = salary;
  }
  void addManagee(Employee* employee) {
    _managees.push_back(employee);
  }
  void handleTimeCard() {
    for(auto employee : _managees) {
      employee-> getTimeCard()->approve();
    }
  }
  void getPaid() {
    cout << "Pay employee " << getEmployeeID() << ": $" << _salary << ".\n";
  }
};

int main() {
  Manager boss(102, 8500.00);
  Painter tom(223, 20.00);
  Painter pam(204, 23.50);
  Painter jim(325, 19.20);
  boss.addManagee(&tom);
  boss.addManagee(&pam);
  for(int i = 0; i < 23; i++) {
    tom.handleTimeCard();
    pam.handleTimeCard();
    jim.handleTimeCard();
  }
  boss.handleTimeCard();
  boss.getPaid();
  tom.getPaid();
  pam.getPaid();
  jim.getPaid();
}