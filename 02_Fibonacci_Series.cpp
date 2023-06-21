/*
Aim: Write a code to print the fibonacci series and print the sequence.
Language Used: C++
IDE: Visual Studio Code
Author: Deergh Kataria
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int iNum1 = 0, iNum2 = 1, iNum3, iSum = 1, iTerms;
    cout << "How many terms would you like to print?....";

    cin >> iTerms;

    for(int i = 0; i < iTerms; i++)
    {
        iNum3 = iNum2 + iNum1;
        
        cout << "Term " << i+1 << " is " << iNum1 << endl;

        iNum1 = iNum2;
        iNum2 = iNum3;

        iSum = iNum3;
    }

    cout << endl << "Sum of the Series: " << iSum << endl;

    return 0;
}