
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    std::cout << "Welcome  to TriMet Hop Fastpass!" << endl<< endl;
    char A = 'A';
    char a = 'a';
    char Y = 'Y';
    char y = 'y';
    char H = 'H';
    char h = 'h';
    float Goal;
    float numTicket;
    float numSpent;
    char fastPass;
    float prices;
    float numpaid;
    std::cout << setw(18) << left << "Fastpass Choice " << setw(33)<< " " << setw(8) << right << "Ticket $" << endl;
    std::cout << setfill('-') << setw(47) << "" << setw(4)<< " " << setfill(' ')<< setw(8) << "--------" << endl;
    std::cout << setw(18) << left << "A. Adult (ages 18-64)" << setw(30) << " " << setw (8) << right << "$2.50  " << endl;
    std::cout << setw(34) << left  << "H. Honored Citizen (65+, disabilities)" << setw(13)<< " " << setw(8) << right << "$1.25  " << endl;
    std::cout << setw(18) << left << "Y. Youth (ages 7-17)" << setw(31) << " " << setw (8) << right << "$1.25  " << endl;
    std::cout << endl;
    std::cout << "Note: Ride for 2 hours and 30 minutes with each ticket. "<< endl;
    std::cout << endl;
    std::cout << "Ride free for the rest of the month after" << endl;
    std::cout << "spending $100" << endl;
    std::cout << "with an Adult pass, or $28 with an Honored" << endl;
    std::cout << "Citizen or" << endl;
    std::cout << "Youth pass!" << endl;
    std::cout << "Enter Fastpass (A, H, Y): " << endl;
    std::cin >> fastPass;
    std::cout << "Enter the number tickets purchased this month: " << endl;
    std::cin >> numTicket;

    if (fastPass == A || fastPass == a) {
        Goal= 100;
        prices = 2.50;
        numpaid = (prices * numTicket);
        numSpent = (Goal - numpaid);
        cout << "you have purchased " << numTicket << " tickets!" << endl;
        cout << "You have paid: $ " << numpaid << endl;
        if (numSpent < 0) {
            cout << "You have quality for free ride for the" <<endl;
            cout << "rest of the month." << endl;
        } else {
            cout << "Spend $ " << numSpent << " more to earn free rides for the rest of the month! " << endl;
        
        }
    }
    else if (fastPass == H || fastPass == h){
        Goal = 28;
        prices = 1.25;
        numpaid = (prices * numTicket);
        numSpent = (Goal- numpaid);
        cout << "you have purchased " << numTicket << " tickets!" <<endl;
        cout << "You have paid: $ " << numpaid << endl;
        if (numSpent < 0) {
            cout << "You have quality for free ride for the" <<endl;
            cout << "rest of the month." << endl;
        } else {
            cout << "Spend $ " << numSpent << " more to earn free rides for the rest of the month! " << endl;
            }
    }
    else if (fastPass ==  Y || fastPass == y) {
        Goal = 28;
        prices = 1.25;
        numpaid = (prices * numTicket);
        numSpent =(Goal - numpaid);
        cout << "you have purchased " << numTicket << " tickets!" <<endl;
        cout << "You have paid: $ " << numpaid << endl;
        if (numSpent < 0) {
            cout << "You have quality for free ride for the" <<endl;
            cout << "rest of the month." << endl;
        } else {
            cout << "Spend $ " << numSpent << " more to earn free rides for the rest of the month! " << endl;
                
                }
    }
    else {
        cout << "Invaid display invalid pass type" << endl;
    }
    cout << "Thank you for riding TriMet!"<< endl;
    
    return 0;
}
