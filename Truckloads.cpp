#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
  if (numCrates <= loadSize) return 1;

  int crates1 = numCrates / 2;
  int crates2 = numCrates / 2 + numCrates % 2;
  
  return numTrucks(crates1, loadSize) + numTrucks(crates2, loadSize);
}