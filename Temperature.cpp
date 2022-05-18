// Copyright 2022 MTHS
// Author: Andrew Ten-Den
// This program calculates the temperature in fahrenheit
//    with user input

#include <iostream>

void CalculateFahrenheit() {
    // this function calculates the temperature in fahrenheit
    std::string celsiusAsString;
    int celsius;
    int fahrenheit;

    // input
    std::cout << "Enter temperature in °C: ";
    std::cin >> celsiusAsString;

    try {
        celsius = std::stoi(celsiusAsString);

        // process
        fahrenheit = celsius * 9 / 5 + 32;

        // output
        std::cout << "" << std::endl;
        std::cout << "Temperature is " << fahrenheit << " °F." << std::endl;

        std::cout << "\nDone." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nPlease enter an integer" << std::endl;
    }
}

main() {
    // this function just calls other functions

    // call functions
    CalculateFahrenheit();
}
