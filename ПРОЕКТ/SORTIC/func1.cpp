#include<iostream>
#include<vector>
using namespace std;

bool func1(vector <int> &A)
{
    int mina = A[0];
    int index = 0;
    for(int i = 0; i<A.size();i++){
        if(mina>A[i]){
            mina = A[i];
            index = i;
        }
    }
    for(int j = index; j>0;j--){
        if(A[j]>A[j-1]){
            return false;
        }
    }

    for(int i = index; i<A.size()-1;i++){
        if(A[i]>A[i+1]){
            return false;
        }
    }
    if(A[0]>A[A.size()-1] && (index != A.size()-1)){
        return false;
    }
    return true;
}
