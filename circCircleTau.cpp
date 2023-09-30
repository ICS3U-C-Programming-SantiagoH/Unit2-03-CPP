// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Sep 29, 2023
// This program asks the user for the radius and then
// displays the circumference using tau.

#include <iostream>
// Include this for std::setprecision
#include <cmath>  // Include cmath for M_PI
#include <iomanip>

int main() {
    // declare constants
    const float TAU = 2 * M_PI;

    // declare variables
    float radius;
    float circumference;

    // get the radius from the user and display message
    std::cout << "This program will calculate the circumference of a circle";
    std::cout << "With your numbers. ";
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;

    // display the circumference to the user
    std::cout << "\n";
    std::cout << "The circumference of the circle is ";
    std::cout << "Circumference = " << std::fixed << std::setprecision(2)
              << circumference << " cm" << std::endl;
}
