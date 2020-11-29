#include <iostream>
#include <vector>
#include <string>
#include"y1.h"
#include<windows.h>
#include<conio.h>
using namespace std;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
int main()
{

    vector <int> A;
    vector <int> B;
    //«аполню как "авторским" методом, если у теб€ друга€ иде€ - сообщи
    SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "Input Array(In one line, with spaces): ";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

    string str;
    getline(cin, str);
    while(isNumber(str) == false)
    {
        SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Error: Incorrect Input... Try again" << endl;
        SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
        getline(cin, str);
    }
    ft_geline_v_vector(str,A);
    //заполнили
    str = "";//обнул€ем str
    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
    cout <<"Input commands with spaces between: ";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
    getline(cin, str);//записываем комманды
    string cmd = "";
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            execute(cmd, A, B);
            cmd = "";

        }else{
        cmd += str[i];
        }
    }
    execute(cmd,A,B);
    for(int i12 = 1; i12 < A.size(); i12++)
    {
        if(A[i12] > A[i12 - 1])
        {
            SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "KO";
            SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

            return 0;
        }
    }
    SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"OK";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

    return 0;

}

