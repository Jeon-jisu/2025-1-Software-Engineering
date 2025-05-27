#include "LoginController.h"
#include "LoginUI.h"

LoginController::LoginController(CurrentAccount* currentAccount) {
    // 생성 후 대입
    this->currentAccount = currentAccount;
    loginUI = new LoginUI();  // new로 UI 생성
}
LoginController::~LoginController() {
    delete loginUI;  // 메모리 해제
}
void LoginController::login(const string& id, const string& password) {
    // id, 비밀번호 검증 없이 바로 setting. 하지만 일단 입력받는다.
    currentAccount->setCurrentAccount(id);
}
void LoginController::processLogin(ifstream& inputFile, ofstream& outputFile) {
    string id, password;
    loginUI->getUserInfo(inputFile, id, password); //입력
    login(id, password);  // 처리 // 로그인으로 현재 currentAccount에 user 할당. id와 password가 있던 없던 일단 셋팅하는 로직.
    loginUI->displayUserInfo(outputFile, id, password); //출력
}
