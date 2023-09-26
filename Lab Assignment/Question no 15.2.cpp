#include <iostream>
using namespace std;

class Fraction {
public:
    int numerator, denominator;
public:
    Fraction() { numerator = 0; denominator = 1; }
    Fraction(int n, int d) { numerator = n; denominator = d; }
    void getFraction() {
        char slash;
        cin >> numerator >> slash >> denominator;
    }
    void putFraction() const { cout << numerator << "/" << denominator; }
    double convertToDecimal() const { return (double)numerator / denominator; }
};

int main() {
    int numFractions;
    cout << "How many fractions? ";
    cin >> numFractions;
    
    Fraction fractions[numFractions];
    
    for (int i = 0; i < numFractions; i++) {
        cout << "Enter fraction " << i+1 << ": ";
        fractions[i].getFraction();
    }
    
    Fraction sum;
    for (int i = 0; i < numFractions; i++) {
        sum = Fraction(sum.numerator * fractions[i].denominator + fractions[i].numerator * sum.denominator, sum.denominator * fractions[i].denominator);
    }
    
    Fraction average(sum.numerator, numFractions * sum.denominator);
    
    cout << "The average is: ";
    average.putFraction();
    cout << " (" << average.convertToDecimal() << ")" << endl;
    
    return 0;
}
