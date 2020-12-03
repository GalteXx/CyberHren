#include"y12.h"

void three_el_A(vector<int>&A,vector<int>&B){

    if(A[0]<A[1] && A[1]<A[2] && A[0]<A[2]){
        ra(A);
        sa(A);
        cout<<"ra"<<endl<<"sa"<<endl;
    }else if(A[0]<A[1] && A[1]>A[2] && A[0]<A[2]){
        rra(A);
        cout<<"rra"<<endl;
    }else if(A[0]>A[1] && A[1]<A[2] && A[0]<A[2]){
        ra(A);
        cout<<"ra"<<endl;
    }else if(A[0]<A[1] && A[1]>A[2] && A[0]>A[2]){
        rra(A);
        sa(A);
        cout<<"rra"<<endl<<"sa"<<endl;
    }else if(A[0]>A[1] && A[1]<A[2] && A[0]>A[2]){
        sa(A);
        cout<<"sa"<<endl;
    }
}
