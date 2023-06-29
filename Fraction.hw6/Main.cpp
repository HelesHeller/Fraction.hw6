#include <iostream>
#include<Windows.h>
#include "Fraction.h"

using namespace std;



int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    Fraction sum = f1 + f2;
    Fraction difference = f1 - f2;
    Fraction product = f1 * f2;
    Fraction quotient = f1 / f2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
