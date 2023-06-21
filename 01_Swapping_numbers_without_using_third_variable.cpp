/*
Aim: To swap two numbers without using a third variable.
Language Used: C++
IDE: Visual Studio Code
Author: Deergh Kataria
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int Swap(int &x, int &y)
{
    x = x + y;       // 30 = 20 + 10
    y = x - y;       // 20 = 30 - 10
    x = x - y;       // 10 = 30 - 20
    return (x,y);
}

int main()
{
    int iNum_1, iNum_2;

    cout << "Before Swapping";
    cout << "\nEnter Number 1: ";
    cin >> iNum_1;
    cout << "Enter Number 2: ";
    cin >> iNum_2;

    Swap(iNum_1, iNum_2);   // Calling Function

    cout << "\nAfter Swapping";
    cout << "\nEnter Number 1: " << iNum_1;
    cout << "\nEnter Number 2: " << iNum_2 << endl;
}