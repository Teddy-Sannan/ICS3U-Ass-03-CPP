// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This program takes user number
//   and displys the weekday

#include <iostream>

int main() {
    // variable declaration
    int number;

    // input
    std::cout << "Enter a number between 1 and 7" << std::endl;
    std::cout << "1 being Monday and 7 being Sunday: ";
    std::cin >> number;

    // process & output
    switch (number) {
        case 1 :
            std::cout << "Monday" << std::endl;
            break;
        case 2 :
            std::cout << "Tuesday" << std::endl;
            break;
        case 3 :
            std::cout << "Wednesday" << std::endl;
            break;
        case 4 :
            std::cout << "Thursady" << std::endl;
            break;
        case 5 :
            std::cout << "Friday" << std::endl;
            break;
        case 6 :
            std::cout << "Saturday" << std::endl;
            break;
        case 7 :
            std::cout << "Sunday" << std::endl;
            break;
        default :
            std::cout << "Please enter a valid response" << std::endl;
    }
}
