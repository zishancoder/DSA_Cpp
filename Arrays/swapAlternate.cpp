#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i+1<size;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[100] = {1,2,3,4,5,6,7};
    int size = 7;

    print(arr,size);
    swapAlternate(arr,size);
    print(arr,size);
}