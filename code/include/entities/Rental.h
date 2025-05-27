#ifndef RENTAL_H
#define RENTAL_H

#include <string>
using namespace std;

class Rental {
private:
    string bike_id;
    string user_id;

public:
    Rental();
    Rental(string bike_id, string user_id);
    string getBikeId() const;
    string getUserId() const;
};

#endif