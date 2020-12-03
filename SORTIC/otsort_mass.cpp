#include"y12.h"

void otsotr_mass(vector<int>&A, int a,char c){
    if(A.size() == 2){
        if(A[1]>A[0]){
            sa(A);
            cout<<"s"<<c<<endl;
        }
    }
    int i = A.size()-1;
    while(a>A[i]){
        i--;
    }
    if(i>=(A.size()/2)&& i!= A.size()-1){
       for(int k = i; k<A.size()-1; k++){
        ra(A);
        cout<<"r"<<c;
        cout<<endl;
       }
    }else if(i!= A.size()-1){
        for(int g = i+1; g>0;g--){
            rra(A);
            cout<<"rr"<<c;
            cout<<endl;
        }
    }
    A.push_back(a);
    cout<<"p"<<c<<endl;
    int max1 = A[0];
    int index = 0;
    for (int i1 = 0; i1 < A.size(); i1++) {
        if (A[i1] > max1) {
            max1 = A[i1];
            index = i1;
        }
    }
    if(index<=A.size()/2){
        while(index>0){
            rra(A);
            cout<<"rr"<<c<<endl;
            index--;
        }
    }else{
        while(index<A.size()){
            ra(A);
            cout<<"r"<<c<<endl;
            index++;
        }
    }
}
