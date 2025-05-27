#include "../../include/ui/RegisterBikeUI.h"

RegisterBikeUI::RegisterBikeUI() {}

void RegisterBikeUI::getInputFromUser(ifstream& inputFile, string& bikeId, string& productName) {
    // 입력받기
    inputFile >> bikeId >> productName;
}

void RegisterBikeUI::displayResult(ofstream& outputFile, const string& bikeId, const string& productName) {
    // 출력하기
    outputFile << "3.1. 자전거 등록" << endl;
    outputFile << "> " << bikeId << " " << productName << endl;
    outputFile << endl;
}