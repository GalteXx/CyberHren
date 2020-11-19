#include <iostream>
#include <vector>
using namespace std;

void sb(vector <int> &B)
{
    int tmp = 0;
    tmp = B[1];
    B[1] = B[0];
    B[0] = tmp;
}
