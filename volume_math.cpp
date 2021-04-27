// Copyright (c) 2020 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Mon,Apr26/2021
// This program calculates the volume of a rectangular prism 


#include <iostream>

int main()
{
	// variable declarations
    int length;
    int width;
    int height;
    int volume;
    // input
    std::cout << "We will calculate the volume of a rectangular prism (cm):" << std::endl;
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;
    std::cout << "Enter the height (cm):";
    std::cin >> height;
    // process
    volume = length*width*height;
    // output
    std::cout << "Area is " << (volume) << "mm2" << std::endl;
}
