
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    string player1;
    string player2;
    string player3;
    
    
    int rock1;
    int rock2;
    int rock3;
    int avgNum;
    std:: cout << "Welcome to the Rock Collector Championships!" << endl;
    cout << endl;
   
    cout << "Eneter player 1 name: " << endl;
    getline(cin, player1);
    cout << "How many rocks did " << player1 << " collect?" << endl;
    cin >> rock1;
    cin.ignore(100, '\n');
    
    cout << "Eneter player 2 name: " << endl;
    getline(cin, player2);
    cout << "How many rocks did " << player2 << " collect?" << endl;
    cin >> rock2;
    cin.ignore(100, '\n');
    
    cout << "Eneter player 3 name: " << endl;
    getline(cin,player3);
    cout << "How many rocks did " << player3 << " collect?" << endl;
    cin >> rock3;
    cin.ignore(100, '\n');
    
    // 3 way tie
    if (rock1 == rock2 && rock1 == rock3){
        cout << "It is a three way tie!" << endl << endl;
        avgNum = (rock1 + rock2 + rock3)/3;
        cout << "The average number of rocks collected by the top three players is " << avgNum << " rocks!" <<endl << endl;
        cout << "Congratulations Rock Collectors" << endl << endl;
    }
    
    // 2 way tie  1,2 tied
    else if (rock1 == rock2 && rock1 > rock3){
        cout << player1 << " and " << player2 << " are tied for firsrt place." << endl;
        cout << player3 << " is in second place!" << endl;
        avgNum = (rock1 + rock2 + rock3)/3;
        cout << "The average number of rocks collected by the top three players is " << avgNum << " rocks!" <<endl << endl;
        cout << "Congratulations Rock Collectors" << endl << endl;
    }
    
    // 2 way tie  1,3 tied
    else if (rock1 == rock3 && rock1 > rock2){
        cout << player1 << " and " << player3 << " are tied for firsrt place." << endl;
        cout << player2 << " is in second place!" << endl;
        avgNum = (rock1 + rock2 + rock3)/3;
        cout << "The average number of rocks collected by the top three players is " << avgNum << " rocks!" <<endl << endl;
        cout << "Congratulations Rock Collectors" << endl << endl;
    }
    // 1 first place
    else if (rock1 > rock3 && rock1 > rock2 ){
        cout << player1 << " is first place." << endl;
        //player 2 second, player 3 thrid place
        if (rock2 > rock3){
            cout << player2 << " is in second place!" << endl << player3  << " places thrid place!" << endl;
            avgNum = (rock1 + rock2 + rock3)/3;
            cout << "The average number of rocks collected by the top three players is " << avgNum << " rocks!" <<endl << endl;
            cout << "Congratulations Rock Collectors" << endl << endl;
        }
        //player 3 second, player 2 thrid place
        if (rock3 > rock2) {
            cout << player3 << " is in second place!" << endl << player2  << " places thrid place!" << endl;
            avgNum = (rock1 + rock2 + rock3)/3;
            cout << "The average number of rocks collected by the top three players is " << avgNum << " rocks!" <<endl << endl;
            cout << "Congratulations Rock Collectors" << endl << endl;
        }
            
        
    }
    //2 first place
    else if (rock2 > rock3 && rock2 > rock3 ){
        cout << player2 << " is first place." << endl;
        // 1 first place , 3 thid place
        if (rock1 > rock3){
            cout << player1 << " is in second place!" << endl << player3  << " places thrid place!" << endl;
            avgNum = (rock1 + rock2 + rock3)/3;
            cout << "The average number of rocks collected by the top three players is " << avgNum << " rocks!" <<endl << endl;
            cout << "Congratulations Rock Collectors" << endl << endl;
        }
        // 3 second place, 1 thrid place//
        if (rock3 > rock1) {
            cout << player3 << " is in second place!" << endl << player1  << " places thrid place!" << endl;
            avgNum = (rock1 + rock2 + rock3)/3;
            cout << "The average number of rocks collected by the top three players is " << avgNum << " rocks!" <<endl << endl;
            cout << "Congratulations Rock Collectors" << endl << endl;
        }
        
    //3 first place
    else if (rock3 > rock1 && rock3 > rock2 ){
            cout << player3 << " is first place." << endl;
            //rock 1 second place, rock 2 thrid place//
            if (rock1 > rock2){
                cout << player1 << " is in second place!" << endl << player2  << " places thrid place!" << endl;
                avgNum = (rock1 + rock2 + rock3)/3;
                cout << "The average number of rocks collected by the top three players is " << avgNum << " rocks!" <<endl << endl;
                cout << "Congratulations Rock Collectors" << endl << endl;
            }
            // rock 2 sedon place, rock thrid place.//
            if (rock2 > rock1) {
                cout << player2 << " is in second place!" << endl << player1  << " places thrid place!" << endl;
                avgNum = (rock1 + rock2 + rock3)/3;
                cout << "The average number of rocks collected by the top three players is " << avgNum << " rocks!" <<endl << endl;
                cout << "Congratulations Rock Collectors" << endl << endl;
            }
    }
    

    }

    return 0;
}
