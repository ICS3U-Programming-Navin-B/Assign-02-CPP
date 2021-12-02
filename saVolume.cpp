// Copyright (c) 2021 Ms Raffin All rights reserved.
// 
// Created by: Navin Baleko
// Created on: Dec. 2, 2021
// This program asks the user for the length
// of a cube then calcules surface area of a cube
#include <iostream>
#include <cmath>

// declare variables
float length, volume, surfaceArea;

int main() {
  // get input from user
  std::cout << "Today we will calculate the volume and surfaceArea of a cube\n";
  std::cout << "Enter the length (mm): ";
  std::cin >> length;

  // calculate volume and surfaceArea
  volume = pow(length, 3);
  surfaceArea = 6 * pow(length, 2);

  // display the results to the user
  std::cout << std::endl;
  std::cout << "Volume = " << volume << " mm^2.\n";
  std::cout << "Surface area = " << surfaceArea << "mm.\n";
}
