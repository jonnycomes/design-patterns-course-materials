#include "ConcreteObserver.h"
#include "ConcreteSubject.h"
#include <iostream>


int main() {
  ConcreteSubject tower;
  ConcreteObserver watcher(&tower);
  int state = 0;
  do {
    tower.setState(state);
    tower.notify();
    std::cout << "\nTower state: " << tower.getState()   << " | "
              << "Watcher state: " << watcher.getState() << "\n"
              << "-----------------------------------------\n"
              << "Enter a new tower state or type Q to quit: ";
  } while(std::cin >> state);
}