#include "../../include/collections/AccountCollection.h"

void AccountCollection::addNewAccount(const Account& account) {
    accounts.push_back(account);
}

Account* AccountCollection::findById(const string& id) {
    for (auto& account : accounts) {
        if (account.getId() == id) {
            return &account;
        }
    }
    return nullptr;
}