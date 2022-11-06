#include <iostream>
#include "service/ObjectService.h"
#include "Fraction.h"
#include "Prism.h"
#include "Polynom.h"
#include <vector>

int main() {
//    Fraction<int> fraction1(6, 7);
//    Fraction<int> fraction2(10, 7);
//    Fraction<int> fraction3(17, 7);
//
//    Prism<double> prism1(5.0, 10.5, 7.0);
//    Prism<double> prism2(5.0, 7.0, 15.0);
//    Prism<double> prism3(5.0, 11.0, 7.0);
//
//    Polynom<double> polynom1(5.0, 2.0);
//    Polynom<double> polynom2(7.0, 1.0);
//    Polynom<double> polynom3(6.0, 3.0);
//
//    ObjectService<Fraction<int>> objectService;
//    ObjectService<Prism<double>> objectService1;
//    ObjectService<Polynom<double>> objectService2;
//
//    Fraction<int> maxFraction = objectService.findMax(fraction1, fraction2, fraction3);
//    Prism<double> maxPrism = objectService1.findProduct(prism1, prism2, prism3);
//    Polynom<double> maxPolynom = objectService2.findMax(polynom1, polynom2, polynom3);
//
//    maxFraction.toString();
//    cout << endl;
//    maxPrism.toString();
//    cout << endl;
//    maxPolynom.toString();

    vector<Prism<int>> prisms;
    prisms.push_back(Prism<int>(5, 7, 15));
    prisms.push_back(Prism<int>(5, 7, 15));
    prisms.push_back(Prism<int>(5, 6, 15));
    prisms.push_back(Prism<int>(5, 7, 15));
    Prism<int> prismPredicate(5, 7, 15);
//    Prism<int> prisms[4] = {Prism<int>(5, 7, 15),
//                               Prism<int>(5, 6, 15),
//                               Prism<int>(3, 7, 15),
//                               Prism<int>(5, 7, 15)};
    ObjectService<Prism<int>> service;

    cout << service.countMatchingObjects(prisms, prismPredicate);

    return 0;
}
