/*
    A
    B   B
    C   C   C
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col=1,n;
    cin>>n;
    while(row<=n){
        col=1;
        char  ch = 'A'+row-1;
        while(col<=row){
            cout<<ch<<"\t";
            col++;
        }
        row++;
        cout<<endl;
    }
}