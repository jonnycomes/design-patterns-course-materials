#ifndef STATE_H
#define STATE_H 

class State {
protected:
  State* _nextState;
public:
  State();
  virtual ~State();
  State* getNextState();
  virtual void handle() = 0;
};

#endif