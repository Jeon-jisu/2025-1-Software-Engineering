#ifndef ACCOUNTCOLLECTION_H
#define ACCOUNTCOLLECTION_H

#include <vector>
#include "Account.h"

class AccountCollection {
private:
    vector<Account> accounts;

public:
    void addNewAccount(const Account& account);
    Account* findById(const string& id);
};

#endif