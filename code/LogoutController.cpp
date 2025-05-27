#include "LogoutController.h"
#include "LogoutUI.h"

LogoutController::LogoutController(CurrentAccount* currentAccount) {
    this->currentAccount = currentAccount;
    logoutUI = new LogoutUI();
}
LogoutController::~LogoutController() {
    delete logoutUI;
}
string LogoutController::logout() {
    string current = currentAccount->getCurrentAccount();
    currentAccount->setCurrentAccount("");
    return current;
}
void LogoutController::processLogout(ifstream& inputFile, ofstream& outputFile) {
    string loggedOutUser = logout();
    logoutUI->displayUserID(outputFile, loggedOutUser);
}