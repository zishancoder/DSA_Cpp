/*
    1   2   3   4
        2   3   4
            3   4
                4
*/

#include<iostream>
using namespace std;

int main(){
    int row,sp,ctr,n;
    row=1;
    cin>>n;
    while(row<=n){
        sp=row-1;
        while(sp>0){
            cout<<"\t";
            sp--;
        }

        ctr=row;
        while(ctr<=n){
            cout<<ctr<<"\t";
            ctr++;
        }
        cout<<endl;
        row++;
    }
}