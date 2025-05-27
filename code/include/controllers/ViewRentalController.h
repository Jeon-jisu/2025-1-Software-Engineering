#ifndef VIEWRENTALCONTROLLER_H
#define VIEWRENTALCONTROLLER_H

#include <vector>
#include <string>
#include <fstream>
#include "../collections/BikeCollection.h"
#include "../collections/RentalCollection.h"
#include "../entities/CurrentAccount.h"

using namespace std;

class ViewRentalUI;

class ViewRentalController {
private:
    BikeCollection* bikeCollection;
    RentalCollection* rentalCollection;
    CurrentAccount* currentAccount;
    ViewRentalUI* viewRentalUI;

public:
    ViewRentalController(BikeCollection* bikeCollection, RentalCollection* rentalCollection, CurrentAccount* currentAccount);
    ~ViewRentalController();
    vector<pair<string, string>> viewRental();
    void processViewRental(ifstream& inputFile, ofstream& outputFile);
};

#endif