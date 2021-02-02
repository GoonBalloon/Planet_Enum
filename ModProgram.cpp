/*
ModProgram - determines the Mod of two programs
Omid Hosseinmardi
CSCI 182
1/28/2021
*/
// find a way to get the remainder efficiently
#include <iostream>

//Forward Declaration
int ModFunc1(int, int);


int ModFunc1(int nFirstVal, int nSecondVal)
{
    // Test that parameters are correct
    // First Val must be greater than second
    if(nFirstVal < nSecondVal || nSecondVal < 1)
    //keep track of left over value after each su
    int nLeftOverVal = nFirstVal;
    while(nFirstVal >= nSecondVal)
        nLeftOverVal -= nSecondVal; // enter a value ***********
    
    return nLeftOverVal;
}


// Main Function
int main()
{
    int nVal1 = 73;
    int nVal2 = 13;

    int nReturn = ModFunc1(nVal1, nVal2);

    std::cout << nReturn << std::endl;
}