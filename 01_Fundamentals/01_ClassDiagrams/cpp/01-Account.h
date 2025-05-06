class Account {
private:
  double _balance;
public:
  Account(double balance = 0.0) {
    _balance = balance;
  }
  void deposit(double amount) {
    _balance += amount;
  }
  void withdraw(double amount) {
    _balance -= amount;
  }
  double getBalance() {
    return _balance;
  } 
};