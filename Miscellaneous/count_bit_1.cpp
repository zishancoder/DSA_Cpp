#include<iostream>
using namespace std;

int count_1bit(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}


int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int ans=count_1bit(n);
    cout<<ans;
}