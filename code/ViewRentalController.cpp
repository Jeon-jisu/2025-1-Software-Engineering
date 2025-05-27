#include "ViewRentalController.h"
#include "ViewRentalUI.h"
#include <algorithm>

ViewRentalController::ViewRentalController(BikeCollection* bikeCollection, RentalCollection* rentalCollection, CurrentAccount* currentAccount) {
    // 생성 후 대입
    this->bikeCollection = bikeCollection;
    this->rentalCollection = rentalCollection;
    this->currentAccount = currentAccount;
    viewRentalUI = new ViewRentalUI();
}

ViewRentalController::~ViewRentalController() {
    delete viewRentalUI;
}

// 기존 함수 그대로 유지
vector<pair<string, string>> ViewRentalController::viewRental() {
    string userId = currentAccount->getCurrentAccount();//현재 계정 정보 확인
    vector<string> bikeIds = rentalCollection->getBikeidFromUser(userId);//rentalCollection으로 부터 빌린 bikeid 가져옴.
    vector<pair<string, string>> rentalInfo;

    //출력시 자전거 ID 순으로 출력해야하므로 정렬한다.
    sort(bikeIds.begin(), bikeIds.end());

    for (const string& bikeId : bikeIds) {
        Bike* bike = bikeCollection->findById(bikeId);
        if (bike) {
            rentalInfo.push_back({bikeId, bike->getPname()});
        }
    }
    return rentalInfo;
}
void ViewRentalController::processViewRental(ifstream& inputFile, ofstream& outputFile) {
    vector<pair<string, string>> rentalList = viewRental();
    viewRentalUI->displayResult(outputFile, rentalList);
}