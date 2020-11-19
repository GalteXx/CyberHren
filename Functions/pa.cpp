#include <iostream>
#include <vector>

using namespace std;
void ft_rev_list(vector<int> &A) {
    int j = A.size() - 1;
    for (int i = 0; i < j; i++) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        j--;
    }
}

void pa(vector <int> &A, vector <int> &B)
{
    if(B.size() > 0)
    {
        ft_rev_list(A);
        A.push_back(B[0]);
        ft_rev_list(A);
    }

}

