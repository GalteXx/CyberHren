#include"y1.h"

void ft_rev_list(vector<int>& mass) {
    int j = mass.size() - 1;
    for (int i = 0; i < j; i++) {
        int temp = mass[i];
        mass[i] = mass[j];
        mass[j] = temp;
        j--;
    }
}
