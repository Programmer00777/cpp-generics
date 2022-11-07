cmake_minimum_required(VERSION 3.23)
project(lab4)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab4 main.cpp model/Fraction.h model/Polynom.h model/Prism.h service/ObjectService.h service/ObjectServiceForArrays.h utils/ProgramRunner.h model/Object.h utils/RandomObjectGenerator.h)
