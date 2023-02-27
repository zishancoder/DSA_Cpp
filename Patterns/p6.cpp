/*
    *
    *   *
    *   *   *
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col=1,n;
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout<<"*\t";
            col++;
        }
        cout<<endl;
        row++;
    }
}