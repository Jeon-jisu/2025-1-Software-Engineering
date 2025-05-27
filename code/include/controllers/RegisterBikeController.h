#ifndef REGISTERBIKECONTROLLER_H
#define REGISTERBIKECONTROLLER_H

#include <string>
#include <fstream>
#include "../collections/BikeCollection.h"

using namespace std;

class RegisterBikeUI;  // 전방 선언

class RegisterBikeController {
private:
    BikeCollection* bikeCollection;
    RegisterBikeUI* registerBikeUI;

public:
    RegisterBikeController(BikeCollection* bikeCollection);
    ~RegisterBikeController();
    void registerBike(const string& bikeId, const string& productName);
    void processRegisterBike(ifstream& inputFile, ofstream& outputFile);
};

#endif