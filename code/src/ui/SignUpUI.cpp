#include "../../include/ui/SignUpUI.h"

SignUpUI::SignUpUI() {
}

void SignUpUI::getUserInfo(ifstream& inputFile, string& id, string& password, string& phone) {
    // 입력 받기
    inputFile >> id >> password >> phone;
}
void SignUpUI::displayUserInfo(ofstream& outputFile, const string& id, const string& password, const string& phone) {
    // 출력
    outputFile << "1.1. 회원가입" << endl;
    outputFile << "> " << id << " " << password << " " << phone << endl;
    outputFile << endl;
}