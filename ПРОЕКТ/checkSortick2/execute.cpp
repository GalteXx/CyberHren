#include"y1.h"

void execute(string cmd, vector <int> &A, vector <int> &B)
{
    if(cmd == "pa")pa(A,B);
    if(cmd == "pb")pb(A,B);
    if(cmd == "sa")sa(A);
    if(cmd == "sb")sb(B);
    if(cmd == "ss")ss(A,B);
    if(cmd == "ra")ra(A);
    if(cmd == "rb")rb(B);
    if(cmd == "rr")rr(A,B);
    if(cmd == "rra")rra(A);
    if(cmd == "rrb")rrb(B);
    if(cmd == "rrr")rrr(A,B);

}

