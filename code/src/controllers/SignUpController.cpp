#include "../../include/controllers/SignUpController.h"
#include "../../include/ui/SignUpUI.h"

SignUpController::SignUpController(AccountCollection* accountCollection) {
    this->accountCollection = accountCollection;
    signUpUI = new SignUpUI();
}
SignUpController::~SignUpController() {
    delete signUpUI;
}
void SignUpController::addNewAccount(const string& id, const string& password, const string& phone) {
    Account newAccount(id, password, phone);
    accountCollection->addNewAccount(newAccount);
}
void SignUpController::processSignUp(ifstream& inputFile, ofstream& outputFile) {
    string id, password, phone;
    signUpUI->getUserInfo(inputFile, id, password, phone); //입력받기
    addNewAccount(id, password, phone); //처리
    signUpUI->displayUserInfo(outputFile, id, password, phone); //출력
}