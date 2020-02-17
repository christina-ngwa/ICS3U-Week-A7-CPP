// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: December 2019
// This program makes a grocery list

#include <string>
#include <array>
#include <iostream>


std::string MakeList(std::string fruits[], std::string veggies[]) {
    // This function creates a grocery list
    std::array<std::string, 6> groceryList;

    // combines elements alternately in one array
    for (int counter = 0; counter < 3; counter++) {
        groceryList = fruits[counter];
        groceryList = veggies[counter]; }

    return groceryList;
} 


main() {
    // This asks for grocery items
    std::array<std::string, 3> fruits;
    std::array<std::string, 3> veggies;
    std::string fruit;
    std::string veggie;
    std::string groceryList;
    
    // output
    std::cout << "Welcome to the useless all-vegan grocery list maker!";

    // input for fruits
    for (int counter = 0; counter < 3; counter++) {
        std::cout << "What fruits will you buy: ";
        std::cin >> fruit;
        fruits[counter] = fruit; }

    // input for veggies
    for (int counter = 0; counter < 3; counter++) {
        std::cout << "What veggie will you buy: ";
        std::cin >> veggie;
        veggies[counter] = veggie; }

    // call function
    groceryList = MakeList(fruits, veggies);

    // output
    std::cout << std::endl;
    std::cout << "This is your grocery list:" << std::endl;
    for (int counter = 0; counter < 6; counter++) {
        std::cout << "☐" << groceryList[counter] << std::endl; } 
} 
