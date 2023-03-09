#include<iostream>
using namespace std;

int findMin(int arr[],int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}

int findMax(int arr[],int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int max = findMax(arr,size);
    int min = findMin(arr,size);

    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;

    return 0;
}