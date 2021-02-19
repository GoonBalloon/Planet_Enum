/*
Day1Min Project
Omid Hosseinamrdi
CSCI 182
Jan 28, 2021

This is a sample program that shows how to
determine the min of two values
*/
#include <iostream>
using namespace std;
int main()
{

    int nVal1 = 50;
    int nVal2 = 30;

    if(nVal1 < nVal2)
    {
        cout << "nVal1 is less" << endl;
    }
    else
    {
        cout << "nVal2 is less" << endl;
    }
    //divide the min from the max and discard the decimal, then subtract the answer by the min.
    cout << "Remainder is:" << (nVal2-(nVal1/nVal2)) << endl;

    return 0;
    
    
    return 0;

}
