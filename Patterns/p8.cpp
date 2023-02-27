/*
    1
    2   3
    3   4   5
    4   5   6   7
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col=1,n;
    cin>>n;
    while(row<=n){
        col=row;
       while(col<2*row){
            cout<<col<<"\t";
            col++;
       }
       cout<<endl;
       row++;
    }
}