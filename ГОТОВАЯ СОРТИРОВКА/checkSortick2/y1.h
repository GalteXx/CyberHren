#ifndef Y1_H_INCLUDED
#define Y1_H_INCLUDED


#include <iostream>
#include <vector>
#include <string>
using namespace std;

void ft_rev_list(vector<int>& mass);
void ft_super_shift_list(vector<int>& mass, int n);
bool isNumber(string str);
void ft_geline_v_vector(string str,vector<int>&A);

void sa(vector <int> &A);
void sb(vector <int> &A);
void ss(vector <int> &A, vector <int> &B);
void pa(vector <int> &A, vector <int> &B);
void pb(vector <int> &A, vector <int> &B);
void ra(vector <int> &A);
void rb(vector <int> &A);
void rr(vector <int> &A, vector <int> &B);
void rra(vector <int> &A);
void rrb(vector <int> &A);
void rrr(vector <int> &A, vector <int> &B);
void execute(string cmd, vector <int> &A, vector <int> &B);

#endif // Y1_H_INCLUDED
