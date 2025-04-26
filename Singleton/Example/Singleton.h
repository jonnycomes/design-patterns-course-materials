#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
private:
  static Singleton* _instance;
  int _data;
protected:
  Singleton();
public:
  static Singleton* getInstance();
  int getData();
  void setData(int);
};

#endif