#include <iostream>
#include "Reverser.h"
int main() {
  Reverser x;
  std::cout << x.reverseDigit(54321) << std::endl;
  std::cout << x.reverseString("string") << std::endl;
}