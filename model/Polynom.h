//
// Created by Sergey Chernikov on 11/6/22.
//

#ifndef LAB4_POLYNOM_H
#define LAB4_POLYNOM_H

#include <iostream>

using namespace std;

template <class T>
class Polynom : public Object<T> {
private:
    T length;
    T extent;

public:
    Polynom() {}

    Polynom(T length, T extent) : length(length), extent(extent) {}

    T getLength() const {
        return length;
    }

    void setLength(T length) {
        Polynom::length = length;
    }

    T getExtent() const {
        return extent;
    }

    void setExtent(T extent) {
        Polynom::extent = extent;
    }

    Polynom operator + (Polynom const &polynom) {
        return Polynom(this->length + polynom.length, this->extent + polynom.extent);
    }

    Polynom operator - (Polynom const &polynom) {
        return Polynom(this->length - polynom.length, this->extent - polynom.extent);
    }

    Polynom operator * (Polynom const &polynom) {
        return Polynom(this->length * polynom.length, this->extent * polynom.extent);
    }

    Polynom operator / (Polynom const &polynom) {
        return Polynom(this->length / polynom.length, this->extent / polynom.extent);
    }

    bool operator > (Polynom const &polynom) {
        if ((this->length + this->extent) > (polynom.length + polynom.extent)) return true;
        return false;
    }

    bool operator < (Polynom const &polynom) {
        if ((this->length + this->extent) < (polynom.length + polynom.extent)) return true;
        return false;
    }

    bool operator == (Polynom const &polynom) {
        if ((this->extent == polynom.extent) && (this->length == polynom.length)) return true;
        else false;
    }

    void toString() override {
        cout << "Polynom:" << endl;
        cout << "Length: " << length << endl;
        cout << "Extent: " << extent << endl;
    }
};


#endif //LAB4_POLYNOM_H
