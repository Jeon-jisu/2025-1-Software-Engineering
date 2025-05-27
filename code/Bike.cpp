#include "Bike.h"

Bike::Bike() {}

Bike::Bike(string bike_id, string pname)
    : bike_id(bike_id), pname(pname) {}

string Bike::getBikeId() const {
    return bike_id;
}

string Bike::getPname() const {
    return pname;
}