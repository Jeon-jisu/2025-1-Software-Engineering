// RegisterBikeController.cpp
#include "RegisterBikeController.h"
#include "RegisterBikeUI.h"

RegisterBikeController::RegisterBikeController(BikeCollection* bikeCollection) {
    this->bikeCollection = bikeCollection;
    registerBikeUI = new RegisterBikeUI();
}
RegisterBikeController::~RegisterBikeController() {
    delete registerBikeUI;
}
void RegisterBikeController::registerBike(const string& bikeId, const string& pname) {
    Bike newBike(bikeId, pname);
    // bike id와 pname와 같은 자전거정보를 등록한다.
    bikeCollection->registerBike(newBike);
}
void RegisterBikeController::processRegisterBike(ifstream& inputFile, ofstream& outputFile) {
    string bikeId, productName;
    registerBikeUI->getInputFromUser(inputFile, bikeId, productName);
    registerBike(bikeId, productName);
    registerBikeUI->displayResult(outputFile, bikeId, productName);
}