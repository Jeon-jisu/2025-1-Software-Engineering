#ifndef RENTBIKECONTROLLER_H
#define RENTBIKECONTROLLER_H

#include <string>
#include <fstream>
#include "../collections/BikeCollection.h"
#include "../collections/RentalCollection.h"
#include "../entities/CurrentAccount.h"

using namespace std;

class RentBikeUI;

class RentBikeController {
private:
    BikeCollection* bikeCollection;
    RentalCollection* rentalCollection;
    CurrentAccount* currentAccount;
    RentBikeUI* rentBikeUI;

public:
    RentBikeController(BikeCollection* bikeCollection, RentalCollection* rentalCollection, CurrentAccount* currentAccount);
    ~RentBikeController();
    void rentBike(const string& bikeId);
    void processRentBike(ifstream& inputFile, ofstream& outputFile);
};
#endif