cmake_minimum_required(VERSION 3.31)
project(2_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(2_1 main.cpp
        include/entities/Account.h
        include/entities/Bike.h
        include/collections/AccountCollection.h
        include/collections/BikeCollection.h
        include/collections/RentalCollection.h
        include/entities/CurrentAccount.h
        include/ui/SignUpUI.h
        include/ui/LoginUI.h
        include/ui/RegisterBikeUI.h
        include/ui/LogoutUI.h
        include/ui/RentBikeUI.h
        include/ui/ViewRentalUI.h
        include/controllers/SignUpController.h
        include/controllers/LoginController.h
        include/controllers/LogoutController.h
        include/controllers/RentBikeController.h
        include/controllers/ViewRentalController.h
        include/controllers/RegisterBikeController.h
        include/entities/Rental.h
        src/collections/AccountCollection.cpp
        src/collections/RentalCollection.cpp
        src/collections/BikeCollection.cpp
        src/controllers/LoginController.cpp
        src/controllers/SignUpController.cpp
        src/controllers/LogoutController.cpp
        src/controllers/RegisterBikeController.cpp
        src/controllers/RentBikeController.cpp
        src/controllers/ViewRentalController.cpp
        src/entities/Account.cpp
        src/entities/Bike.cpp
        src/entities/CurrentAccount.cpp
        src/entities/Rental.cpp
        src/ui/LoginUI.cpp
        src/ui/LogoutUI.cpp
        src/ui/RegisterBikeUI.cpp
        src/ui/RentBikeUI.cpp
        src/ui/SignUpUI.cpp
        src/ui/ViewRentalUI.cpp
        src/ui/ExitUI.cpp
        include/ui/ExitUI.h
        include/controllers/ExitController.h
        src/controllers/ExitController.cpp
)
