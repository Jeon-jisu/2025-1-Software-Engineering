#include "../../include/controllers/ExitController.h"
#include "../../include/ui/ExitUI.h"

ExitController::ExitController() {
    exitUI = new ExitUI();
}

ExitController::~ExitController() {
    delete exitUI;
}

void ExitController::processExit(ifstream& inputFile, ofstream& outputFile) {
    exitUI->displayResult(outputFile);  // 출력
}