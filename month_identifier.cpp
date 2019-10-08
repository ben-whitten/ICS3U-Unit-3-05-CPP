// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which tells you the name of the month you input.

#include <iostream>

int main() {
    // This is what identifies the month.
    int month_number;

    // input
        std::cout << "Input the number of a month: ";
        std::cin >> month_number;
        std::cout << "" << std::endl;

    // Process
    switch (month_number) {
            case 1 :
                std::cout << "January" << std::endl;
                break;
            case 2 :
                std::cout << "Febuary" << std::endl;
                break;
            case 3 :
                std::cout << "March" << std::endl;
                break;
            case 4 :
                std::cout << "April" << std::endl;
                break;
            case 5 :
                std::cout << "May" << std::endl;
                break;
            case 6 :
                std::cout << "June" << std::endl;
                break;
            case 7 :
                std::cout << "July" << std::endl;
                break;
            case 8 :
                std::cout << "August" << std::endl;
                break;
            case 9 :
                std::cout << "September" << std::endl;
                break;
            default :
                if (month_number == 10) {
                    std::cout << "October" << std::endl;
                } else if (month_number == 11) {
                    std::cout << "November" << std::endl;
                } else if (month_number == 12) {
                    std::cout << "December" << std::endl;
                } else {
                    std::cout << "That's not a month" << std::endl;
        }
    }
}
