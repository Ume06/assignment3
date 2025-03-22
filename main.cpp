#include <iostream>
#include "Reverser.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

int main() {
  Reverser x;
  Truckloads t;
  EfficientTruckloads e;
  std::cout << x.reverseDigit(54321) << std::endl;
  std::cout << x.reverseString("string") << std::endl;
  std::cout << t.numTrucks(1024, 5) << std::endl;
  std::cout << e.numTrucks(1024, 5) << std::endl;
}