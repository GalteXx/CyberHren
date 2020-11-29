#include"y12.h"
void ft_super_shift_list(vector<int>& mass, int n) {
    if (n >= 0) {
        for (int j = 0; j < n; j++) {
            int temp = mass[mass.size() - 1];
            for (int i = mass.size() - 1; i > 0; i--) {
                mass[i] = mass[i - 1];
            }
            mass[0] = temp;
        }
    }

    if (n < 0) {
        n = -n;
        for (int j = 0; j < n; j++) {
            int temp = mass[0];
            for (int i = 1; i < mass.size(); i++)
                mass[i - 1] = mass[i];
                mass[mass.size() - 1] = temp;
        }
    }
}
