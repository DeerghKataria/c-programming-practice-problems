/*
Aim: Write a program in C++ to accept an integer number and
check whether it's a Perfect Number or not.
Language Used: C++
IDE: Visual Studio Code
Author: Deergh Kataria
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int iNum, iSum = 0;
    
    cout << "Enter the Number: ";
    cin >> iNum;

    for(int iLoop = 1; iLoop <= (iNum/2); iLoop++)
    {
        if(iNum % iNum == 0)
        {
            iSum += iLoop;
        }
    }

    if(iNum == iSum)
    {
        cout << "It is a Perfect Number\n";
    }
    else
    {
        cout << "It is not a Perfect Number\n";
    }
    return 0;
}