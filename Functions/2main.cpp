#include<iostream>
//#include"y1.h"
#include<string>
#include<vector>
using namespace std;
void execute(string cmd, vector <int> &A, vector <int> &B)
{
    switch(cmd)
    {
        case "pa":
            pa(A, B);
        case "pb":
            pb(A, B);
        case "sa":
            sa(A);
        case "sb":
            sb(B);
        case "ss":
            ss(A, B);
        case "ra":
            ra(A);
        case "rb":
            rb(B);
        case "rr":
            rr(A, B);
        case "rra":
            rra(A);
        case "rrb":
            rrb(B);
        case "rrr":
            rrr(A, B);
    }
}

int main()
{
    vector <int> A;
    vector <int> B;
    //«аполню как "авторским" методом, если у теб€ друга€ иде€ - сообщи
    cout << "Input Array(In one line, with spaces):";
    string str;
    getline(cin, str);
    while(isNumber(str) == false)
    {
        cout << "Error: Incorrect Input... Try again" << endl;
        getline(cin, str);
     }
     int sr = 0, l = 0;//в это записываю цифры между пробелов, аналог i дл€ вектора
     for(int i = 0; str[i] != '\0'; i++)
     {
        sr = (int) str[i] - 48;
        sr *= 10;
        if(str[i] == ' ')
        {
            A[l] = sr/10;
            l++;
        }
    }
    //заполнили
    str = "";//обнул€ем str
    cout <<"input commands with spaces between: ";
    getline(cin, str);//записываем комманды
    string cmd = "";
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            execute(cmd, A, B);
            cmd = 0;
        }
        cmd += str[i];
    }

    for(int i = 1; i < A.size(); i++)
    {
        if(A[i] < A[i - 1])
        {
            cout << "KO";
            return 0;
        }
    }
    cout << "OK";
    return 0;
}
