#ifndef SIGNUPCONTROLLER_H
#define SIGNUPCONTROLLER_H

#include <string>
#include <fstream>
#include "AccountCollection.h"

using namespace std;

class SignUpUI;

class SignUpController {
private:
    AccountCollection* accountCollection;
    SignUpUI* signUpUI;
    
public:
    SignUpController(AccountCollection* accountCollection);
    ~SignUpController();
    void addNewAccount(const string& id, const string& password, const string& phone);
    void processSignUp(ifstream& inputFile, ofstream& outputFile);
};

#endif