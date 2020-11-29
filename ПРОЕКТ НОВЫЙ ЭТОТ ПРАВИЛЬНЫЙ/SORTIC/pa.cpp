
#include"y12.h"
void pa(vector <int> &A, vector <int> &B)
{
    if(B.size() > 0)
    {
        A.push_back(B[B.size()-1]);
        B.pop_back();
    }
}
