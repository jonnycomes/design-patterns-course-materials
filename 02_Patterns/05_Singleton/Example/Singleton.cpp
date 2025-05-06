#include "Singleton.h"

Singleton::Singleton() {}

Singleton* Singleton::_instance = nullptr;

Singleton* Singleton::getInstance() {
  if(_instance == nullptr) {
    _instance = new Singleton();
  }
  return _instance;
}

int Singleton::getData() {
  return _data;
}

void Singleton::setData(int data) {
  _data = data;
} 
