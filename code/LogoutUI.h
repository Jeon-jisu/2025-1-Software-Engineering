#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include <fstream>
#include <string>

using namespace std;

class LogoutUI {
public:
    LogoutUI();
    void displayUserID(ofstream& outputFile, const string& loggedOutUser);
};

#endif