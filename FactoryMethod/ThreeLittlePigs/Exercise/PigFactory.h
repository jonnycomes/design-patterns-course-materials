#ifndef PIGFACTORY_H
#define PIGFACTORY_H

#include "Pig.h"

class PigFactory {
public:
  static Pig* createPig(int);
};

#endif