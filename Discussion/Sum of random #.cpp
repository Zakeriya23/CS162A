
/******************************************************************************
# Author:           Zakeriya Muhumed
# Lab:              Discussion #3
# Date:             Feb 3, 2022
# Description:      Math Tutor
# Input:            Enter
# Output:           Sum of 2 random numbers
# Sources:          Discussion 3 instruction 
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int num1;
  int num2;
  int sum;
srand (time(NULL));
num1 = (rand() % 1000) +1;
num2 = (rand() % 1000) + 1;
sum = num1 + num2;
cout << endl;
cout << " " << num1 << endl;
cout << "+" << endl;
cout << " " << num2 << endl;
cout << " ---" << endl;
cout << "                   "  << endl;
cout << "------------------------------------------------------" << endl;
cout << "Please press enter to see the answer" << endl;
cout << "------------------------------------------------------" << endl;
cin.get();
cout << " " << num1 << endl;
cout << "+" << endl;
cout << " " << num2 << endl;
cout << " ---" << endl;
cout << " " << sum << endl;
  
} 



