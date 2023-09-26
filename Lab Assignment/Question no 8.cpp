#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int num = 0, int den = 1): numerator(num), denominator(den) {}
    void getFraction() {
        char slash;
        cout << "Enter fraction in the form a/b: ";
        cin >> numerator >> slash >> denominator;
    }
    void showFraction()  {
        cout << numerator << "/" << denominator;
    }
    Fraction addFraction(const Fraction& f2) const {
        Fraction result;
        result.numerator = numerator * f2.denominator + f2.numerator * denominator;
        result.denominator = denominator * f2.denominator;
        return result;
    }
};

int main() {
    char choice;
    Fraction f1, f2, sum;

    do {
        f1.getFraction();
        f2.getFraction();
        sum = f1.addFraction(f2);

        cout << "\nSum of fractions: ";
        f1.showFraction();
        cout << " + ";
        f2.showFraction();
        cout << " = ";
        sum.showFraction();

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
