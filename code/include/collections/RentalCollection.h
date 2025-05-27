#ifndef RENTALCOLLECTION_H
#define RENTALCOLLECTION_H

#include <vector>
#include <string>
#include "../entities/Rental.h"

class RentalCollection {
private:
    vector<Rental> rentals;

public:
    void addRental(const Rental& rental);
    vector<string> getBikeidFromUser(const string& userid);
};

#endif