// Copyright (c) 2021 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Dec. 13, 2021
// This program asks the user for the month as a
// number between 1 and 12. It then displays the
// month as a string to the user.

#include <iostream>

// declare month variable for user input
int userMonth;


int main() {
    // ask user for month
    std::cout << "Enter the number for a month (i.e 1 for January): ";
    std::cin >> userMonth;

    // state the month that is selected as a string
    switch (userMonth) {
        case 1 :
        std::cout << userMonth << " represents the month of January.\n";
        break;

        case 2 :
        std::cout << userMonth << " represents the month of February.\n";
        break;

        case 3 :
        std::cout << userMonth << " represents the month of March.\n";
        break;

        case 4 :
        std::cout << userMonth << " represents the month of April.\n";
        break;

        case 5 :
        std::cout << userMonth << " represents the month of May.\n";
        break;

        case 6 :
        std::cout << userMonth << " represents the month of June.\n";
        break;

        case 7 :
        std::cout << userMonth << " represents the month of July.\n";
        break;

        case 8 :
        std::cout << userMonth << " represents the month of August.\n";
        break;

        case 9 :
        std::cout << userMonth << " represents the month of September.\n";
        break;

        case 10 :
        std::cout << userMonth << " represents the month of October.\n";
        break;

        case 11 :
        std::cout << userMonth << " represents the month of November.\n";
        break;

        case 12 :
        std::cout << userMonth << " represents the month of December.\n";
        break;

        default :
        std::cout << "Error. " << userMonth << " does not represent a month.\n";
    }
}
