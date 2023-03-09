#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int elem){

    for(int i=0;i<size;i++){
        if(arr[i]==elem){
            return 1;
        }
    }

    return 0;
}

int main(){
    int arr[100]={12,15,47,-9,6,100,50,54,78};
    int size = 9;

    bool result = LinearSearch(arr,size,78);

    if(result==1){
        cout<<"Present";
    }else{
        cout<<"Not Present";
    }
    return 0;
}