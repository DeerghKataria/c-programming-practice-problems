/*
Aim: Write a program in C++ to check whether a number
is prime or not.
Language Used: C++
IDE: Visual Studio Code
Author: Deergh Kataria
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int iNum;
    cout << "Enter the Number: ";
    cin >> iNum;

    for(int iLoop = 2; iLoop <= (iNum/2); iNum++)
    {
        if(iNum % iLoop == 0)
        {
            cout << "It is not a Prime Number!\n";
            break;
        }
        else
        {
            cout << "It is a Prime Number!\n";
            break;
        }
    }

    return 0;
}