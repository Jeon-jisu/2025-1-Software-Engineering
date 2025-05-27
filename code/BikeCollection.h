#ifndef BIKECOLLECTION_H
#define BIKECOLLECTION_H

#include <vector>
#include "Bike.h"

class BikeCollection {
private:
    vector<Bike> bikes;

public:
    void registerBike(const Bike& bike);
    Bike* findById(const string& bike_id);
};

#endif