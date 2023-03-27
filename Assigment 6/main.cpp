#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
const double PI = M_PI;
using namespace std;
 
int main() {
    double onegumball;
    const float LOAD_FACTOR = .64;
    float radius = 0;
    float volumeJar = 0;
    int numBalls;
    int numEntries= 1;
    int avgNum = 0;
    const string n = "n";
    int Largest = 0;
    char fill;
    cout << "Welcome to my Gumball Guesser program! " << endl;
    do{
        cout << endl << "Enter the radius of a gumball (cm) and the volume of a jar (mL) separate by a space:" << endl;
        cin >> radius;
        cin >> volumeJar;
        onegumball = 4.0 / 3 * PI * (radius * radius * radius);
        numBalls = (volumeJar * LOAD_FACTOR) / onegumball;
        cout << "Estimate of gumballs in the jar: " << numBalls <<
        endl;
        cout << endl << "Do you want to enter more (y/n): ";
        cin >> fill;

        numEntries += 1;
        avgNum = avgNum + numBalls;
        if(radius > radius){
            radius= radius;
        }
        if(numBalls >volumeJar){
            Largest = numBalls;
        }
        
        
    } while (fill != 'n');
    
    cout << endl << "Number of entries: " << numEntries << endl;
    cout << "Average number of gumballs: " << avgNum <<endl;
    cout << "Largest gumball: " << radius << " cm^3"<< endl;
    cout << "Jar size for largest gumball estimate: " << Largest << endl << endl;
    cout << "Thank you for using my program!"<< endl<< endl;
    return 0;

}
