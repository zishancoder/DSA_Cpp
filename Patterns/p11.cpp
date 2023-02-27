/*
    A   B   C
    A   B   C
    A   B   C
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col=1,n;
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=n){
            char ch='A'+col-1;
            cout<<ch<<"\t";
            col++;
        }
        cout<<endl;
        row++;
    }
}