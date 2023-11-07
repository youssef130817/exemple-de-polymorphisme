cmake_minimum_required(VERSION 3.24)
project(list_generique)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(list_generique
        moto.cpp
        voitures.cpp
        vehicules.cpp
        camion.cpp
        main.cpp)
