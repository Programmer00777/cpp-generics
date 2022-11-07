//
// Created by Sergey Chernikov on 11/7/22.
//

#ifndef LAB4_PROGRAMRUNNER_H
#define LAB4_PROGRAMRUNNER_H


#include <iostream>
#include "../service/ObjectService.h"
#include "../model/Object.h"
#include "../service/ObjectServiceForArrays.h"
#include "RandomObjectGenerator.h"

template <class T>
class ProgramRunner {
private:
    ObjectService<Object<T>> objectService;
    ObjectServiceForArrays<Object<T>> objectServiceForArrays;
    RandomObjectGenerator<T> generator;

    Object<T>* object1;
    Object<T>* object2;
    Object<T>* object3;

public:
    void run() {
        int answer = -1;
        cout << "Hello! It's Program Runner." << endl;
        while (answer != 1 && answer != 2) {
            cout << "Please, the service type to work with:" << endl;
            cout << "1 - ObjectService (working only with 3 objects)" << endl;
            cout << "2 - ObjectServiceForArrays (can handle whatever number of object you want)" << endl;
            cin >> answer;
        }
        int operation = -1;
        switch (answer) {

            case (1):
                cout << "Generating 3 random objects..." << endl;
                object1 = generator.generateRandomObject();
                object2 = generator.generateRandomObject();
                object3 = generator.generateRandomObject();

                cout << "Here they are:" << endl;
                object1->toString();
                object2->toString();
                object3->toString();

                while (operation != 0) {
                    cout << "Choose an operation you want to execute:" << endl;
                    cout << "1 - findMax" << endl;
                    cout << "2 - findMin" << endl;
                    cout << "3 - findAverage" << endl;
                    cout << "4 - findMeanSquare" << endl;
                    cout << "5 - findSum" << endl;
                    cout << "6 - findProduct" << endl;
                    cout << "\n0 - Exit the program" << endl;
                    cin >> operation;

                    switch (operation) {
                        case (1):
                            cout << "Max object is:" << endl;
                            objectService.findMax(object1, object2, object3)->toString();
                            break;
                        case (2):
                            cout << "Min object is:" << endl;
                            objectService.findMin(object1, object2, object3)->toString();
                            break;
                        case (3):
                            break;
                        case (4):
                            break;
                        case (5):
                            break;
                        case (6):
                            break;
                        case (0):
                            break;
                        default:
                            break;
                    }

                }
                break;
            case (2):
                break;
            default:

                break;
        }
    }
};


#endif //LAB4_PROGRAMRUNNER_H
