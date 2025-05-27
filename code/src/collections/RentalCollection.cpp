#include "../../include/collections/RentalCollection.h"

void RentalCollection::addRental(const Rental& rental) {
    rentals.push_back(rental);
}

vector<string> RentalCollection::getBikeidFromUser(const string& userid) {
    vector<string> userBikes;
    for (const auto& rental : rentals) {
        if (rental.getUserId() == userid) {
            userBikes.push_back(rental.getBikeId());
        }
    }
    return userBikes;
}