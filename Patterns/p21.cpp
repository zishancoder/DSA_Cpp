/*
                1
            1   2   1
        1   2   3   2   1
    1   2   3   4   3   2   1  
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col=1,n,sp,ctr;
    cin>>n;
    while(row<=n){
        sp=n-row;
        while(sp>0){
            cout<<"\t";
            sp--;
        }
        
        ctr=1;
        while(ctr<=row){
            cout<<ctr<<"\t";
            ctr++;
        }
        
        ctr=row-1;
        while(ctr>0){
            cout<<ctr<<"\t";
            ctr--;
        }
        cout<<endl;
        row++;
    }
}