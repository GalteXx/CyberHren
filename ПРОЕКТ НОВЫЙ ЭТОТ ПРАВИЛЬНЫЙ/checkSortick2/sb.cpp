#include"y1.h"

void sb(vector <int> &B)
{
    if(B.size()>=2){
        int tmp;
        tmp = B[B.size()-2];
        B[B.size()-2] = B[B.size()-1];
        B[B.size()-1] = tmp;
    }
}
