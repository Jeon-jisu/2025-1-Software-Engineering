#include "RentBikeUI.h"

RentBikeUI::RentBikeUI() {}
void RentBikeUI::getInputFromUser(ifstream& inputFile, string& bikeId) {
    // 입력받기
    inputFile >> bikeId;
}

void RentBikeUI::displayResult(ofstream& outputFile, const string& bikeId, const string& productName) {
    // 출력하기
    outputFile << "4.1. 자전거 대여" << endl;
    outputFile << "> " << bikeId << " " << productName << endl;
    outputFile << endl;
}