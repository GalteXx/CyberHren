#include"y1.h"

void ft_geline_v_vector(string str,vector<int>&A)
{
    int o = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 32)
        {
            A.push_back(o/10);
            o = 0;
        }
        else if(str[i] != 32)
        {
            o = o + (int) str[i] - 48;
            o *= 10;
        }
    }
    A.push_back(o/10);
}
