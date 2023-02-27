/*
    1   2   3
    4   5   6
    7   8   9
*/

#include<iostream>
using namespace std;

int main(){
    int row=1,col=1,n;
    cin>>n;
    int counter=1;
    while(row<=n){
        col=1;
        while(col<=n){
            cout<<counter<<"\t";
            col++;
            counter++;
        }
        cout<<endl;
        row++;
    }
}