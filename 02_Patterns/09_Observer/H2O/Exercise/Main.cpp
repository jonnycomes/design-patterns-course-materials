#include "H2O.h"
#include "Temperature.h"

int main() {
  H2O water;
  Temperature t;
  t.setCelsius(-10);
  water.setTemperature(&t);
  t.setCelsius(20);
  water.setTemperature(&t);
}