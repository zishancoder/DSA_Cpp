#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    //Write your code here
    bool flag = 0;

    for(int i=0;i<size;i++){
        flag=0;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }

        if(flag==0){
            return arr[i];
        }
    }
    return -1;
}


int main(){
    int arr[100]={5,3,1,5,1,3,4,7,4,8,8};
    int size = 11;

    int ans = findUnique(arr,size);

    cout<<ans;
}