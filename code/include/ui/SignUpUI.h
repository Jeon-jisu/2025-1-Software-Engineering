#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <fstream>
#include <string>

using namespace std;

class SignUpUI {
public:
    SignUpUI();
    void getUserInfo(ifstream& inputFile, string& id, string& password, string& phone);
    void displayUserInfo(ofstream& outputFile, const string& id, const string& password, const string& phone);
};

#endif