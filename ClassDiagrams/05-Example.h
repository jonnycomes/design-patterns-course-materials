#include <vector>

using std::vector;

class A {
public:
  virtual int operation(int) = 0;
};

class B : public A {
private:
  int _scalar;
public:
  B(int scalar = 1) {
    _scalar = scalar;
  }
  int operation(int);
};

class C : public A {
private:
  int _shift;
  void helper(int);
public:
  C(int shift = 0) {
    _shift = shift;
  }
  int operation(int);
};

class D : public A {
private:
  B* banana;
  vector<C*> cats;
public:
  int operation(int);
  void action();
};