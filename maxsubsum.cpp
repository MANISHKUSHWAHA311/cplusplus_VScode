#include<iostream>
using namespace std;

void maxSubSum(int arr[],int n,int k,int x){
    int sum=0;int ans=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum<k){
        ans=sum;
    }
    for(int i=k;i<n;i++){
        sum=sum-arr[i-k];
        sum=sum+arr[i];

        if(sum<x){
            ans=max(ans,sum);
        }
    }
    cout<< ans <<" maximum sum subarray in k element"<<endl;
}

int main()
{
    int arr[]={7,5,4,6,8,9};
    int n=6;
    int k=3;
    int x=20;
    maxSubSum(arr,n,k,x);
    
    return 0;
}