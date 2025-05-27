#include "Rental.h"

Rental::Rental() {}

Rental::Rental(string bike_id, string userid)
    : bike_id(bike_id), user_id(userid) {}

string Rental::getBikeId() const { 
    return bike_id;
}

string Rental::getUserId() const { 
    return user_id;
}