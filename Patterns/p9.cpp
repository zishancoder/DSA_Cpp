/*
    1
    2   1
    3   2   1
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col,n;
    cin>>n;
    while(row<=n){
        col=row;
        while(col>0){
            cout<<col<<"\t";
            col--;
        }
        cout<<endl;
        row++;
    }
}