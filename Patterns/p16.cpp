/*
            *
        *   *
    *   *   *
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,n,col=1;
    cin>>n;
    while(row<=n){
        int sp = n- row;
        while(sp>0){
            cout<<"\t";
            sp--;
        }
        int st = row;
        while(st>0){
            cout<<"*\t";
            st--;
        }
        cout<<endl;
        row++;
    }
    
}