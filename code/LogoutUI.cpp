#include "LogoutUI.h"
#include <fstream>

LogoutUI::LogoutUI() {}
void LogoutUI::displayUserID(ofstream& outputFile, const string& loggedOutUser) {
    // 출력하기
    outputFile << "2.2. 로그아웃" << endl;
    outputFile << "> " << loggedOutUser << endl;
    outputFile << endl;
}