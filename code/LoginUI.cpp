#include "LoginUI.h"
#include <fstream>

LoginUI::LoginUI() {}
void LoginUI::getUserInfo(ifstream& inputFile, string& id, string& password) {
    // 입력받기
    inputFile >> id >> password;
}
void LoginUI::displayUserInfo(ofstream& outputFile, const string& id, const string& password) {
    // 출력하기
    outputFile << "2.1. 로그인" << endl;
    outputFile << "> " << id << " " << password << endl;
    outputFile << endl;
}