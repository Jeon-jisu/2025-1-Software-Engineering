#ifndef LOGINUI_H
#define LOGINUI_H

#include <fstream>
#include <string>

using namespace std;

class LoginUI {
public:
    LoginUI();
    void getUserInfo(ifstream& inputFile, string& id, string& password);
    void displayUserInfo(ofstream& outputFile, const string& id, const string& password);
};

#endif