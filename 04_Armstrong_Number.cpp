/*
Aim: Write a program in C++ to accept an integer number and
check whether it's am Armstrong Number or not.
Language Used: C++
IDE: Visual Studio Code
Author: Deergh Kataria
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int iNum, iArmstrong = 0, iRemainder, iNumber;
    cout << "Enter the Number: ";
    cin >> iNumber;

    iNum = iNumber;

    for(int iLoop = 0; iNum > 0; iLoop++)
    {
        iRemainder = iNum % 10;
        iArmstrong = iArmstrong + (iRemainder*iRemainder*iRemainder);
        iNum /= 10;
    }

    if(iNumber == iArmstrong)
    cout << "The Number is an Armstrong Number!\n";
    else
    cout << "The Number is not an Armstrong Number!\n";
}
