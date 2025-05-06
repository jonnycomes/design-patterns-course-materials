#ifndef MARIOSTATE_H
#define MARIOSTATE_H 

class MarioState {
protected:
  MarioState* _nextMarioState;
public:
  MarioState();
  virtual ~MarioState();
  MarioState* getNextMarioState();
  virtual void powerUp() = 0;
};

#endif