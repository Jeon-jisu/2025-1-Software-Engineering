//
// Created by 전지수 on 2025. 5. 26..
//

#ifndef EXITUI_H
#define EXITUI_H

#include <fstream>

using namespace std;

class ExitUI {
public:
    ExitUI();
    void displayResult(ofstream& outputFile);
};

#endif //EXITUI_H

