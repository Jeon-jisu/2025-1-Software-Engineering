#include "ExitController.h"
#include "ExitUI.h"

ExitController::ExitController() {
    exitUI = new ExitUI();
}

ExitController::~ExitController() {
    delete exitUI;
}

void ExitController::processExit(ifstream& inputFile, ofstream& outputFile) {
    exitUI->displayResult(outputFile);  // 출력
}