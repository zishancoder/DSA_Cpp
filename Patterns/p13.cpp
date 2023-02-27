/*
    A   B   C
    B   C   D
    C   D   E
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col,n;
    cin>>n;
    while(row<=n){
        col=1;
        int inc = 0;
        while(col<=n){
            char ch = 'A'+row-1+inc;
            cout<<ch<<"\t";
            col++;
            inc++;
        }
        row++;
        cout<<endl;
    }
}