/******************************************************************************
# Author:           Zakeriya Muhumed
# Lab:              Final
# Date:             March 18, 2022
# Description:     Running program
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 
    /* Declares */
  int desireMiles =0;
  int milesSun;
  int milesMon;
  int milesTue;
  int milesWed;
  int milesThur;
  int milesFri;
  int milesSat;
  int sub;
  int sum;
  string react;

  /* value for desire value */
    cout << "Welcome to my Miles Tracker program." << endl << endl;
 do {cout << "How many miles do you want to ride this week? " << endl << endl;
    cin >> desireMiles;
   } while(desireMiles < 0);
  
/* Miles for each week*/
    
  cout << "How many miles did you ride on Sunday? " << endl;
    cin >> milesSun;
    while (milesSun < 0){
      cout << "Miles must be 0 or greater!" << endl;
      cout << "How many miles did you ride on Sunday? " << endl;
        cin >> milesSun;
    }
  cout << "How many miles did you ride on Monday? " << endl;
    cin >> milesMon;
    while (milesMon < 0){
      cout << "Miles must be 0  or greater!" << endl;
      cout << "How many miles did you ride on Monday? " << endl;
        cin >> milesMon;
    }
  cout << "How many miles did you ride on Tuesday? " << endl;
    cin >> milesTue;
    while (milesTue < 0){
      cout << "Miles must be 0 or greater! " << endl;
      cout << "How many miles did you ride on Tuesday? " << endl;
       cin >> milesTue;
    }
    
  cout << "How many miles did you ride on Wednesday? " << endl;
    cin >> milesWed;
    while (milesWed < 0){
      cout << "Miles must be 0 or greater!" << endl;
      cout << "How many miles did you ride on Wednesday? " << endl;
        cin >> milesWed;
      }
    
  cout << "How many miles did you ride on Thursday? " << endl;
    cin >> milesThur;
    while (milesThur < 0){
      cout << "Miles must be 0 or greater! " << endl;
      cout << "How many miles did you ride on Thursday? " << endl;
        cin >> milesThur;
      }
    
  cout << "How many miles did you ride on Friday? " << endl;
    cin >> milesFri;
    while (milesFri < 0){
      cout << "Miles must be 0 or greater! " << endl;
      cout << "How many miles did you ride on Friday? " << endl;
        cin >> milesFri;
      }
  cout << "How many miles did you ride on Saturday? " << endl;
    cin >> milesSat;
    while (milesSat < 0){
      cout << "Miles must be 0 or greater! " << endl;
      cout << "How many miles did you ride on Saturday? " << endl;
        cin >> milesSat;
  }
    
/* Ending */
  sum = milesSun + milesMon + milesTue + milesWed + milesThur + milesFri + milesSat;
sub = (desireMiles - sum);
  cout << endl << endl;
  cout << "You rode " << sum << " miles this week." << endl;
  if (sub < 0){
    string react = "Great job! you exceeded your goal by ";
    cout << react << sub <<" miles!" << endl;
    }
  else if (sub > 0) {
      string react = "Uh oh! You missed your goal by ";
    cout << react << abs(sub) << " Miles!";
    }
  else {
      string react = "Great job! You met your goal!";
    cout << react << endl;
  }
  cout << endl << "Keep riding!" << endl;
    
  
  return 0;
}




