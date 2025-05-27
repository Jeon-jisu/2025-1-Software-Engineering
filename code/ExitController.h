//
// Created by 전지수 on 2025. 5. 26..
//

#ifndef EXITCONTROLLER_H
#define EXITCONTROLLER_H
#include <fstream>

using namespace std;

class ExitUI;

class ExitController {
private:
    ExitUI* exitUI;
public:
    ExitController();
    ~ExitController();
    void processExit(ifstream& inputFile, ofstream& outputFile);  // 종료 처리 로직
};

#endif //EXITCONTROLLER_H
