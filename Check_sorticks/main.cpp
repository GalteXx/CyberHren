#include <iostream>
#include <vector>
#include <string>
#include"y1.h"
#include<windows.h>
using namespace std;

int main()
{

    vector <int> A;
    vector <int> B;
    //������� ��� "���������" �������, ���� � ���� ������ ���� - ������
    cout << "Input Array(In one line, with spaces): \n";
    string str;
    getline(cin, str);

    while(isNumber(str) == false)
    {
        cout << "Error: Incorrect Input... Try again" << endl;
        getline(cin, str);
    }
    ft_geline_v_vector(str,A);
    //���������
    str = "";//�������� str
    cout <<"\ninput commands with spaces between: \n";
    getline(cin, str);//���������� ��������
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
        if(A[i12] < A[i12 - 1])
        {
            cout << "KO";
            return 0;
        }
    }
    cout<<"OK";
    return 0;

}

