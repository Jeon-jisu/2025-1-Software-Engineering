
#include "Account.h"

Account::Account(string id, string password, string phone)
    : id(id), password(password), phone(phone) {}

string Account::getId() const {
    return id;
}

string Account::getPhone() const {
    return phone;
}
