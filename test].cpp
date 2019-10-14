// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This program takes user number
//   and displys the weekday

#include <iostream>

int main() {
    while(true) {
        // variable declaration
        int number;
    
        // input
        std::cout << "Enter a number between 1 and 7" << std::endl;
        std::cout << "1 being Monday and 7 being Sunday: ";
        std::cin >> number;
    
        // process & output
        if (number == 1) {
            std::cout << "Monday" << std::endl;
        } else if (number == 2) {
            std::cout << "Tuesday" << std::endl;
        } else if (number == 3) {
            std::cout << "Wednesday" << std::endl;
        } else if (number == 4) {
            std::cout << "Thursday" << std::endl;
        } else if (number == 5) {
            std::cout << "Friday" << std::endl;
        } else if (number == 6) {
            std::cout << "Saturday" << std::endl;
        } else if (number == 7) {
            std::cout << "Sunday" << std::endl;
        }
        if (number != 1, 2, 3, 4, 5, 6, 7)  {
            std::cout << "Please enter a valid response" << std::endl;
            continue;
        } else {
            break;
        }
    }
}
