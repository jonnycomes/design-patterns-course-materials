#ifndef QUACKOLOGIST_H
#define QUACKOLOGIST_H

#include "Observer.h"
// #include "Subject.h"
#include <string>

class Quackologist : public Observer {
public:
  void update(std::string);
};

#endif