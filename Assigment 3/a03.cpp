
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float numOreos;
    float numServing = 0;
    int numCalories = 0;
cout << "Enter numer of Oreos eaten: " << endl;
cin >> numOreos;
    cout << endl;
    numServing = (numOreos / 3);
    numCalories = (numOreos * 53);
    cout << numOreos << " Oreos equal ";
    cout << fixed << setprecision(2);
    cout << numServing << " serving!" << endl;
    cout << "you consumed " << numCalories << " calories." << endl;
    cout << endl;
    cout << "keep eating Oreos!" << endl;
  
}
