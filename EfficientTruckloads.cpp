#include "EfficientTruckloads.h"

std::map<std::pair<int, int>, int> EfficientTruckloads::reqTrucks;

int EfficientTruckloads::calcTrucks(int numCrates, int loadSize) {
  if (numCrates <= loadSize) return 1;

  int crates1 = numCrates / 2;
  int crates2 = numCrates / 2 + numCrates % 2;
  
  return calcTrucks(crates1, loadSize) + calcTrucks(crates2, loadSize);
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
  std::pair<int, int> job(numCrates, loadSize);
  if (reqTrucks.find(job) == reqTrucks.end()) reqTrucks[job] = calcTrucks(numCrates, loadSize);
  return reqTrucks.at(job);
}