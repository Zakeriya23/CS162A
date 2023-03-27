#include <iostream>
using namespace std;

void welcome();
void menu();
int readOption() ;
void executeOption(int);

int totalBill = 0;

int main() {
welcome();
int choice;

// exits when user inputs 4:
do {
// print menu
menu();
choice = readOption();
executeOption(choice);
} while (choice != 4);
return 0;
}

// welcome message
void welcome() {
cout << "Welcome to my Coffee Shop!\n";
}

//menu
void menu() {
cout << "Please pick an option below:\n";
cout << "1. Donuts/Muffins/Pastries\n";
cout << "2. Bagels/Toasts\n";
cout << "3. Coffee/Tea\n";
cout << "4. Quit\n";
}

// reads option
int readOption() {
int option;
cout << ">> ";

do {
cin >> option;
if (option < 1 || option > 4) {
cout << "Invalid option!!\n";
}
} while (option < 1 || option > 4);

return option;
}

void executeOption(int op) {
if (op == 1) {
char c;
cout << "\nWould you like Donuts (D), Muffins (M), or Pastries (P): ";
while (true) {
cin >> c;
if (c != 'P' && c != 'M' && c != 'D') {
cout << "Invalid choice! Pick again\n";
} else {
break;
}
}

totalBill += 4;

if (c == 'D') {
cout << "Donut added - $4\n";
cout << "Total - $" << totalBill << endl;
} else if (c == 'P') {
cout << "Pastry added - $4\n";
cout << "Total - $" << totalBill << endl;
} else if (c == 'M') {
cout << "Muffin added - $4\n";
cout << "Total - $" << totalBill << endl;
}

} else if (op == 2) {
char c;
cout << "\nWould you like Bagels (B), or Toast (T): ";
while (true) {
cin >> c;
if (c != 'T' && c != 'B') {
cout << "Invalid choice! Pick again\n";
} else {
break;
}
}

totalBill += 2;

if (c == 'B') {
cout << "Bagel added - $2\n";
cout << "Total - $" << totalBill << endl;
} else if (c == 'T') {
cout << "Toast added - $2\n";
cout << "Total - $" << totalBill << endl;
}

} else if (op == 3) {
char c;
cout << "\nWould you like Coffee (C), or Tea (T): ";
while (true) {
cin >> c;
if (c != 'T' && c != 'C') {
cout << "Invalid choice! Pick again\n";
} else {
break;
}
}
totalBill += 4;
if (c == 'C') {
cout << "Coffee added - $4\n";
cout << "Total - $" << totalBill << endl;
} else if (c == 'T') {
cout << "Tea added - $4\n";
cout << "Total - $" << totalBill << endl;
}
} else {
cout << "\nThank you for using my Coffee Shop Program!\n";
cout << "Your total is - $" << totalBill << endl;
cout << "Thank you for coming to my Coffee Shop!\n";
}
}
