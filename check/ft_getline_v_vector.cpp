#include"y12.h"

void ft_geline_v_vector(vector<int>&A)
{
    string str;
    int o = 0;
    bool isNegative = false;
    getline(cin, str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 32)
        {
            A.push_back(o/10);
            o = 0;
            isNegative = false;
        }
        else if(str[i] != 32)
        {
            if(str[i] != 45)
            {
                if(isNegative)
                    {
                        o = o - ((int) str[i] - 48);
                        o *= 10;
                    }
                else
                    {
                    o = o + (int) str[i] - 48;
                    o *= 10;
                    }
            }
            if(str[i - 1] == 45 && (str[i - 2]==32 || i == 1))
            {
                o *= -1;
                isNegative = true;
            }
        }
    }
    A.push_back(o/10);
}
