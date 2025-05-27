// main.cpp
#include <iostream>
#include <fstream>
#include <string>

#include "Account.h"
#include "Bike.h"
#include "Rental.h"
#include "CurrentAccount.h"
#include "AccountCollection.h"
#include "BikeCollection.h"
#include "RentalCollection.h"
#include "SignUpController.h"
#include "LoginController.h"
#include "LogoutController.h"
#include "RegisterBikeController.h"
#include "RentBikeController.h"
#include "ViewRentalController.h"
#include "ExitController.h"
#include "ExitUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "SignUpUI.h"
#include "RegisterBikeUI.h"
#include "RentBikeUI.h"
#include "ViewRentalUI.h"

using namespace std;

#define INPUT_FILE_NAME "../input.txt"
#define OUTPUT_FILE_NAME "../output.txt"

/*
메인 함수 선언부
프로그램의 시작점이며 모든 객체들을 지역변수로 생성하여 관리한다.
파일 입출력 초기화, 컨트롤러 객체 생성, admin 계정 초기화를 담당한다.
controller가 항상 먼저 시작해야한다.
*/
void doTask(ifstream& inputFile, ofstream& outputFile,
           SignUpController& signUpController, LoginController& loginController,
           LogoutController& logoutController, ExitController& exitController,
           RegisterBikeController& registerBikeController, RentBikeController& rentBikeController,
           ViewRentalController& viewRentalController);
int main() {
    // 지역 변수로 모든 객체들 선언
    ifstream inputFile;
    ofstream outputFile;
    AccountCollection accounts;
    BikeCollection bikes;
    RentalCollection rentals;
    CurrentAccount currentUser;

    // 파일 입출력 초기화
    inputFile.open(INPUT_FILE_NAME);
    outputFile.open(OUTPUT_FILE_NAME);

    // 파일 열기 성공 여부 확인
    if (!inputFile.is_open()) {
        cout << "Error opening file " << INPUT_FILE_NAME << endl;
        return -1;
    }

    if (!outputFile.is_open()) {
        cout << "Error opening file " << OUTPUT_FILE_NAME << endl;
        return -1;
    }

    // 컨트롤러 생성
    SignUpController signUpController(&accounts);
    LoginController loginController(&currentUser);
    LogoutController logoutController(&currentUser);
    ExitController exitController;
    RegisterBikeController registerBikeController(&bikes);
    RentBikeController rentBikeController(&bikes, &rentals, &currentUser);
    ViewRentalController viewRentalController(&bikes, &rentals, &currentUser);

    // 관리자는 admin admin으로 ID 패스워드를 하드코딩.
    signUpController.addNewAccount("admin", "admin", "");  // Controller 사용

    // 메인함수호출
    doTask(inputFile, outputFile, signUpController, loginController, logoutController, exitController,
           registerBikeController, rentBikeController, viewRentalController);

    if (inputFile.is_open()) {
        inputFile.close();
    }
    if (outputFile.is_open()) {
        outputFile.close();
    }

    return 0;
}


void doTask(ifstream& inputFile, ofstream& outputFile,
           SignUpController& signUpController, LoginController& loginController,
           LogoutController& logoutController, ExitController& exitController,
           RegisterBikeController& registerBikeController, RentBikeController& rentBikeController,
           ViewRentalController& viewRentalController) {
    /*
    메인함수 (파싱 및 분기 처리)
    Controller가 먼저 호출되고, Controller가 UI를 생성한다.
    */

    // 메뉴 파싱 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int isProgramExit = 0;

    // 메뉴 입력받아서 분기처리
    while(!isProgramExit) {
        // 메뉴 입력받기
        inputFile >> menu_level_1 >> menu_level_2 ;
        switch(menu_level_1) {
            case 1:
                switch(menu_level_2) {
                    case 1: // 1.1. 회원가입
                        signUpController.processSignUp(inputFile, outputFile);
                        break;
                }
                break;
            case 2:
                switch(menu_level_2) {
                    case 1: // 2.1. 로그인
                        loginController.processLogin(inputFile, outputFile);
                        break;
                    case 2: // 2.2. 로그아웃
                        logoutController.processLogout(inputFile, outputFile);
                        break;
                }
                break;
            case 3:
                switch(menu_level_2) {
                    case 1: // 3.1. 자전거 등록
                        registerBikeController.processRegisterBike(inputFile, outputFile);
                        break;
                }
                break;
            case 4:
                switch(menu_level_2) {
                    case 1: // 4.1. 자전거 대여
                        rentBikeController.processRentBike(inputFile, outputFile);
                        break;
                }
                break;
            case 5:
                switch(menu_level_2) {
                    case 1: // 5.1. 자전거 대여 리스트 조회
                        viewRentalController.processViewRental(inputFile, outputFile);
                        break;
                }
                break;
            case 6: // 시스템 종료
                switch(menu_level_2) {
                    case 1: // 6.1 종료
                        exitController.processExit(inputFile, outputFile);
                        isProgramExit = 1; // 종료변수 update -> while문 탈출
                        break;
                }
                break;
        }
    }
}




