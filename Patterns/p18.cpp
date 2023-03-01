/*
    *   *   *   *
        *   *   *
            *   *
                *
*/

#include<iostream>
using namespace std;

int main(){
    int row,col,n,sp,st;
    cin>>n;
    row=1;
    col=1;

    while(row<=n){
        sp = row - 1;
        while(sp>0){
            cout<<"\t";
            sp--;
        }
        st = n-row+1;
        while(st>0){
            cout<<"*\t";
            st--;
        }
        cout<<endl;
        row++;
    }
}