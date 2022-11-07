//
// Created by Sergey Chernikov on 11/6/22.
//

#ifndef LAB4_PRISM_H
#define LAB4_PRISM_H

#include <iostream>

using namespace std;

template <class T>
class Prism : public Object<T> {
private:
    T height;
    T bottomBase;
    T topBase;

public:
    Prism() {}

    Prism(T height, T bottomBase, T topBase) : height(height), bottomBase(bottomBase), topBase(topBase) {}

    T getHeight() const {
        return height;
    }

    void setHeight(T height) {
        Prism::height = height;
    }

    T getBottomBase() const {
        return bottomBase;
    }

    void setBottomBase(T bottomBase) {
        Prism::bottomBase = bottomBase;
    }

    T getTopBase() const {
        return topBase;
    }

    void setTopBase(T topBase) {
        Prism::topBase = topBase;
    }

    Prism operator + (Prism const &prism) {
        return Prism(this->height + prism.height, this->bottomBase + prism.bottomBase, this->topBase + prism.topBase);
    }


    Prism operator - (Prism const &prism) {
        return Prism(this->height - prism.height, this->bottomBase - prism.bottomBase, this->topBase - prism.topBase);
    }

    Prism operator * (Prism const &prism) {
        return Prism(this->height * prism.height, this->bottomBase * prism.bottomBase, this->topBase * prism.topBase);
    }

    Prism operator / (Prism const &prism) {
        return Prism(this->height / prism.height, this->bottomBase / prism.bottomBase, this->topBase / prism.topBase);
    }

    bool operator > (Prism const &prism) {
        if ((this->topBase+this->bottomBase) > (prism.topBase+prism.bottomBase)) return true;
        else false;
    }

    bool operator < (Prism const &prism) {
        if ((this->topBase+this->bottomBase) < (prism.topBase+prism.bottomBase)) return true;
        else false;
    }

    bool operator == (Prism const &prism) {
        if ((this->height == prism.height)
            && (this->bottomBase == prism.bottomBase)
            && (this->topBase == prism.topBase)) return true;
        else false;
    }

    void toString() override {
        cout << "Prism:" << endl;
        cout << "Height: " << height << endl;
        cout << "Bottom base: " << bottomBase << endl;
        cout << "Top base: " << topBase << endl;
    }
};

#endif //LAB4_PRISM_H
