#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account {
private:
    string id;
    string password;
    string phone;

public:
    Account() = default; //기본생성자 처리
    Account(string id, string password, string phone);
    string getId() const;
    string getPhone() const;
};

#endif
