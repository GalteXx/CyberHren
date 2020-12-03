#include"y12.h"

void sa(vector <int> &A)
{
    if(A.size()>=2){
        int tmp;
        tmp = A[A.size()-2];
        A[A.size()-2] = A[A.size()-1];
        A[A.size()-1] = tmp;
    }
}
