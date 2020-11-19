#include <iostream>
#include <vector>
using namespace std;

void sb(vector <int> &A, vector <int> &B)
{
    int tmp = 0;
    tmp = B[1];
    B[1] = B[0];
    B[0] = tmp;
    int tmp1 = 0;
    tmp1 = A[1];
    A[1] = A[0];
    A[0] = tmp1;
}
