#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <map>

class EfficientTruckloads {
  public:
    int numTrucks(int numCrates, int loadSize);
  private:
    static std::map<std::pair<int, int>, int> reqTrucks;
    int calcTrucks(int numCrates, int loadSize);
};

#endif