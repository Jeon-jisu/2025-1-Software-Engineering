cmake_minimum_required(VERSION 3.31)
project(2_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(2_1 main.cpp
        Account.h
        Bike.h
        AccountCollection.h
        BikeCollection.h
        RentalCollection.h
        CurrentAccount.h
        SignUpUI.h
        LoginUI.h
        RegisterBikeUI.h
        LogoutUI.h
        RentBikeUI.h
        ViewRentalUI.h
        SignUpController.h
        LoginController.h
        LogoutController.h
        RentBikeController.h
        ViewRentalController.h
        RegisterBikeController.h
        Rental.h
        AccountCollection.cpp
        RentalCollection.cpp
        BikeCollection.cpp
        LoginController.cpp
        SignUpController.cpp
        LogoutController.cpp
        RegisterBikeController.cpp
        RentBikeController.cpp
        ViewRentalController.cpp
        Account.cpp
        Bike.cpp
        CurrentAccount.cpp
        Rental.cpp
        LoginUI.cpp
        LogoutUI.cpp
        RegisterBikeUI.cpp
        RentBikeUI.cpp
        SignUpUI.cpp
        ViewRentalUI.cpp
        ExitUI.cpp
        ExitUI.h
        ExitController.h
        ExitController.cpp
)
