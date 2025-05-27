#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include <string>
using namespace std;

class CurrentAccount {
private:
    string currentAccount;

public:
    string getCurrentAccount() const;
    void setCurrentAccount(const string& account);
};

#endif
