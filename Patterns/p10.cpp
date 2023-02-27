/*
    A   A   A
    B   B   B
    C   C   C
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col,n;
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=n){
            char ch = 'A'+ row - 1;
            cout<<ch<<"\t";
            col++;
        }
        cout<<endl;
        row++;
    }
}