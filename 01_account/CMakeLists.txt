cmake_minimum_required(VERSION 3.19)
project(account)

set(CMAKE_CXX_STANDARD 14)

add_executable(account
        main.cpp Account.cpp Account.h CheckingAccount.cpp CheckingAccount.h SavingsAccount.cpp SavingsAccount.h)
