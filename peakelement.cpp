#include<iostream>
using namespace std;

int peakElement(int arr[],int low,int high,int n){
    int mid=low+(high-low)/2;

    if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid])){
        return mid;
    }
    else if (mid>0 && arr[mid-1]>arr[mid]){
        return peakElement(arr,low,mid-1,n);
    }
    else
    {
        return peakElement(arr,mid+1,high,n);
    }
    
}

int main()
{
    int arr[]={2,4,6,9,1,3,0};
    int n=7;

    cout<<"peak element indexxx is :"<< peakElement(arr,0,n-1,n)<< endl;
    return 0;
}