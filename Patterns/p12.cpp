/*
    A   B   C
    D   E   F
    G   H   I
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col=1,n;
    cin>>n;
    int inc=0;
    while(row<=n){
        col=1;
        while(col<=n){
            char ch = 'A'+inc;
            cout<<ch<<"\t";
            col++;
            inc++;
        }
        row++;
        cout<<endl;
    }
}