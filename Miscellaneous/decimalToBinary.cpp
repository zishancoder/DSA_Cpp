#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,binary=0;
    int i=0;
    cin>>n;
    while(n!=0){
        int bit = n&1;
        n=n>>1;
        binary=bit*pow(10,i)+binary;
        i++;
    }
    cout<<"Ans: "<<binary;
}