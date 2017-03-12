/*
    Using your preferred language, please create an input string and then
    demonstrate how you would reverse it. For example: an input of "Programming is
    so much fun!" should return "!nuf hcum os si gnimmargorP". Do *not* use a built
    in method, and be sure that your code is written clearly, in a way that enables
    others to easily understand your approach. *
 */

#include "header.h"

void reverseString()
{
    char *dArrayChar; //creating the dynamic array
    int test; // used to check if = to -1
    
    dArrayChar = new char(CAP);
    
    cout<<" Please Enter your String then -1 to cancel: "<<endl;
    cin >>dArrayChar;
    
    
    cout<< dArrayChar<< endl;
    
    dArrayChar = NULL;

    
}
