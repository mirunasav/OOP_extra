cmake_minimum_required(VERSION 3.21)
project(Agency_UML)

set(CMAKE_CXX_STANDARD 14)

add_executable(Agency_UML main.cpp Agency.cpp Agency.h Advertisment.cpp Advertisment.h HouseAdvertisment.cpp HouseAdvertisment.h ApartmentAdvertisment.cpp ApartmentAdvertisment.h)
