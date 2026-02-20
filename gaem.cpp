// Gaem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "dice.h"
#include "entity.h"
#include "pack.h"
#include "items.h"

using namespace std;

int main()
{
    int i;

    i = roll_with_advantage(20, 1);

    cout << i;
}


