
/******************************************************************************
# Author:           Zakeriya Muhumed
# Lab:              Discussion #6
# Date:             March 10, 2022
# Description:      This program promps for a series of integers and returns the
#                   count, sum, average, minimum, and maximum
# Input:            int currNum
# Output:           int count, int sum, double average, int minNum, int maxNum
# Sources:          none      
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  const string formatFunction = "----------------------------------------";
  int currNum = 0;
  int count = 0;
  int minNum = 0;
  int maxNum = 0;
  int sum = 0;
  double average = 0.0;

  cout << "Welcome to my statistics calculator!"<< endl << endl;
  cout << "Enter a list of integers. Enter -999 to end and view results : ";
  cin >> currNum;
  maxNum = currNum;
  minNum = currNum;

  while (currNum > -999) {
    count += 1;
    sum += currNum;
    if (currNum > maxNum) {
      maxNum = currNum;
    }
    if (currNum < minNum) {
      minNum = currNum;
    }
    cin >> currNum;
  }

  average = static_cast<double>(sum) / count;

  cout << endl << "Variables listed: "<< count << endl;
  cout << formatFunction << endl;
  cout << "Sum: " << sum << endl;
  cout << formatFunction << endl;
  cout << fixed << setprecision(2) << "Average: " << average << endl;
  cout << formatFunction << endl;
  cout << "Minimum: " << minNum << endl;
  cout << formatFunction << endl;
  cout << "Maximum: " << maxNum << endl;
  cout << formatFunction << endl;
  
  cout << endl << "Thank you for using my stats calculator!" << endl;
  
  return 0;
}







