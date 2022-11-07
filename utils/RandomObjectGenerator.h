//
// Created by Sergey Chernikov on 11/7/22.
//

#ifndef LAB4_RANDOMOBJECTGENERATOR_H
#define LAB4_RANDOMOBJECTGENERATOR_H

#include <string>
#include "../model/Object.h"
#include "../model/Fraction.h"
#include "../model/Prism.h"

using namespace std;

template <class T>
class RandomObjectGenerator {
private:
    const string TYPES[3] = {"Fraction", "Polynom", "Prism"};
    const int FRACTION_NUMERATOR_FROM = -20;
    const int FRACTION_NUMERATOR_TO = 20;
    const int FRACTION_DENOMINATOR_FROM = -10;
    const int FRACTION_DENOMINATOR_TO = 10;
    const int POLYNOM_LENGTH_FROM = 1;
    const int POLYNOM_LENGTH_TO = 10;
    const int POLYNOM_EXTENT_FROM = 1;
    const int POLYNOM_EXTENT_TO = 5;
    const int PRISM_BASE_FROM = 1;
    const int PRISM_BASE_TO = 15;
    const int PRISM_HEIGHT_FROM = 1;
    const int PRISM_HEIGHT_TO = 7;

public:
    RandomObjectGenerator<T>() {
        srand((unsigned) time(NULL));
    }

    Object<T>* generateRandomObject() {
        string type = TYPES[rand() % 3];
        Object<T>* object = new Object<T>();
        if (type == "Fraction") {
            object = new Fraction<T>(FRACTION_NUMERATOR_FROM + rand() % ((FRACTION_NUMERATOR_TO + 1) - FRACTION_NUMERATOR_FROM),
                            FRACTION_DENOMINATOR_FROM + rand() % ((FRACTION_DENOMINATOR_TO + 1) - FRACTION_DENOMINATOR_FROM));
        } else if (type == "Polynom") {
            object = new Polynom<T>(POLYNOM_LENGTH_FROM + rand() % ((POLYNOM_LENGTH_TO + 1) - POLYNOM_LENGTH_FROM),
                              POLYNOM_EXTENT_FROM + rand() % ((POLYNOM_EXTENT_TO + 1) - POLYNOM_EXTENT_FROM));
        } else if (type == "Prism") {
            object = new Prism<T>(PRISM_HEIGHT_FROM + rand() % ((PRISM_HEIGHT_TO + 1) - PRISM_HEIGHT_FROM),
                            PRISM_BASE_FROM + rand() % ((PRISM_BASE_TO + 1) - PRISM_BASE_FROM),
                            PRISM_BASE_FROM + rand() % ((PRISM_BASE_TO + 1) - PRISM_BASE_FROM));
        }
        return object;
    }
};


#endif //LAB4_RANDOMOBJECTGENERATOR_H
