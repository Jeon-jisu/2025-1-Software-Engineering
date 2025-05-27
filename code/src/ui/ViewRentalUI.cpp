#include "../../include/ui/ViewRentalUI.h"

ViewRentalUI::ViewRentalUI() {}

void ViewRentalUI::displayResult(ofstream& outputFile, const vector<pair<string, string>>& rentalList) {
    // 출력하기
    outputFile << "5.1. 자전거 대여 리스트" << endl;

    // 대여한 자전거 목록 출력
    for (const auto& rental : rentalList) {
        outputFile << "> " << rental.first << " " << rental.second << endl;
    }

    outputFile << endl;
}