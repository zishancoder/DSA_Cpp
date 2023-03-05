#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ans=0,i=0;
    cin>>n;
    while(n!=0){
        int bit=n%10;
        n=n/10;
        ans=ans+bit*pow(2,i);
        i++;
    }
    cout<<ans;
}