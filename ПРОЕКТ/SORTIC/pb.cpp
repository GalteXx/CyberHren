#include"y12.h"
void pb(vector <int> &A, vector <int> &B)
{
    if(A.size() > 0)
    {
        B.push_back(A[A.size()-1]);
        A.pop_back();
    }
}
