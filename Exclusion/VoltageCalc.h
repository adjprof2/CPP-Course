#include <iostream>

using namespace std;

int main() {
    double millivolts;
    std::cout << "Enter the voltage in millivolts: ";
    std::cin >> millivolts;

    double volts = millivolts / 1000.0;;
    std::cout << "The voltage in volts is: " << volts << std::endl;

    double current;
    std::cout << "Enter the current in milliamps: ";
    std::cin >> current;

    double amps = current / 1000.0;
    cout << "The current in amps is: " << amps << endl;

    return 0;
}
