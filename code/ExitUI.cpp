#include "ExitUI.h"

ExitUI::ExitUI() {}

void ExitUI::displayResult(ofstream& outputFile) {
    // 파일에 결과 출력
    outputFile << "6.1. 종료" << endl;
}