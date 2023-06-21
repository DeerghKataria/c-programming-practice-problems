/*
Aim: Write a program in C++ to accept an integer number and
find the reverse of the number and also check whether it's
palindrome.
Language Used: C++
IDE: Visual Studio Code
Author: Deergh Kataria
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int iNum, iReverse = 0, iRemainder, iNumber;

    cout << "Enter the Number: ";
    cin >> iNumber;

    iNum = iNumber;

    for(int iLoop = 0; iNum > 0; iLoop++)
    {
        iRemainder = iNum % 10;
        iReverse = (iReverse * 10) + iRemainder;
        iNum /= 10;
    }

    if(iNumber == iReverse)
    cout << "The Number is a Palindrome!\n";
    else
    cout << "The Number is not a Palindrome!\n";

    return 0;
}