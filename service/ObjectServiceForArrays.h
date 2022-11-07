//
// Created by Sergey Chernikov on 11/6/22.
//

#ifndef LAB4_OBJECTSERVICEFORARRAYS_H
#define LAB4_OBJECTSERVICEFORARRAYS_H

#include <vector>

using namespace std;

template <class T>
class ObjectServiceForArrays {
public:
    template <typename E>
    T findMax(E object[], int length) {
        E maxObject = object[0];
        for (int i = 1; i < length; i++) {
            if (object[i] > maxObject) maxObject = object[i];
        }

        return maxObject;
    }

    template <typename E>
    T findMin(E object[], int length) {
        E minObject = object[0];
        for (int i = 1; i < length; i++) {
            if (object[i] < minObject) minObject = object[i];
        }

        return minObject;
    }

    template <typename E>
    T findAverage(E object[], int length) {
        E result = object[0];
        for (int i = 1; i < length; i++) {
            result += object[i];
        }
        return result / length;
    }

    template <typename E>
    T findSum(E object[], int length) {
        E result = object[0];
        for (int i = 1; i < length; i++) {
            result += object[i];
        }

        return result;
    }

    template <typename E>
    T findProduct(E object[], int length) {
        E result = object[0];
        for (int i = 1; i < length; i++) {
            result *= object[i];
        }

        return result;
    }

    template <typename E>
    int countMatchingObjects(std::vector<E> objects, E predicate) {
        int count = 0;
        E currentObject;
        for (int i = 0; i < objects.size(); i++) {
            currentObject = objects.at(i);
            if (currentObject == predicate) count++;
        }
        return count;
    }

//    template <typename E>
//    int countMatchingObjects(E objects[], int length, E predicate) {
//        int count = 0;
//        for (int i = 0; i < length; i++) {
//            if (objects[i] == predicate) count++;
//        }
//        return count;
//    }
};


#endif //LAB4_OBJECTSERVICEFORARRAYS_H
