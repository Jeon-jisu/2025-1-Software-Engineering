#include "CurrentAccount.h"

string CurrentAccount::getCurrentAccount() const {
    return currentAccount;
}

void CurrentAccount::setCurrentAccount(const string& account) {
    currentAccount = account;
}