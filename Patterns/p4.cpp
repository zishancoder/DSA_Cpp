/*
    3   2   1
    3   2   1
    3   2   1
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col=1,n;
    cin>>n;
    while(row<=n){
        col=n;
        while(col>0){
            cout<<col<<"\t";
            col--;
        }
        cout<<endl;
        row++;
    }
}