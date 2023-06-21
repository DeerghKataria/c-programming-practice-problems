/*
Aim: Write a program in C++ to find the sum of following
series S = 2 + 4 + 6 + 8 + ... N terms.
Language Used: C++
IDE: Visual Studio Code
Author: Deergh Kataria
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int iNum, iTerm = 0, iSum = 0;
    
    cout << "How many Terms do you want?....";
    cin >> iNum;

    for(int iLoop = 0; iLoop < iNum; iLoop++)
    {
        iTerm += 2;
        iSum += iTerm;
    }

    cout << "The Sum of the Series is " << iSum << endl;

    return 0;
}