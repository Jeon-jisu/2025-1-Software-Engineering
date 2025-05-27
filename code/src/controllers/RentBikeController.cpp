#include "../../include/controllers/RentBikeController.h"
#include "../../include/ui/RentBikeUI.h"


RentBikeController::RentBikeController(BikeCollection* bikeCollection, RentalCollection* rentalCollection, CurrentAccount* currentAccount) {
    this->bikeCollection = bikeCollection;
    this->rentalCollection = rentalCollection;
    this->currentAccount = currentAccount;
    rentBikeUI = new RentBikeUI();
}
RentBikeController::~RentBikeController() {
    delete rentBikeUI;
}
void RentBikeController::rentBike(const string& bikeId) {
    string userId = currentAccount->getCurrentAccount();
    Rental newRental(bikeId, userId);
    // 자전거 id를 통해 rental 정보에다 자전거 id와 currentuserid 정보 추가하기
    rentalCollection->addRental(newRental);
}
void RentBikeController::processRentBike(ifstream& inputFile, ofstream& outputFile) {
    string bikeId;
    rentBikeUI->getInputFromUser(inputFile, bikeId); //입력받기
    Bike* bike = bikeCollection->findById(bikeId);
    rentBike(bikeId);
    rentBikeUI->displayResult(outputFile, bikeId, bike->getPname()); //출력
}
