#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number = 42;
    double pi = 3.14159;

    cout.setf(std::ios::showpos); // Always show the sign
    cout.setf(std::ios::uppercase); // Convert alphabetic characters to uppercase

    cout << std::hex << number <<endl; // Output as hexadecimal
    cout << std::setw(10) << std::setfill('*') << std::right << number <<endl; // Left-aligned with width and fill
    cout << std::scientific << std::setprecision(4) << pi <<endl; // Output in scientific notation with precision

    cout.unsetf(std::ios::showpos); // Unset the showpos flag
    cout.unsetf(std::ios::uppercase); // Unset the uppercase flag

    return 0;
}