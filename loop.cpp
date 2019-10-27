// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: October 2019
// This program does looping


#include <iostream>
#include <string>

main() {
    int sum = 0;
    int counter = 0;
    int integer = 0;

    std::cout << "What is your number: " << std::endl;
    std::cin >> integer;


    while (counter <= integer) {
        sum = sum + counter;
        counter += 1;
    }
    std::cout << "The answer is " << sum << "." << std::endl;
}
