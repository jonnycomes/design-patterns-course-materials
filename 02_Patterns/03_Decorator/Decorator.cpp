#include <iostream>
#include <memory>
using std::cout;
using std::shared_ptr;
using std::make_shared;

class Component {
public:
  virtual void operation() = 0;
};

class ConcreteComponent : public Component {
public:
  void operation() {
    cout << "performing operation from ConcreteComponent.\n";
  }
};

class Decorator : public Component {
protected:
  shared_ptr<Component> _innerComponent;
  virtual void operation() {
    _innerComponent->operation();
  }
};

class ConcreteDecoratorA : public Decorator {
private:
  void operationAddOn() {
    cout << "Adding stuff to operation via Decorator A.\n";
  }
public:
  ConcreteDecoratorA(shared_ptr<Component> _c) {
    _innerComponent = _c;
  }
  void operation() {
    _innerComponent->operation();
    operationAddOn();
  }
};

int main() {
  ConcreteComponent c;
  c.operation();
  cout << "------------------------\n";
  ConcreteDecoratorA d(make_shared<ConcreteComponent>(c));
  d.operation();
}