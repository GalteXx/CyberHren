#include <iostream>
#include<string>
#include<vector>
#include"y12.h"
#include<windows.h>
#include<conio.h>
using namespace std;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
int main()
{
    vector<int>A;
    vector<int>B;
    string str;
    SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"</>"<<endl<<"Enter number in a row: ";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
    getline(cin, str);
    while(isNumber(str) == false)
    {
        SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Error: Incorrect Input... Try again" << endl;
        SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
        getline(cin, str);
    }
    SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout<<"Command used: ";
    SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
    cout<<endl;
    ft_geline_v_vector(str,A);
    int p = 0;
    for(int i = 0;i<A.size();i++){
        if(A[i]>A[i+1]){
            p+=1;
        }
    }
    if(p == A.size()){
        return 0;
    }
    if(A.size() == 1){
        cout<<"NONE";
    }
    if(A.size() == 2){
        if(A[1]>A[0]){
            sa(A);
            cout<<"sa";
        }
    }
    if(A.size()==3){
        three_el_A(A,B);
    }
    if(A.size() == 4){
        size_4(A,B);
    }
    if(A.size()>4){
        size_5(A,B);
    }

    SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<"Final sorted array is: ";

    SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
    for(int i = 0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout<<"</>";
    return 0;
}
