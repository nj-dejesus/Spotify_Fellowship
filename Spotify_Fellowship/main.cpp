/*
 Using your preferred language, please create an input string and then demonstrate how you would reverse it. For example: an input of "Programming is so much fun!" should return "!nuf hcum os si gnimmargorP". Do *not* use a built-in method, and be sure that your code is written clearly, in a way that enables others to easily understand your approach. *
 */
/*
 Using your preferred language, please create an input array and then write a function to return the second smallest element in that array. For example: an input of {42, 8, 13, 79, 5, 2, 18} should return 5. *
 */

#include <iostream>
#include "header.h"


int main()
{
    
    int x = choice();
    
    if (x == 1)
    {
        reverseString();
    }
    else if( x == 2)
    {
        getMinimum();
    }
    else
    {
        cout<<"WRONG CHOICE... RETRY"<<endl;
        choice();
    }
    cin.get();
    return 0;
}
