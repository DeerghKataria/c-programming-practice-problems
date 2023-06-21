/*
Aim: Write a program in C++ to find the sum of the
following series:
1! + 2! + 3! + 4! + .... + n!

Language Used: C++
IDE: Visual Studio Code
Author: Deergh Kataria
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int iNum, iFact = 1, iSum = 0;

    cout << "Enter the Number of Terms: ";
    cin >> iNum;

    for(int iLoop = 1; iLoop <= iNum; iLoop++)
    {
        iFact = iFact * iLoop;
        iSum = iSum + iFact;
    }

    cout << "Sum of the Series for " << iNum
    << " Terms is " << iSum << endl;

    return 0;
}
