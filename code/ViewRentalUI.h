#ifndef VIEWRENTALUI_H
#define VIEWRENTALUI_H

#include <fstream>
#include <string>
#include <vector>

using namespace std;

class ViewRentalUI {
public:
    ViewRentalUI();
    void displayResult(ofstream& outputFile, const vector<pair<string, string>>& rentalList);
};

#endif