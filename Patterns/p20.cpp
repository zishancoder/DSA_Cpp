/*
                1
            2   3
        4   5   6
    7   8   9   10
*/

#include<iostream>
using namespace std;

int main(){
    int row,sp,ctr,n,num;
    row=1;
    ctr=1;
    cin>>n;
    while(row<=n){
        sp=n-row;
        while(sp>0){
            cout<<"\t";
            sp--;
        }
        num=row;
        while(num>0){
            cout<<ctr<<"\t";
            ctr++;
            num--;
        }
        cout<<endl;
        row++;
    }
}