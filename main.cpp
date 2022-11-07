#include <iostream>
#include "service/ObjectService.h"
#include "service/ObjectServiceForArrays.h"
#include "Fraction.h"
#include "Prism.h"
#include "Polynom.h"

using namespace std;

int main() {
    Polynom<double> polynom1(5, 2);
    Polynom<double> polynom2(3, 7);
    Polynom<double> polynom3(4, 4);

    Prism<double> prism1(5, 7, 8);
    Prism<double> prism2(5, 4, 8);
    Prism<double> prism3(2, 7, 7);

    ObjectService<Polynom<double>> objectService;
    ObjectService<Prism<double>> objectService1;

    objectService.findProduct(polynom1, polynom2, polynom3).toString();
    objectService1.findAverage(prism1, prism2, prism3).toString();

    return 0;
}
