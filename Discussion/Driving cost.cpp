
/******************************************************************************
# Author:           Zakeriya Muhumed
# Lab:              Discussion #2
# Date:             Jan 27, 2022
# Description:      Driving Cost
# Input:            Float mpg, Float dpg
# Output:           Cost to drive 20, 75, 500
# Sources:          Discussion 2 instruction
#******************************************************************************/
#include <iomanip>
#include <iostream>
using namespace std;
void invalid();

int main() {
  double mpg = 0;
  double dpg = 0;
  double miles = 0;
  double cost = 0;
  cout << "\nEnter the miles per gallon: ";
  cin >> mpg;
  if (mpg<0){
    void invalid();
    cin >> mpg;
  }
  cout << "\nEnter the price per gallon: ";
  cin >> dpg;
  if (dpg <0){
   void invalid();
    cin >> dpg;
  }
  cout << "\nMiles traveled: ";
  cin >> miles;
  if (miles<0){
    void invalid();
    cin >> miles;
  }
  cout << fixed << setprecision(2);
  cost = (miles/mpg) *dpg;
  cout << "\nThe total cost of gas is: " << cost << endl;
  cout << "\nThank you for using this program."<< endl;
  return 0;
}
void invalid(){
  cout << "\nInvalid input, try again: ";
  
}
