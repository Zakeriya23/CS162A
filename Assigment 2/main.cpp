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
    cout << "Welcome to my gumball guesser program!" << endl << endl;
    cout << "Enter the radius of a gumball (cm) and the volume of a jar (mL) separate by a space:" << endl;
    cin >> radius;
    cin >> volumeJar;
    onegumball = 4.0 / 3 * PI * (radius * radius * radius);
    numBalls = (volumeJar * LOAD_FACTOR) / onegumball;
    cout << "Estimate of gumballs in the jar: " << numBalls <<
    endl;
    cout << "Thank you for using my program!"<< endl;
    return 0;
}
