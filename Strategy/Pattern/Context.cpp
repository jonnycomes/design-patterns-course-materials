#include "Context.h"
#include "Strategy.h"

// Constructors:
Context::Context() {};
Context::Context(Strategy* strategy) {
  _strategy = strategy;
}

// The implementation of method() in Context
// invokes the method() in Context's strategy:
void Context::method() {
  _strategy->algorithm();
}
