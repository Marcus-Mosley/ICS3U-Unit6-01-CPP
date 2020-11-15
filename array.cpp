// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on November 2020
// This program finds the average of a random array of 10 numbers

#include <iostream>
#include <iomanip>
#include <random>
#include <numeric>

int main() {
    // This program finds the average of a random array of 10 numbers

    int number_array[10];
    int number;
    float average;

    // Input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device random_device;
        std::mt19937 engine{random_device()};
        std::uniform_int_distribution<> dist(1, 100);
        number = dist(engine);
        number_array[loop_counter] = number;
         std::cout << "The random number is: "
            << std::fixed << number << std::endl;
    }
    std::cout << " " << std::endl;

    // Process & Output
    average = std::accumulate(std::begin(number_array), std::end(number_array),
        0, std::plus<int>());
    average /= 10;
    std::cout << "The average is " << std::fixed << std::setprecision(2)
    << average << std::endl;
}
