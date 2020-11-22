#include <iostream>
#include <string>
#include"CyberHren.h"
using namespace std;
bool isNumber(string str)
{
    for(int i; str[i] != '\0'; i++)
    {
        if(str[i] > 57 || str[i] < 48)
            return false;
    }

    return true;
}
