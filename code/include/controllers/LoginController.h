#ifndef LOGINCONTROLLER_H
#define LOGINCONTROLLER_H

#include <string>
#include <fstream>
#include "../entities/CurrentAccount.h"

using namespace std;
class LoginUI;
class LoginController {
private:
    CurrentAccount* currentAccount;
    LoginUI* loginUI;
    
public:
    LoginController(CurrentAccount* currentAccount);
    ~LoginController();
    void login(const string& id, const string& password);
    void processLogin(ifstream& inputFile, ofstream& outputFile);
};

#endif