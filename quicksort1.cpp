#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
    int partion(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;

    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
     swap(arr,i+1,l);
    return i+1;
    
}

void quickSort(int arr[],int l,int r){
    if(l<r){
        int pi= partion(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}

int main()
{
    int arr[10]={32,23,56,78,12,66,37,93,29,80};
    quickSort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
    return 0;
}