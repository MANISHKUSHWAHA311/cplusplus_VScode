#include<iostream>
using namespace std;

int searchInRoatedArray(int arr[],int key,int left,int right){
    if(left>right){
        return -1;
    }
    int mid=(left+right)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[left]<=arr[mid]){
            if(arr[left]<=key && arr[mid]>=key){
                return searchInRoatedArray(arr,key,left,mid-1);
            }
            return searchInRoatedArray(arr,key,mid+1,right);
        }
        if(key<=arr[right] && key>=arr[mid]){
            return searchInRoatedArray(arr,key,mid+1,right);
        }
        return searchInRoatedArray(arr,key,left,mid-1);
}

int main()
{
    int arr[]={4,5,6,7,8,9,1,2};
    int n=8;
    int key=8;
    int i=searchInRoatedArray(arr,key,0,n-1);
    if(i==-1){
        cout<<"key doesnt exit"<<endl;
    }
    else
    {
        cout<<"key exists in :"<<i<<endl;
    }
    
    return 0;
}