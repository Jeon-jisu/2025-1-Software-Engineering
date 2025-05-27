#ifndef LOGOUTCONTROLLER_H
#define LOGOUTCONTROLLER_H

#include <string>
#include <fstream>
#include "../entities/CurrentAccount.h"

using namespace std;

class LogoutUI;

class LogoutController {
private:
    CurrentAccount* currentAccount;
    LogoutUI* logoutUI;

public:
    LogoutController(CurrentAccount* currentAccount);
    ~LogoutController();
    string logout();
    void processLogout(ifstream& inputFile, ofstream& outputFile);
};

#endif