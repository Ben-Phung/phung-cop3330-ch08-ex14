/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ben Phung
 */

#include <iostream>
#include "std_lib_facilities.h"

const float inToCm = 2.54;

float conversion(const float in)
{
  return(int)in * inToCm;
}

using namespace std;

int main() {

  float input, output;

  cout << "Enter number in inches: ";
  cin >> input;
  output = conversion(input);

  cout << input << " inches is " << output << " centimeters";
}