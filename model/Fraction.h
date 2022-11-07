//
// Created by Sergey Chernikov on 11/6/22.
//

#ifndef LAB4_FRACTION_H
#define LAB4_FRACTION_H

#include <iostream>
#include "Object.h"

using namespace std;

template <class T>
class Fraction : public Object<T> {
private:
    T numerator;
    T denominator;

public:
    Fraction() {}

    Fraction(T numerator, T denominator) {
        this -> numerator = numerator;
        this -> denominator = denominator;
    }

    T getNumerator() const {
        return numerator;
    }

    void setNumerator(T numerator) {
        Fraction::numerator = numerator;
    }

    T getDenominator() const {
        return denominator;
    }

    void setDenominator(T denominator) {
        Fraction::denominator = denominator;
    }

    Fraction operator + (Fraction const &fraction) {
        return Fraction(this->numerator + fraction.numerator, this->denominator + fraction.denominator);
    }

    Fraction operator - (Fraction const &fraction) {
        return Fraction(this->numerator - fraction.numerator, this->denominator - fraction.denominator);
    }

    Fraction operator * (Fraction const &fraction) {
        return Fraction(this->numerator * fraction.numerator, this->denominator * fraction.denominator);
    }

    Fraction operator / (Fraction const &fraction) {
        return Fraction(this->numerator / fraction.numerator, this->denominator / fraction.denominator);
    }

    bool operator > (Fraction const &fraction) {
        if (this->numerator > fraction.numerator) return true;
        else return false;
    }

    bool operator < (Fraction const &fraction) {
        if (this->numerator < fraction.numerator) return true;
        else return false;
    }

    bool operator == (Fraction const &fraction) {
        if ((this->numerator == fraction.numerator)
            && (this->denominator == fraction.denominator)) return true;
        else false;

    }

    void toString() override {
        cout << "Fraction:" << endl;
        cout << numerator << endl;
        cout << "---" << endl;
        cout << denominator << endl;
    }
};


#endif //LAB4_FRACTION_H
