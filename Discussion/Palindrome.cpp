
/******************************************************************************
# Author:           Zakeriya Muhumed
# Lab:              Discussion #7
# Date:             March 01, 2022
# Description:      Palin
# Input:            Userinput
# Output:           string userinpout int length, palin numbers
# Sources:          Discussion 7 instruction 
#******************************************************************************/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
string userInput;
int length,palin=1;
cout << "Input: ";
cin >>userInput;
length = userInput.length();
for(int i=length-1;i>=0;i--)
{
if(tolower(userInput[i]) != tolower(userInput[length-1-i]))
palin = 0;
}
if(palin ==0)
cout <<"Output:"<<userInput<<" is not a palindrome!"<<endl;
else
cout<<"Output:"<<userInput<<" is a palindrome!"<<endl;

}