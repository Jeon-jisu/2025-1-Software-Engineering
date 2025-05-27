
#ifndef BIKE_H
#define BIKE_H

#include <string>
using namespace std;

class Bike {
private:
    string bike_id;
    string pname;

public:
    Bike();
    Bike(string bike_id, string pname);
    string getBikeId() const;
    string getPname() const;
};

#endif