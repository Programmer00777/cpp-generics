//
// Created by Sergey Chernikov on 11/6/22.
//

#ifndef LAB4_OBJECTSERVICE_H
#define LAB4_OBJECTSERVICE_H

#include <cmath>
#include <vector>

template <class T>
class ObjectService {
private:
    T object1;
    T object2;
    T object3;

public:
    ObjectService() {}

    template <typename E>
    T findMax(E obj1, E obj2, E obj3) {
        if (obj1 > obj2) {
            if (obj1 > obj3) return obj1;
            else return obj3;
        }  else {
            if (obj2 > obj3) return obj2;
            else return obj3;
        }
    }

    template <typename E>
    T findMin(E obj1, E obj2, E obj3) {
        if (obj1 < obj2) {
            if (obj1 < obj3) return obj1;
            else return obj3;
        } else {
            if (obj2 < obj3) return obj2;
            else return obj3;
        }
    }

    template <typename E>
    T findAverage(E obj1, E obj2, E obj3) {
        E result = (obj1 + obj2 + obj3) / 3;
        return result;
    }

    template <typename E>
    T findMeanSquare(E obj1, E obj2, E obj3) {
        E result = (obj1*obj1 + obj2*obj2 + obj3*obj3); /// 3;
        return result;
    }

    template <typename E>
    T findSum(E obj1, E obj2, E obj3) {
        return obj1 + obj2 + obj3;
    }

    template <typename E>
    T findProduct(E obj1, E obj2, E obj3) {
        return obj1 * obj2 * obj3;
    }
};


#endif //LAB4_OBJECTSERVICE_H
