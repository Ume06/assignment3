#include "Reverser.h"

#include <cmath>
#include <iostream>

int Reverser::reverseDigit(int input) {
  if (input < 0) return -1;      // invalid input check
  if (input < 10) return input;  // non-reversible int

  int lastDigit = input % 10;
  int next = input / 10;
  int power = log10(input);

  return lastDigit * pow(10, power) + reverseDigit(next);
}

std::string Reverser::reverseString(std::string input) {
  if (input.length() < 1) return "ERROR";
  if (input.length() == 1) return input;
  char last = input.back();
  input.pop_back();
  return last + reverseString(input);
}