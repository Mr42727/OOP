#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator = 0, int denominator = 1) : numerator(numerator), denominator(denominator) {}
    
    Fraction operator+(const Fraction& other) const {
        int new_numerator = (numerator * other.denominator) + (other.numerator * denominator);
        int new_denominator = denominator * other.denominator;
        return Fraction(new_numerator, new_denominator);
    }
    
    Fraction operator/(const Fraction& other) const {
        int new_numerator = numerator * other.denominator;
        int new_denominator = denominator * other.numerator;
        return Fraction(new_numerator, new_denominator);
    }
    
    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }
};

int main() {
    int num_fractions;
    cout << "Enter the number of fractions: ";
    cin >> num_fractions;
    
    Fraction fractions[num_fractions];
    
    for (int i = 0; i < num_fractions; i++) {
        int numerator, denominator ;
        char sep;
        cout << "Enter fraction (in this format n/d) " << i + 1 << ": ";
        cin >> numerator >>sep>> denominator;
        fractions[i] = Fraction(numerator, denominator);
    }
    
    Fraction sum;
    for (int i = 0; i < num_fractions; i++) {
        sum = sum + fractions[i];
    }
    
    Fraction average = sum / Fraction(num_fractions);
	cout << "The average is: " << average <<endl;
    
    return 0;
}

