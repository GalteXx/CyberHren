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

void pb(vector <int> &A, vector <int> &B)
{
    if(A.size() > 0)
    {
        ft_rev_list(B);
        B.push_back(A[0]);
        ft_rev_list(B);
        A.erase(0);
        ra(A);
    }
}

}
