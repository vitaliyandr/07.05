#include <iostream>

using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

Fraction simplify(Fraction f) {
    int divisor = gcd(f.numerator, f.denominator);
    f.numerator /= divisor;
    f.denominator /= divisor;
    return f;
}

Fraction add(Fraction f1, Fraction f2) {
    Fraction result = {
        f1.numerator * f2.denominator + f2.numerator * f1.denominator,
        f1.denominator * f2.denominator
    };
    return simplify(result);
}

Fraction subtract(Fraction f1, Fraction f2) {
    Fraction result = {
        f1.numerator * f2.denominator - f2.numerator * f1.denominator,
        f1.denominator * f2.denominator
    };
    return simplify(result);
}

Fraction multiply(Fraction f1, Fraction f2) {
    Fraction result = {
        f1.numerator * f2.numerator,
        f1.denominator * f2.denominator
    };
    return simplify(result);
}

Fraction divide(Fraction f1, Fraction f2) {
    Fraction result = {
        f1.numerator * f2.denominator,
        f1.denominator * f2.numerator
    };
    return simplify(result);
}

void printFraction(Fraction f) {
    cout << f.numerator << "/" << f.denominator << endl;
}

int main() {
    Fraction f1 = { 2, 3 };
    Fraction f2 = { 3, 4 };
    Fraction sum = add(f1, f2);
    Fraction diff = subtract(f1, f2);
    Fraction prod = multiply(f1, f2);
    Fraction quot = divide(f1, f2);
    printFraction(sum);
    printFraction(diff);
    printFraction(prod);
    printFraction(quot);

    return 0;
}
