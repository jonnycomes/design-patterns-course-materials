#ifndef MARIOSTATE_H
#define MARIOSTATE_H 

class MarioState {
protected:
  MarioState* _nextMarioState;
public:
  MarioState();
  virtual ~MarioState();
  MarioState* getNextMarioState();
  virtual void eatMushroom() = 0;
  virtual void takeHit() = 0;
};

#endif