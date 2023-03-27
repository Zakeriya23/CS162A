
/******************************************************************************
# Author:           Zakeriya Muhumed
# Lab:              Discussion #4
# Date:             Feb 25, 2022
# Description:      Change
# Input:            total change
# Output:           amount of chnage in dollars/quarter etc
# Sources:          Discussion 4 instruction 
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 int totalChange;
 int numOfDollars;
 int numOfQuarters;
 int numOfDimes;
 int numOfNickels;
 int numOfPennies;
 

 cout << "Welcome to change Calculations" << endl << "Insert total change here: " << endl;
 cin >> totalChange;

 if (totalChange >= 100) {
     numOfDollars = totalChange / 100;
      totalChange -= (numOfDollars * 100);
      cout << numOfDollars << "  Dollar" << endl;
    } else if (numOfDollars > 0) {
      cout << numOfDollars << "  Dollars" << endl;
    }
  
if (totalChange >= 25) {
      numOfQuarters = totalChange / 25;
      totalChange -= (numOfQuarters * 25);
      cout << numOfQuarters << "  Quarter" << endl;
    } else if (numOfQuarters > 0) {
      cout << numOfQuarters << "  Quarters" << endl;
    }

if (totalChange >= 10) {
      numOfDimes = totalChange / 10;
      totalChange -= (numOfDimes * 10);
      cout << numOfDimes << "  Dime" << endl;
    } else if (numOfDimes > 0) {
      cout << numOfDimes << "  Dimes" << endl;
    }

if (totalChange >= 5) {
      cout << numOfNickels << "  Nickel" << endl;
    } else if (numOfNickels > 0) {
      numOfNickels = totalChange / 5;
      totalChange -= (numOfNickels * 5);
      cout << numOfNickels << "  Nickels" << endl;
    }

if (totalChange >= 10) {
      cout << numOfPennies << "  Penny" << endl;
    } else if (numOfPennies > 0) {
      numOfPennies = totalChange / 1;
      totalChange -= (numOfPennies * 1);
      cout << numOfPennies << "  Pennies" << endl;
    }
    return 0;
}



