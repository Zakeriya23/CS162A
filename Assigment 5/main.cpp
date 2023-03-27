#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cout << "Welcome to Message Decoder!" << endl << endl;
    cout << "Enter a single line text message: ";
    getline(cin, input);
    cout << "You entered: " << input << endl;
    if (input.find("JK") || input.find("jk")){
        cout << "JK: just kidding" << endl;
    }
    if (input.find("IDK") || input.find("idk")){
        cout << "IDK: I don't know" << endl;
    }
    if (input.find("BFF") || input.find("bff")){
        cout << "BFF: best friend forever" << endl;
    }
    if (input.find("TMI") || input.find("tmi")){
        cout << "TMI: too much information" << endl;
    }
    if (input.find("TTYL") || input.find("ttyl")) {
        cout << "TTYL: talk to you later" << endl;
    }
    
    return 0;
}
