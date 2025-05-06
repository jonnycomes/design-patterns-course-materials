#include <iostream>

using std::cout;

class X {
public:
  virtual void method1() = 0;
  virtual void method2() = 0;
};

class Y : public X {
public:
  void method1() {
    cout << "...method 1 from Y...\n"; 
  }
  virtual void method3() = 0;
};

class Z : public Y {
public:  
  void method2() {
    cout << "...method 2 from Z...\n";
  }
  void method3() {
    cout << "...method 3 from Z...\n";
  }
};

class W : public X {
public:  
  void method2() {
    cout << "...method 2 from W...\n";
  }
};

class V : public W {
public:  
  void method1() {
    cout << "...method 1 from V...\n";
  }
};

int main() {
  Z z;
  z.method1();
  z.method2();
  z.method3();
  V v;
  v.method1();
  v.method2();
}