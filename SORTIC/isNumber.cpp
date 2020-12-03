#include"y12.h"
bool isNumber(string str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] > 57 || str[i] < 48) && str[i]!=32 && str[i]!= 45)
            return false;
    }

    return true;
}

