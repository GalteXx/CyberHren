#include <iostream>
#include <vector>
using namespace std;

void sa(vector <int> &A)
{
    int tmp = 0;
    tmp = A[1];
    A[1] = A[0];
    A[0] = tmp;
}
