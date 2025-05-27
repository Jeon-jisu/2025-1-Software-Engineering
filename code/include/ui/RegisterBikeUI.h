#ifndef REGISTERBIKEUI_H
#define REGISTERBIKEUI_H

#include <fstream>
#include <string>
#include "../controllers/RegisterBikeController.h"

using namespace std;

class RegisterBikeUI {
public:
    RegisterBikeUI();
    void getInputFromUser(ifstream& inputFile, string& bikeId, string& productName);
    void displayResult(ofstream& outputFile, const string& bikeId, const string& productName);
};

#endif