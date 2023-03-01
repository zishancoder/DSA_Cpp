/*
    1   2   3   4   5   5   4   3   2   1
    1   2   3   4   *   *   4   3   2   1
    1   2   3   *   *   *   *   3   2   1
    1   2   *   *   *   *   *   *   2   1
    1   *   *   *   *   *   *   *   *   1
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,n,st,ctr;
    cin>>n;
    st=0;
    while(row<=n){
        ctr=1;
        while(ctr<=n-row+1){
            cout<<ctr<<"\t";
            ctr++;
        }

        st=2*(row-1);
        while(st>0){
            cout<<"*\t";
            st--;
        }

        ctr=n-row+1;
        while(ctr>0){
            cout<<ctr<<"\t";
            ctr--;
        }
        row++;
        cout<<endl;
    }
}