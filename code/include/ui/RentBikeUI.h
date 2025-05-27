#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

#include <fstream>
#include <string>
#include "../controllers/RentBikeController.h"
#include "../collections/BikeCollection.h"

using namespace std;

class RentBikeUI {
public:
    RentBikeUI();
    void getInputFromUser(ifstream& inputFile, string& bikeId);
    void displayResult(ofstream& outputFile, const string& bikeId, const string& productName);
};

#endif