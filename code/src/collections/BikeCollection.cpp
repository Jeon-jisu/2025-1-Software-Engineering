#include "../../include/collections/BikeCollection.h"

void BikeCollection::registerBike(const Bike& bike) {
    bikes.push_back(bike);
}

Bike* BikeCollection::findById(const string& bike_id) {
    for (auto& bike : bikes) {
        if (bike.getBikeId() == bike_id) {
            return &bike;
        }
    }
    return nullptr;
}
