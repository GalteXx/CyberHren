#include"y12.h"

void size_5(vector<int>&A,vector<int>&B){
    pb(A,B);
    pb(A,B);
    cout<<"pb"<<endl<<"pb"<<endl;
    int i = A.size();
    if(B[1]>B[0]){
        sb(B);
        cout<<"sb"<<endl;
        }
    while(i > 3){
        otsotr_mass(B,A[i-1],'b');
        i-=1;
        A.pop_back();
    }
    three_el_A(A,B);
    int d = B.size();
    while(d != 0){
        otsotr_mass(A,B[d-1],'a');
        d--;
        B.pop_back();
    }
}
