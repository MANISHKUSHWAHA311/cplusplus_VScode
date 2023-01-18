#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void waveSort(int arr[],int n){

    for(int i=1;i<n;i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1]){
            swap(arr,i,i+1);
        }
    }
}

int main()
{
    int n;

    int arr[]={3,5,4,2,1,6,7};
    waveSort(arr,7);

    for(int i=0;i<7;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}