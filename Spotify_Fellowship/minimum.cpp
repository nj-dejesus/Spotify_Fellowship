/*
 Using your preferred language, please create an input array and then write a function to return the second smallest element in that array. For example: an input of {42, 8, 13, 79, 5, 2, 18} should return 5. *
 */

#include "header.h"

void getMinimum()
{
    int *dArray; //creating the dynamic array
    int test; // used to check if = to -1
    
    int count= 0;
    dArray = new int(CAPACITY); // sets the dynamic array size
    
    cout<<"Please insert your numbers or type -1 (to cancel):"<<endl;
    
    for(int i = 0; i<= CAPACITY; i++)
    {
        cin>> test;
        if(test != -1)
        {
            dArray[i] = test;
        }
        else
            break;
        
        count++;
    }
    
    int min = dArray[0]; // minimum number
    for(int i = 1; i <= count; i++)
    {
        if (dArray[i] < min)
        {
            min = dArray[i];
        }
        
    }
    cout<<" The minimum number is: "<< min<< endl;
    
    delete [] dArray; //deletes all the values
    dArray = NULL;
    
    cout<<"\n\n\n\n\n"<< endl;
    choice();
    
}

