cmake_minimum_required(VERSION 3.20)
project(pooAccounts)

set(CMAKE_CXX_STANDARD 14)

add_executable(pooAccounts main.cpp Account.cpp Account.h AccountCurrent.cpp AccountCurrent.h AccountDeposit.cpp AccountDeposit.h ServiceAccounts.cpp ServiceAccounts.h TypeAccount.h)
