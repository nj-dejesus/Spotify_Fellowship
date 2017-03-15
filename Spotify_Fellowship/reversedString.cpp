/*
 Using your preferred language, please create an input string and then
 demonstrate how you would reverse it. For example: an input of "Programming is
 so much fun!" should return "!nuf hcum os si gnimmargorP". Do *not* use a built
 in method, and be sure that your code is written clearly, in a way that enables
 others to easily understand your approach. *
 */

#include "header.h"
using std::cin;


void reversedString()
{
    string newString;
    cin.ignore();
    cout<< "Enter your string: ";
    getline(cin, newString);
    
    unsigned int stringSize = unsigned (newString.size());
    //cout<<"Size of string: "<<stringSize<<endl;
    
    char newArray[stringSize];
    
    for(int i = 0; i<=stringSize; i++)
    {
        newArray[i] = newString[i];
    }
    cout<<"\nYour Original Sentance is: ";
    for(int i = 0; i<=stringSize; i++)
    {
        cout<< newArray[i];
    }
    cout<<"\nYour Reversed Sentance is: ";
    for(int i = stringSize; i>=0; i--)
    {
        cout<< newArray[i];
    }
    choice();
}
